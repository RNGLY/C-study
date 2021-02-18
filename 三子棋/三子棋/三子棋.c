#define _CRT_SECURE_NO_WARNINGS 1

#include"������.h"

void Initboard(char board[Row][Col],int row,int col)//���̳�ʼ������
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)//��
	{
		for(j=0;j<col;j++)//��
		{
			board[i][j]=' ';
		}
	}
}

void Displayboard(char board[Row][Col],int row,int col)//���̴�ӡ����
{
	int i=0;
	for(i=0;i<row;i++)//��
	{
		int j=0;
		for(j=0;j<col;j++)//��ӡ������
		{
			printf(" %c ",board[i][j]);//��ӡ����
			if(j<col-1)
			{
				printf("|");//��ӡ�ָ����
			}
		}
		printf("\n");
		if(i<row-1)//��ӡ�ָ���
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

void Playermove(char board[Row][Col],int row,int col)//������庯��
{
	int x=0;
	int y=0;
	while(1)
	{
		printf("������Ҫ�µ����꣺");
	    scanf("%d%d",&x,&y);
		if(x>=1 && x<=Row && y>=1 && y<=Col)//�ж�x,y����Ϸ���
		{
			if(board[x-1][y-1]==' ')//�ж�x,y�����Ƿ�������
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��,���������룡\n");
			}
	    }
	    else
	    {
			printf("����Ƿ������������룡\n");
	    }
	}
}

void Computermove(char board[Row][Col],int row,int col)//�������庯��
{
	int x=0;
	int y=0;
	while(1)
	{
		x=rand()%row;
	    y=rand()%col;
		if(board[x][y]==' ')//�ж��Ƿ�������
		{
			board[x][y]='#';
			break;
		}
	}
}

int Isfull(char board[Row][Col],int row,int col)//�ж�ƽ�ֺ���(ûƽ�ַ���0��ƽ�ַ���1)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			if(board[i][j]==' ')
			{
				return 0;//û��
			}
	}
	return 1;//����
}

char Iswin(char board[Row][Col],int row,int col)//�ж���Ϸ����
{
	int i=0;
	for(i=0;i<row;i++)//�ж�����
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for(i=0;i<col;i++)//�ж�����
	{
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')//�ж���Խ���
	{
		return board[1][1];
	}
	if(board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[1][1]!=' ')//�ж��ѶԽ���
	{
		return board[1][1];
	}
	if(1==Isfull(board,Row,Col))//�ж��Ƿ�ƽ��
	{
		return 'Q';
	}
	return 'C';
}