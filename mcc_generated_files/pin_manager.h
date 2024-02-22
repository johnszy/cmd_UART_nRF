/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1619
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetAnalogMode()         do { ANSELBbits.ANSB6 = 1; } while(0)
#define RB6_SetDigitalMode()        do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISCbits.TRISC0
#define LED1_LAT                  LATCbits.LATC0
#define LED1_PORT                 PORTCbits.RC0
#define LED1_WPU                  WPUCbits.WPUC0
#define LED1_OD                   ODCONCbits.ODC0
#define LED1_ANS                  ANSELCbits.ANSC0
#define LED1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED1_GetValue()           PORTCbits.RC0
#define LED1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISCbits.TRISC1
#define LED2_LAT                  LATCbits.LATC1
#define LED2_PORT                 PORTCbits.RC1
#define LED2_WPU                  WPUCbits.WPUC1
#define LED2_OD                   ODCONCbits.ODC1
#define LED2_ANS                  ANSELCbits.ANSC1
#define LED2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED2_GetValue()           PORTCbits.RC1
#define LED2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISCbits.TRISC2
#define LED3_LAT                  LATCbits.LATC2
#define LED3_PORT                 PORTCbits.RC2
#define LED3_WPU                  WPUCbits.WPUC2
#define LED3_OD                   ODCONCbits.ODC2
#define LED3_ANS                  ANSELCbits.ANSC2
#define LED3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED3_GetValue()           PORTCbits.RC2
#define LED3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)

// get/set CE aliases
#define CE_TRIS                 TRISCbits.TRISC5
#define CE_LAT                  LATCbits.LATC5
#define CE_PORT                 PORTCbits.RC5
#define CE_WPU                  WPUCbits.WPUC5
#define CE_OD                   ODCONCbits.ODC5
#define CE_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define CE_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define CE_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define CE_GetValue()           PORTCbits.RC5
#define CE_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define CE_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define CE_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define CE_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define CE_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define CE_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

// get/set CSN aliases
#define CSN_TRIS                 TRISCbits.TRISC6
#define CSN_LAT                  LATCbits.LATC6
#define CSN_PORT                 PORTCbits.RC6
#define CSN_WPU                  WPUCbits.WPUC6
#define CSN_OD                   ODCONCbits.ODC6
#define CSN_ANS                  ANSELCbits.ANSC6
#define CSN_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define CSN_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define CSN_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define CSN_GetValue()           PORTCbits.RC6
#define CSN_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define CSN_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define CSN_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define CSN_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define CSN_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define CSN_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define CSN_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define CSN_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set SW1 aliases
#define SW1_TRIS                 TRISCbits.TRISC7
#define SW1_LAT                  LATCbits.LATC7
#define SW1_PORT                 PORTCbits.RC7
#define SW1_WPU                  WPUCbits.WPUC7
#define SW1_OD                   ODCONCbits.ODC7
#define SW1_ANS                  ANSELCbits.ANSC7
#define SW1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SW1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SW1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SW1_GetValue()           PORTCbits.RC7
#define SW1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SW1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SW1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SW1_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define SW1_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define SW1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define SW1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/