#ifndef __BEEP_H
#define __BEEP_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK精英STM32开发板
//蜂鸣器驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
//蜂鸣器端口定义
#define BEEP PBout(8)	// BEEP,蜂鸣器接口		 
#define	cBEEP_PIN	GPIO_Pin_8 //蜂鸣器
//蜂鸣器硬件对应发声、禁声状态
#define cBEEP_ON	(BitAction)1
#define	cBEEP_OFF	(BitAction)0

void BEEP_Init(void);	//初始化

//函数原型： void fBeep(BitAction vucBeepStat);
//函数功能： 控制蜂鸣器发声
//函数参数：
//函数出口：
//函数调用：
//函数说明： 
void fBeep(BitAction vucBeepStat);

		 				    
#endif

