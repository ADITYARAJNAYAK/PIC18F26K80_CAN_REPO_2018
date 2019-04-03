/* 
 * File:   TaskSceduler.h
 * Author: Aditya Raj Nayak
 *
 * Created on July 28, 2018, 10:23 PM
 */

#ifndef TASKSCEDULER_H
#define	TASKSCEDULER_H

#define MSEC_COUNTER_1MSEC         (uint16_t)0x0001u
#define MSEC_COUNTER_10MSEC        (uint16_t)0x000Au
#define MSEC_COUNTER_100MSEC       (uint16_t)0x0064u
#define MSEC_COUNTER_1000MSEC      (uint16_t)0x03E8u

static void Task_1msec(void);
static void Task_10msec(void);
static void Task_100msec(void);
static void Task_1000msec(void);

extern void TaskScheduler (void);

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* TASKSCEDULER_H */

