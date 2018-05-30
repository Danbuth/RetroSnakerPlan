#include "information.h"
#include "hanzi.h"
#include "lcd.h"

//绘制启动欢迎页
void welcomePage(void){
	LCD_Clear(WHITE);//清屏
	//贪吃蛇大作战
	fWriteHz24(GAME_TITLE[0].Msk,48,48,1,RED);
	fWriteHz24(GAME_TITLE[1].Msk,72,48,1,RED);
	fWriteHz24(GAME_TITLE[2].Msk,96,48,1,RED);
	fWriteHz24(GAME_TITLE[3].Msk,120,48,1,RED);
	fWriteHz24(GAME_TITLE[4].Msk,144,48,1,RED);
	fWriteHz24(GAME_TITLE[5].Msk,168,48,1,RED);
	
	//作者
	fWriteHz24(Author[0].Msk,48,78,1,RED);
	fWriteHz24(Author[1].Msk,72,78,1,RED);
	fWriteHz24(Author[2].Msk,96,78,1,RED);
	fWriteHz24(Author[3].Msk,120,78,1,RED);
	fWriteHz24(Author[4].Msk,144,78,1,RED);
	fWriteHz24(Author[5].Msk,168,78,1,RED);
	fWriteHz24(Author[6].Msk,120,108,1,RED);
	fWriteHz24(Author[7].Msk,144,108,1,RED);
	fWriteHz24(Author[8].Msk,168,108,1,RED);
	
	//说明
	fWriteHz24(Instruction[0].Msk,48,158,1,RED);
	fWriteHz24(Instruction[1].Msk,72,158,1,RED);
	fWriteHz24(Instruction[2].Msk,96,158,1,RED);
	
	// 1 - 校准屏幕
	POINT_COLOR=RED;//设置字体为红色 
	LCD_ShowString(72,188,48,24,24, "1 - ");
	fWriteHz24(Instruction[3].Msk,120,188,1,RED);
	fWriteHz24(Instruction[4].Msk,144,188,1,RED);
	fWriteHz24(Instruction[5].Msk,168,188,1,RED);
	fWriteHz24(Instruction[6].Msk,192,188,1,RED);
	
	// 2 - 游戏规则
	POINT_COLOR=RED;//设置字体为红色 
	LCD_ShowString(72,218,48,24,24, "2 - ");
	fWriteHz24(Instruction[7].Msk,120,218,1,RED);
	fWriteHz24(Instruction[8].Msk,144,218,1,RED);
	fWriteHz24(Instruction[9].Msk,168,218,1,RED);
	fWriteHz24(Instruction[10].Msk,192,218,1,RED);
	
	// 3 - 游戏规则
	POINT_COLOR=RED;//设置字体为红色 
	LCD_ShowString(72,248,48,24,24, "3 - ");
	fWriteHz24(Instruction[11].Msk,120,248,1,RED);
	fWriteHz24(Instruction[12].Msk,144,248,1,RED);
	fWriteHz24(Instruction[7].Msk,168,248,1,RED);
	fWriteHz24(Instruction[8].Msk,192,248,1,RED);
}






//绘制游戏规则页面
void gameDescription(void){
	LCD_Clear(WHITE);//清屏
	

}

