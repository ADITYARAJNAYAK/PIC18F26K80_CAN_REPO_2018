/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC18F26K80
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB             :  MPLAB X 4.15

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
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

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"





void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;

    /**
    TRISx registers
    */
    TRISA = 0xEF;
    TRISB = 0xFB;
    TRISC = 0xC1;

    /**
    ANSELx registers
    */
    ANCON0 = 0x1F;
    ANCON1 = 0x07;

    /**
    WPUx registers
    */
    WPUB = 0x00;
    INTCON2bits.nRBPU = 1;

    /**
    ODx registers
    */





   
    
}
  
void PIN_MANAGER_IOC(void)
{   
	// Clear global Interrupt-On-Change flag
    INTCONbits.RBIF = 0;
}
void IO_Task_1000msec(void)
{
   IO_RC1_Toggle();
}
void IO_Set_PortPin(char pin_no)
{
   switch(pin_no)
   {
      case PORT_RA0: 
         break;
      case PORT_RA1: 
         break;
      case PORT_RA2: 
         break;
      case PORT_RA3: 
         break;
      case PORT_RA4: 
         break;
      case PORT_RA5: 
         break;
      case PORT_RA6: 
         break;
      case PORT_RA7: 
         break;
      case PORT_RB0: 
         break;
      case PORT_RB1: 
         break;
      case PORT_RB2:
         RB2_SetHigh();
         break;
      case PORT_RB3:
         RB3_SetHigh();
         break;
      case PORT_RB4: 
         break;
      case PORT_RB5: 
         break;
      case PORT_RB6: 
         break;
      case PORT_RB7: 
         break;
      case PORT_RC0: 
         break;
      case PORT_RC1:
         IO_RC1_SetHigh();
         break;
      case PORT_RC2:
         IO_RC2_SetHigh();
         break;
      case PORT_RC3:
         IO_RC3_SetHigh();
         break;
      case PORT_RC4:
         IO_RC4_SetHigh();
         break;
      case PORT_RC5:
         IO_RC5_SetHigh();         
         break;
      case PORT_RC6: 
         break;
      case PORT_RC7: 
         break;
      default:
         break;
   }
}
void IO_ReSet_PortPin(char pin_no)
{
   switch(pin_no)
   {
      case PORT_RA0: 
         break;
      case PORT_RA1: 
         break;
      case PORT_RA2: 
         break;
      case PORT_RA3: 
         break;
      case PORT_RA4: 
         break;
      case PORT_RA5: 
         break;
      case PORT_RA6: 
         break;
      case PORT_RA7: 
         break;
      case PORT_RB0: 
         break;
      case PORT_RB1: 
         break;
      case PORT_RB2:
         RB2_SetLow();
         break;
      case PORT_RB3:
         RB3_SetLow();
         break;
      case PORT_RB4: 
         break;
      case PORT_RB5: 
         break;
      case PORT_RB6: 
         break;
      case PORT_RB7: 
         break;
      case PORT_RC0: 
         break;
      case PORT_RC1:
         IO_RC1_SetLow();
         break;
      case PORT_RC2:
         IO_RC2_SetLow();
         break;
      case PORT_RC3:
         IO_RC3_SetLow();
         break;
      case PORT_RC4:
         IO_RC4_SetLow();
         break;
      case PORT_RC5:
         IO_RC5_SetHigh();         
         break;
      case PORT_RC6: 
         break;
      case PORT_RC7: 
         break;
      default:
         break;
   }
}
/**
 End of File
*/