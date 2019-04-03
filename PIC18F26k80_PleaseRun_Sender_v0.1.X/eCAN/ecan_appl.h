/* 
 * File:   ecan_appl.h
 * Author: Aditya Raj Nayak
 *
 * Created on November 3, 2018, 12:02 PM
 */

#ifndef ECAN_APPL_H
#define	ECAN_APPL_H

#ifdef	__cplusplus
extern "C" {
#endif


void eCAN_Appl_Toggle_Pin(void);
void eCAN_Appl_Set_Pin(char pin_no);
void eCAN_Appl_ReSet_Pin(char pin_no);

#ifdef	__cplusplus
}
#endif

#endif	/* ECAN_APPL_H */

