#define _CRT_SECURE_NO_WARNINGS 1

#include"������.h"

void menu()//�˵�����
{
	printf("*****************************\n");
	printf("*****  1.play   0.exit  *****\n");
	printf("*****************************\n");
}

void game()//������Ϸ����
{
	char board[Row][Col]={0};//���������Ϣ
	char ret=0;//�����ж���Ϸ��������ֵ
	Initboard(board,Row,Col);//��ʼ������
	Displayboard(board,Row,Col);//��ӡ����
	while(1)//����
	{
		Playermove(board,Row,Col);//�������
		ret=Iswin(board,Row,Col);//�ж�����Ƿ�Ӯ
		if(ret!='C')
		{
			break;
		}
		Computermove(board,Row,Col);//��������
		Displayboard(board,Row,Col);//��ӡ����
		ret=Iswin(board,Row,Col);//�жϵ����Ƿ�Ӯ
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		Displayboard(board,Row,Col);//��ӡ����
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		Displayboard(board,Row,Col);//��ӡ����
		printf("ƽ��\n");
	}
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}