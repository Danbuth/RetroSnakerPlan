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
 ALIENTEK精英STM32开发板嵌入式大作业--贪吃蛇   
 开发人员：权观羽(2015210402036) 沈丹杰(2015210402057)
 启动时间：2018.5
************************************************/
 
 
#define BUTTON_1 104
#define BUTTON_2 152
#define BUTTON_3 176
#define START_GAME 1


/************************************************
延时读取红外按键，防止由于读取过快而重复执行分支
0-没有读取到值
其他-读取到的值
Author:沈丹杰
************************************************/
u8 delay_Remote_Scan(){
	u8 key;              //监听按键值
	u8 temp;             //缓存Key
	key=Remote_Scan();   //第一次读取
	temp = key;					 //赋值
	delay_ms(30);        //延时
	key=Remote_Scan();   //第二次读取
	if ( key != temp ){
		return 0;
	}else {
	  return key;
	}
}


/**
主函数
*/
int main(void)
 {	 		  
	u8 key;              //监听按键值
	 
	//初始化...........
	delay_init();	    	 //延时函数初始化	  
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置中断优先级分组为组2：2位抢占优先级，2位响应优先级
	uart_init(115200);	 	//串口初始化为115200	 
 	LED_Init();			     //LED端口初始化
	LCD_Init();	
	KEY_Init();	 	
	BEEP_Init();
	Remote_Init();			//红外接收初始化	
 	tp_dev.init();
	 
	//连接服务器测试
	//TODO
	//绘制欢迎页
	welcomePage();
  //红外按键输入
	while(1){
		key = delay_Remote_Scan();
		if (key) {
			switch(key){
				case BUTTON_1:{
					LCD_Clear(WHITE);//清屏
					TP_Adjust();  	//屏幕校准  
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


