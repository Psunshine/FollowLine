/*
�ļ�����main.c
���ߣ�������ͨ��ѧ ˼Դ0702 ����
ʱ�䣺2010 12-12
���ܣ�
STM32Ӧ�ù淶�������ļ�
*/


#include "includes.h"

u32 systime = 0;
u32 duty = 0;

//float VolValue;
int number = 3;
u8 ref[16];
u8 out[16];

int main(void)
{
	RCC_Configuration();  //���ȳ�ʼ��оƬʱ��
	NVIC_Configuration();
	ADC_Configuration(); 
	can1_init();
	led_init();
	USART_Configuration();

	// 10us�ж�һ��
	//TIM2_Init(90-1,8-1);

	while(1)
	{ 
		//����
		Zero_Fifteen_Blue();
		color_sensor_infor(number,0);
		color_sensor_infor(number,0x20);
		
//		//�ط���λ���۲�����
//		Send_Char(0xaa);
//		Send_String(VolValue,16);	
//		Send_Char(0xbb);
		
		//���
		Zero_Fifteen_Red();
		color_sensor_infor(number,0x40);
		color_sensor_infor(number,0x60);
		
//		//�ط���λ���۲�����
//		Send_Char(0xaa);
//		Send_String(VolValue,16);	
//		Send_Char(0xbb);
//					
//		Delay_Ms(10);					
    }
}
