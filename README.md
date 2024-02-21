# cmd_UART_nRF
General purpose command interpreter driver for 16(L)F1619 UART and nordic nRF24L01P transceiver

      author: john szymanski
      johnszy@icloud.com
  
      IDE:  MPLAB X IDE v5.40  (www.microchip.com)
      C Compiler:   XC8 v2.30
      
      --------   16F1619      ---------------------------
      UART Pinouts: Pin 17 = RA2 = Rx
                    Pin 6  = RC4 = Tx
  
      not using RTS, CTS for UART
  
      nRF24L01P Pinouts:     Pin  5  = RC5 = CE
                             Pin  8  = RC6 = CSN 
                             Pin 10  = RB7 = IRQ
                             Pin 11  = RB6 = CLK
                             Pin 12  = RB5 = SDO  --> wire to SDI of Device to drive
                             Pin 13  = RB4 = SDI  -->>wire to SDO of Device to drive
  
      IRSENSE Pinout:        Pin  9  = RC7 = IRSENSE

    
      Mouser Part #: 949-NRF24L01P
      https://www.mouser.com/ProductDetail/Nordic-Semiconductor/NRF24L01P?qs=yqaQSyyJnNiKlgjT8AqoOw%3D%3D
