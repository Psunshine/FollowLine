/*
�ļ�����sys_ini.h
���ߣ�������ͨ��ѧ ˼Դ0702 ����
���ܣ�STM32ר�õĳ�ʼ���ļ�����ɻ�����ʼ�����ܣ��ﵽ����������Ŀ��

*/
#ifndef SYS_INI_H
#define SYS_INI_H

#include "main.h"
#include "stm32f10x_conf.h"

void RCC_Configuration(void);
void NVIC_Configuration(void);
void GPIO_Configuration(void);

#endif
