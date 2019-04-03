
#include "ecan.h"
#include "ecan_appl.h"
#include <xc.h>
#include "../IO/pin_manager.h"

void eCAN_Task_1000msec(void)
{
   uCAN_MSG test_msg;
   test_msg.frame.id = 0x123;
   test_msg.frame.dlc = 0x08;
   test_msg.frame.idType = 0x00;
   test_msg.frame.data0 = 0x01;
   test_msg.frame.data1 = 0x02;
   test_msg.frame.data2 = 0x03;
   test_msg.frame.data3 = 0x04;
   test_msg.frame.data4 = 0x05;
   test_msg.frame.data5 = 0x06;
   test_msg.frame.data6 = 0x07;
   test_msg.frame.data7 = 0x08;
   
   CAN_transmit(&test_msg);
   
}
uint8_t busOff;
void eCAN_Task_1msec(void)
{
   uCAN_MSG *testmsg;


   CAN_receive(testmsg);
   
   
   
}
void eCAN_Appl_Check_BusOff(void)
{
	busOff = CAN_isBusOff();
   if(busOff == 1)
   {
      IO_RC3_SetHigh();
   }
   else
   {
      IO_RC3_SetLow();
   } 
}
void eCAN_Appl_Toggle_Pin(void)
{
   IO_RC2_Toggle();   
}
void eCAN_Appl_Set_Pin(char pin_no)
{
   IO_Set_PortPin(pin_no);
}
void eCAN_Appl_ReSet_Pin(char pin_no)
{
   IO_Set_PortPin(pin_no);
}