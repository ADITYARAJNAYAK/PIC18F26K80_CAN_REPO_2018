/**
  Generated Interrupt Manager Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.c

  @Summary:
    This is the Interrupt Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description:
    This header file provides implementations for global interrupt handling.
    For individual peripheral handlers please see the peripheral driver for
    all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC18F26K80
        Driver Version    :  1.03
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45 or later
        MPLAB 	          :  MPLAB X 4.15
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

#include "interrupt_manager.h"
#include "../mcc_generated_files/mcc.h"

void  INTERRUPT_Initialize (void)
{
    // Disable Interrupt Priority Vectors (16CXXX Compatibility Mode)
    RCONbits.IPEN = 0;
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
}

void __interrupt(high_priority) INTERRUPT_InterruptManager (void)
{
    // interrupt handler
    if(INTCONbits.TMR0IE == 1 && INTCONbits.TMR0IF == 1)
    {
        TMR0_ISR();
    }
    else if(INTCONbits.PEIE == 1)
    {
        if(PIE5bits.ERRIE == 1 && PIR5bits.ERRIF == 1)
        {
            ECAN_ISR_ECAN_ERRI();
        } 
        else if(PIE5bits.RXB1IE == 1 && PIR5bits.RXB1IF == 1)
        {
            ECAN_ISR_ECAN_RXB1I();
        } 
        else if(PIE5bits.IRXIE == 1 && PIR5bits.IRXIF == 1)
        {
            ECAN_ISR_ECAN_IRXI();
        } 
        else if(PIE5bits.RXB0IE == 1 && PIR5bits.RXB0IF == 1)
        {
            ECAN_ISR_ECAN_RXB0I();
        } 
        else if(PIE5bits.TXB2IE == 1 && PIR5bits.TXB2IF == 1)
        {
            ECAN_ISR_ECAN_TXB2I();
        } 
        else if(PIE5bits.TXB1IE == 1 && PIR5bits.TXB1IF == 1)
        {
            ECAN_ISR_ECAN_TXB1I();
        } 
        else if(PIE5bits.TXB0IE == 1 && PIR5bits.TXB0IF == 1)
        {
            ECAN_ISR_ECAN_TXB0I();
        }
        #ifdef EUSART2_ENABLE
        if(PIE3bits.TX2IE == 1 && PIR3bits.TX2IF == 1)
        {
            EUSART2_TxDefaultInterruptHandler();
        } 
        else if(PIE3bits.RC2IE == 1 && PIR3bits.RC2IF == 1)
        {
            EUSART2_RxDefaultInterruptHandler();
        }
#else
        if(PIE1bits.TX1IE == 1 && PIR1bits.TX1IF == 1)
        {
            EUSART2_TxDefaultInterruptHandler();
        } 
        if(PIE1bits.RC1IE == 1 && PIR1bits.RC1IF == 1)
        {
            EUSART2_RxDefaultInterruptHandler();
        }        
#endif
        else
        {
            //Unhandled Interrupt
        }
    }      
    else
    {
        //Unhandled Interrupt
    }
}

/**
 End of File
*/
