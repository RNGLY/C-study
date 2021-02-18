#define _CRT_SECURE_NO_WARNINGS 1

#include"ɨ��.h"

void Initboard(char board[Rows][Cols],int rows,int cols,char set)//��ͼ��ʼ������
{
	int i=0;
	int j=0;
	for(i=0;i<rows;i++)//��
	{
		for(j=0;j<cols;j++)//��
		{
			board[i][j]=set;
		}
	}
}

void Displayboard(char board[Rows][Cols],int row,int col)//��ͼ��ӡ����
{
	int i=0;
	int j=0;
	for(i=0;i<=row;i++)//��ӡ�к�
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);//��ӡ�к�
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char board[Rows][Cols],int row,int col)//�����׺���
{
	int count=Lei_count;//�׵ĸ���
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';//������
			count--;
		}
	}
}

int get_mine(char mine[Rows][Cols],int x,int y)//���ַ���3��-�ַ���0��=����3����������������Χ����������
{
	return mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+
		   mine[x-1][y]+               mine[x+1][y]+
		   mine[x-1][y+1]+mine[x][y+1]+mine[x+1][y+1]
	       -8*'0';
}

void Recur(char mine[Rows][Cols],char show[Rows][Cols],int row,int col,int x,int y)//���õݹ�չ�����꺯��
{
	int i=0;
	i=get_mine(mine,x,y);
	if(show[x][y]='*' && i==0)
	{
		show[x][y]=' ';
		if ((x-1)>0 && y>0 && (show[x-1][y]=='*'))//�Ϸ�
		{
			Recur(mine,show,row,col,x-1, y);
		}
		if ((x-1)>0 && (y+1)<=col && (show[x-1][y+1] == '*'))//���Ϸ�
		{
			Recur(mine,show,row,col,x-1, y+1);
		}
		if (x>0 && (y+1) <= y && (show[x][y+1] == '*'))//�ҷ�
		{
			Recur(mine,show,row,col,x, y+1);
		}
		if ((x+1)<=row  && (y+1)<=col && (show[x+1][col+1]=='*'))//���·�
		{
			Recur(mine,show,row,col,x+1,y+1);
		}
		if ((x+1)<=row  && y>0 && (show[x+1][col]=='*'))//�·�
		{
			Recur(mine,show,row,col,x+1,y);
		}
		if ((x+1)<=row  && (y-1)>0 && (show[x+1][y-1] == '*'))//���·�
		{
			Recur(mine,show,row,col,x+1,y-1);
		}
		if (x>0 && (y-1)>0 && (show[x][y-1]=='*'))//��
		{
			Recur(mine,show,row,col,x, y-1);
		}
		if ((x-1)>0 && (y-1)>0 && (show[x-1][y-1] == '*'))//���Ϸ�
		{
			Recur(mine,show,row,col,x-1,y-1);
		}
	}
	else
		show[x][y]=i+'0';
}

int Count(char show[Rows][Cols],int row,int col)//û�Ų����������㺯��
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

void Finemine(char mine[Rows][Cols],char show[Rows][Cols],int row,int col)//�����׺���
{
	int x=0;
	int y=0;
	while(Count(show,row,col)>Lei_count)//Count�����ж��Ƿ����
	{
		printf("�������Ų�λ�õ����꣺");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<=row && y>=1 && y<=col)//�ж�����ϲ��Ϸ�
		{
			if(mine[x][y]=='1')//����
			{
				printf("���ź���������\n");
				Displayboard(mine,Row,Col);//��ӡ�����׵ĵ�ͼ
				break;
			}
			else
			{
				Recur(mine,show,row,col,x,y);
				Displayboard(show,Row,Col);//��ӡ��ҵ�ͼ
			}
		}
		else
		{
			printf("��������Ƿ����������������꣡\n");
		}
	}
	if(Count(show,row,col)==Lei_count)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		Displayboard(mine,Row,Col);//��ӡ�����׵ĵ�ͼ
	}
}