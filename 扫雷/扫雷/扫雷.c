#define _CRT_SECURE_NO_WARNINGS 1

#include"扫雷.h"

void Initboard(char board[Rows][Cols],int rows,int cols,char set)//地图初始化函数
{
	int i=0;
	int j=0;
	for(i=0;i<rows;i++)//行
	{
		for(j=0;j<cols;j++)//列
		{
			board[i][j]=set;
		}
	}
}

void Displayboard(char board[Rows][Cols],int row,int col)//地图打印函数
{
	int i=0;
	int j=0;
	for(i=0;i<=row;i++)//打印列号
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);//打印行号
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char board[Rows][Cols],int row,int col)//布置雷函数
{
	int count=Lei_count;//雷的个数
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';//布置雷
			count--;
		}
	}
}

int get_mine(char mine[Rows][Cols],int x,int y)//（字符‘3’-字符‘0’=数字3）计算输入坐标周围雷总数函数
{
	return mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+
		   mine[x-1][y]+               mine[x+1][y]+
		   mine[x-1][y+1]+mine[x][y+1]+mine[x+1][y+1]
	       -8*'0';
}

void Recur(char mine[Rows][Cols],char show[Rows][Cols],int row,int col,int x,int y)//利用递归展开坐标函数
{
	int i=0;
	i=get_mine(mine,x,y);
	if(show[x][y]='*' && i==0)
	{
		show[x][y]=' ';
		if ((x-1)>0 && y>0 && (show[x-1][y]=='*'))//上方
		{
			Recur(mine,show,row,col,x-1, y);
		}
		if ((x-1)>0 && (y+1)<=col && (show[x-1][y+1] == '*'))//右上方
		{
			Recur(mine,show,row,col,x-1, y+1);
		}
		if (x>0 && (y+1) <= y && (show[x][y+1] == '*'))//右方
		{
			Recur(mine,show,row,col,x, y+1);
		}
		if ((x+1)<=row  && (y+1)<=col && (show[x+1][col+1]=='*'))//右下方
		{
			Recur(mine,show,row,col,x+1,y+1);
		}
		if ((x+1)<=row  && y>0 && (show[x+1][col]=='*'))//下方
		{
			Recur(mine,show,row,col,x+1,y);
		}
		if ((x+1)<=row  && (y-1)>0 && (show[x+1][y-1] == '*'))//左下方
		{
			Recur(mine,show,row,col,x+1,y-1);
		}
		if (x>0 && (y-1)>0 && (show[x][y-1]=='*'))//左方
		{
			Recur(mine,show,row,col,x, y-1);
		}
		if ((x-1)>0 && (y-1)>0 && (show[x-1][y-1] == '*'))//左上方
		{
			Recur(mine,show,row,col,x-1,y-1);
		}
	}
	else
		show[x][y]=i+'0';
}

int Count(char show[Rows][Cols],int row,int col)//没排查完的坐标计算函数
{
	int i=0;
	int j=0;
	int count=0;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(show[i][j]=='*')
				count++;
		}
	}
	return count;
}

void Finemine(char mine[Rows][Cols],char show[Rows][Cols],int row,int col)//查找雷函数
{
	int x=0;
	int y=0;
	while(Count(show,row,col)>Lei_count)//Count用于判断是否结束
	{
		printf("请输入排查位置的坐标：");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<=row && y>=1 && y<=col)//判断坐标合不合法
		{
			if(mine[x][y]=='1')//踩雷
			{
				printf("很遗憾，你输了\n");
				Displayboard(mine,Row,Col);//打印布置雷的地图
				break;
			}
			else
			{
				Recur(mine,show,row,col,x,y);
				Displayboard(show,Row,Col);//打印玩家地图
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入坐标！\n");
		}
	}
	if(Count(show,row,col)==Lei_count)
	{
		printf("恭喜你，排雷成功！\n");
		Displayboard(mine,Row,Col);//打印布置雷的地图
	}
}