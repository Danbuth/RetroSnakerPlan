#ifndef __BEEP_H
#define __BEEP_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK��ӢSTM32������
//��������������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
//�������˿ڶ���
#define BEEP PBout(8)	// BEEP,�������ӿ�		 
#define	cBEEP_PIN	GPIO_Pin_8 //������
//������Ӳ����Ӧ����������״̬
#define cBEEP_ON	(BitAction)1
#define	cBEEP_OFF	(BitAction)0

void BEEP_Init(void);	//��ʼ��

//����ԭ�ͣ� void fBeep(BitAction vucBeepStat);
//�������ܣ� ���Ʒ���������
//����������
//�������ڣ�
//�������ã�
//����˵���� 
void fBeep(BitAction vucBeepStat);

		 				    
#endif

