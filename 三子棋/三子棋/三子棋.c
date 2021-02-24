#define _CRT_SECURE_NO_WARNINGS 1

#include"三子棋.h"

void Initboard(char board[Row][Col],int row,int col)//棋盘初始化函数
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)//行
	{
		for(j=0;j<col;j++)//列
		{
			board[i][j]=' ';
		}
	}
}

void Displayboard(char board[Row][Col],int row,int col)//棋盘打印函数
{
	system("cls");
	int i=0;
	for(i=0;i<row;i++)//行
	{
		int j=0;
		for(j=0;j<col;j++)//打印数据行
		{
			printf(" %c ",board[i][j]);//打印数据
			if(j<col-1)
			{
				printf("|");//打印分割符号
			}
		}
		printf("\n");
		if(i<row-1)//打印分割行
		{
			for(j=0;j<col;j++)
			{
				printf("___");
				if(j<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void Playermove(char board[Row][Col],int row,int col)//玩家下棋函数
{
	int x=0;
	int y=0;
	while(1)
	{
		printf("请输入要下的坐标：");
	    scanf("%d%d",&x,&y);
		if(x>=1 && x<=Row && y>=1 && y<=Col)//判断x,y坐标合法性
		{
			if(board[x-1][y-1]==' ')//判断x,y坐标是否有棋子
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("该坐标已被占用,请重新输入！\n");
			}
	    }
	    else
	    {
			printf("坐标非法，请重新输入！\n");
	    }
	}
}

void Computermove(char board[Row][Col],int row,int col)//电脑下棋函数
{
	int x=0;
	int y=0;
	while(1)
	{
		x=rand()%row;
	    y=rand()%col;
		if(board[x][y]==' ')//判断是否有棋子
		{
			board[x][y]='#';
			break;
		}
	}
}

int Isfull(char board[Row][Col],int row,int col)//判断平局函数(没平局返回0，平局返回1)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			if(board[i][j]==' ')
			{
				return 0;//没满
			}
	}
	return 1;//满了
}

char Iswin(char board[Row][Col],int row,int col)//判断游戏函数
{
	int i=0;
	for(i=0;i<row;i++)//判断三行
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for(i=0;i<col;i++)//判断三列
	{
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')//判断左对角线
	{
		return board[1][1];
	}
	if(board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[1][1]!=' ')//判断友对角线
	{
		return board[1][1];
	}
	if(1==Isfull(board,Row,Col))//判断是否平局
	{
		return 'Q';
	}
	return 'C';
}
