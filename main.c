/*
 *     General purpose command interpreter driver for 16(L)F1619 UART and nordic nRF24L01P transceiver
 * 
 *     author: john szymanski
 *     johnszy@icloud.com
 * 
 *     IDE:  MPLAB X IDE v5.40  (www.microchip.com)
 *     C Compiler:   XC8 v2.30
 *     
 *     --------   16F1619      ---------------------------
 *     UART Pinouts: Pin 17 = RA2 = Rx
 *                   Pin 6  = RC4 = Tx
 * 
 *     not using RTS, CTS for UART
 * 
 *     nRF24L01P Pinouts:     Pin  5  = RC5 = CE
 *                            Pin  8  = RC6 = CSN 
 *                            Pin 10  = RB7 = IRQ
 *                            Pin 11  = RB6 = CLK
 *                            Pin 12  = RB5 = SDO  --> wire to SDI of Device to drive
 *                            Pin 13  = RB4 = SDI  -->>wire to SDO of Device to drive
 * 
 *     IRSENSE Pinout:        Pin  9  = RC7 = IRSENSE

 *   
 *     Mouser Part #: 949-NRF24L01P
 *     https://www.mouser.com/ProductDetail/Nordic-Semiconductor/NRF24L01P?qs=yqaQSyyJnNiKlgjT8AqoOw%3D%3D
 * 
 *  */

#include <string.h>
#include <stdio.h>
#include "mcc_generated_files/mcc.h"
#include "nRF24L01.h"
#include "wl_module.h"

#define VERSION_DATE "v1.0.0 2-12-24"
#define MAX_COMMAND_LEN 30
char c;

char command[MAX_COMMAND_LEN];
void executeCommand( char [] );
void dumpBytesToUART(unsigned char * , int );

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    int seconds = 0;
    uint8_t index = 0;
    
    SPI_Open(SPI_DEFAULT); 
    
    INT_SetInterruptHandler(ISR);
    
    unsigned char payload[wl_module_PAYLOAD];
    unsigned char nRF_status;
    
    wl_module_init();
    __delay_ms(50);
    wl_module_rx_config();
    __delay_ms(50); 

    for( int i=0; i< wl_module_PAYLOAD; i++)
    {
        payload[i] = '0';
    }
    
    while (1)
    {
        //while(!wl_module_data_ready());
            
        nRF_status = wl_module_get_data(payload);
        if (payload[0] == 33)
            LED2_SetHigh();
        else
            LED2_SetLow();
        
        
        c = getch();
        if(c != '\n' && c != '\r')
        {
            command[index++] = c;
            if(index > MAX_COMMAND_LEN)
            {
                index = 0;
            }
        }

        //if(c == '\n')
        if(c == '$')
        {
            command[index] = '\0';
            index = 0;
            printf("received: %s",command);

            executeCommand( command ) ;
        }
        
        dumpBytesToUART(payload, wl_module_PAYLOAD );
        
//        if((payload[0]== 17) && (payload[1]== 19))
//        {
//            LED2_Toggle();
//            __delay_ms(10);
//        }
        
        //printf("SW1 value= %d\r\n", SW1_GetValue());
        
//        if (SW1_LAT == 1){
//            printf("SW1 value= %d", SW1_GetValue());
//        }
//        else {
//            printf("SW1 pressed = 0");
//        }
          
          
        __delay_ms(10); 
//        LED1_Toggle();
//        LED2_Toggle();
//        LED3_Toggle();
//        printf("count = %d\r\n",seconds);
//        seconds += 1;
//        __delay_ms(500);
        
         
        
        

        // Add your application code
    }
}


void dumpBytesToUART(unsigned char * data, int num)
{   
    printf("payload = ");
    for( int i=0; i< num; i++)
    {
        printf("%c", data[i]);
    }
    printf("\r\n");
}
void executeCommand( char cmd[] )
{
    cmd[strlen(cmd)-1] = '\0';
    
    char *s = cmd+1;
    char *pt;
    
    if (cmd[0] == 'a')
    {   
        uint16_t pwm_nums[] = {0,0,0,0};
        int count = 0;
        pt = strtok (s,",");
        while (pt != NULL) {
            int a = atoi(pt);
            if (a<0 || (a>1023))
                a=0;
            pwm_nums[count++] = (uint16_t)a;
            //printf("%d\n", a);
            pt = strtok (NULL, ",");
            
        }
//        PWM6_LoadDutyValue(pwm_nums[0]);  //red
//        PWM5_LoadDutyValue(pwm_nums[1]);  // green
//        PWM4_LoadDutyValue(pwm_nums[2]);  // blue
//        PWM3_LoadDutyValue(pwm_nums[3]);  //white
        
        //printf("received all command");
        return;
          
    }

    
    uint16_t pwm_val;
    int i = atoi(s);
    if (i<0)
        i=0;
    if (i>1023)
        i=1023;
    pwm_val = (uint16_t)i;
    //printf("pwm_val= %d",pwm_val);
    

    if ( pwm_val >1023)  //if number is not in range
        pwm_val = 0;
    
    if (cmd[0] == 'w'){
//        PWM3_LoadDutyValue(pwm_val);   //WHITE
        return;
    }
    
    if (cmd[0] == 'b'){
//        PWM4_LoadDutyValue(pwm_val);   //BLUE
        return;
    }
    
    if (cmd[0] == 'g'){
//        PWM5_LoadDutyValue(pwm_val);   //GREEN
        return;
    }
    
    if (cmd[0] == 'r'){
//        PWM6_LoadDutyValue(pwm_val);   //RED
        return;
    }
    
    if (cmd[0] == 'v'){
        printf("version = %s", VERSION_DATE );
        return;
    } 
    if (cmd[0] == 'f'){
        printf("flush buffer received\n");
        return;
    } 
//    if (cmd[0] == 'x'){
//        printf("Leaving Bluetooth Mode\n");
//        STARTUP_MODE= true;
//        BLUETOOTH_MODE = false;
//        return;
//    } 
}
/**
 End of File
*/