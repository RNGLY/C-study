#define _CRT_SECURE_NO_WARNINGS 1

#include"三子棋.h"

void menu()//菜单函数
{
	printf("\n");
	printf("*****************************\n");
	printf("*****      三子棋       *****\n");
	printf("*****   1.玩   0.退出   *****\n");
	printf("*****************************\n");
}

void game()//整个游戏函数
{
	char board[Row][Col]={0};//存放棋盘信息
	char ret=0;//接收判断游戏函数返回值
	Initboard(board,Row,Col);//初始化棋盘
	Displayboard(board,Row,Col);//打印棋盘
	while(1)//下棋
	{
		Playermove(board,Row,Col);//玩家下棋
		ret=Iswin(board,Row,Col);//判断玩家是否赢
		if(ret!='C')
		{
			break;
		}
		Computermove(board,Row,Col);//电脑下棋
		Displayboard(board,Row,Col);//打印棋盘
		ret=Iswin(board,Row,Col);//判断电脑是否赢
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		Displayboard(board,Row,Col);//打印棋盘
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		Displayboard(board,Row,Col);//打印棋盘
		printf("平局\n");
	}
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择：\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}
