#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "lcd.h"
#include "beep.h"
#include "usart.h"	 
#include "24cxx.h"
#include "touch.h"
#include "remote.h"
#include "information.h"



/************************************************
 ALIENTEK��ӢSTM32������Ƕ��ʽ����ҵ--̰����   
 ������Ա��Ȩ����(2015210402036) �򵤽�(2015210402057)
 ����ʱ�䣺2018.5
************************************************/
 
 
#define BUTTON_1 104
#define BUTTON_2 152
#define BUTTON_3 176
#define START_GAME 1


/************************************************
��ʱ��ȡ���ⰴ������ֹ���ڶ�ȡ������ظ�ִ�з�֧
0-û�ж�ȡ��ֵ
����-��ȡ����ֵ
Author:�򵤽�
************************************************/
u8 delay_Remote_Scan(){
	u8 key;              //��������ֵ
	u8 temp;             //����Key
	key=Remote_Scan();   //��һ�ζ�ȡ
	temp = key;					 //��ֵ
	delay_ms(30);        //��ʱ
	key=Remote_Scan();   //�ڶ��ζ�ȡ
	if ( key != temp ){
		return 0;
	}else {
	  return key;
	}
}


/**
������
*/
int main(void)
 {	 		  
	u8 key;              //��������ֵ
	 
	//��ʼ��...........
	delay_init();	    	 //��ʱ������ʼ��	  
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�����ж����ȼ�����Ϊ��2��2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 	//���ڳ�ʼ��Ϊ115200	 
 	LED_Init();			     //LED�˿ڳ�ʼ��
	LCD_Init();	
	KEY_Init();	 	
	BEEP_Init();
	Remote_Init();			//������ճ�ʼ��	
 	tp_dev.init();
	 
	//���ӷ���������
	//TODO
	//���ƻ�ӭҳ
	welcomePage();
  //���ⰴ������
	while(1){
		key = delay_Remote_Scan();
		if (key) {
			switch(key){
				case BUTTON_1:{
					LCD_Clear(WHITE);//����
					TP_Adjust();  	//��ĻУ׼  
					welcomePage();
					break;
				}
				case BUTTON_2:{
					//TODO
					break;
				}
				case BUTTON_3:{
					//TODO
					break;
				}
				default:{
					break;
				}
			}
			
		}
		else {
			delay_ms(10);
		}
	}
	 
}


