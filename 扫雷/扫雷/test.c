#define _CRT_SECURE_NO_WARNINGS 1

#include"扫雷.h"

void menu()
{
	printf("\n");
	printf("********************************\n");
	printf("*******     扫  雷     *********\n");
	printf("*******  1.玩   0.退出 *********\n");
	printf("********************************\n");
}

void game()
{
	char mine[Rows][Cols]={0};//存储布置雷的地图
	char show[Rows][Cols]={0};//存储玩家地图
	Initboard(mine,Rows,Cols,'0');//布置雷的地图初始化
	Setmine(mine,Row,Col);//布置雷
	Initboard(show,Rows,Cols,'*');//玩家地图初始化
	//Displayboard(mine,Row,Col);//打印布置雷的地图（用于测试）
	Displayboard(show,Row,Col);//打印玩家地图
	Finemine(mine,show,Row,Col);//查找雷
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单函数
		printf("请选择：");
		scanf("%d",&input);
		switch(input)//判断玩家意图
		{
		case 1:
			game();//游戏主体函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}
