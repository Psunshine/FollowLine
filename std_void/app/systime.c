/*
systime.c

������ͨ��ѧ ˼Դ0702 ����
15:40 2010-2-8

ʹ��systick��Ϊϵͳʱ��
*/
#include "includes.h"

void systime_initial(void)
{
  /* SysTick end of count event each 10ms with input clock equal to 9MHz (HCLK/8, default) */
  SysTick_SetReload(90000);
  /* Enable SysTick interrupt */
  SysTick_ITConfig(ENABLE);
  SysTick_CounterCmd(SysTick_Counter_Enable);
}
void SysTickHandler(void)
{
//  SYS_time++;   //ʱ������
//  SYS_idle_dis=SYS_idle;
//  SYS_idle=0;
//  if(!(SYS_time & 7))
//  {
//    PCo+=0x00000010;
//  }
}


