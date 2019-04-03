/* 
 * File:   eusart2_appl.h
 * Author: Aditya Raj Nayak
 *
 * Created on April 1, 2019, 6:40 AM
 */

#ifndef EUSART2_APPL_H
#define	EUSART2_APPL_H

#ifdef	__cplusplus
extern "C" {
#endif


void Serial_Write(uint8_t txData);
void EUSART2_Task_1000msec(void);

#ifdef	__cplusplus
}
#endif

#endif	/* EUSART2_APPL_H */

