#include "../Common/Common.h"
#include "../Timer/tmr0.h"
#include "../IO/pin_manager.h"
#include "../eCAN/ecan.h"
#include "../EUSART2/eusart2_appl.h"
#include "TaskSceduler.h"

void TaskScheduler (void)
{
   if((TMR0_1msec_timer_counter % MSEC_COUNTER_1000MSEC) == ZERO)
   {
      Task_1msec();
      Task_10msec();
      Task_100msec();
      Task_1000msec();
      TMR0_1msec_timer_counter = 0x01;
   }
   else if((TMR0_1msec_timer_counter % MSEC_COUNTER_100MSEC) == ZERO)
   {
      Task_1msec();
      Task_10msec();
      Task_100msec();
   }
   else if((TMR0_1msec_timer_counter % MSEC_COUNTER_10MSEC) == ZERO)
   {
      Task_1msec();
      Task_10msec();
   }
   else if((TMR0_1msec_timer_counter % MSEC_COUNTER_1MSEC) == ZERO)
   {
      Task_1msec();
   }
   else
   {
      /*Do Nothing */
   }
}
static void Task_1msec(void)
{
    eCAN_Task_1msec();
}
static void Task_10msec(void)
{
    
}
static void Task_100msec(void)
{
    
}
static void Task_1000msec(void)
{
   IO_Task_1000msec();
   eCAN_Task_1000msec();
   EUSART2_Task_1000msec();
}