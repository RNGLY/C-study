#define _CRT_SECURE_NO_WARNINGS 1

#include"ɨ��.h"

void menu()
{
	printf("********************************\n");
	printf("*********** 1.play *************\n");
	printf("*********** 0.exit *************\n");
	printf("********************************\n");
}

void game()
{
	char mine[Rows][Cols]={0};//�洢�����׵ĵ�ͼ
	char show[Rows][Cols]={0};//�洢��ҵ�ͼ
	Initboard(mine,Rows,Cols,'0');//�����׵ĵ�ͼ��ʼ��
	Setmine(mine,Row,Col);//������
	Initboard(show,Rows,Cols,'*');//��ҵ�ͼ��ʼ��
	//Displayboard(mine,Row,Col);//��ӡ�����׵ĵ�ͼ�����ڲ��ԣ�
	Displayboard(show,Row,Col);//��ӡ��ҵ�ͼ
	Finemine(mine,show,Row,Col);//������
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//�˵�����
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)//�ж������ͼ
		{
		case 1:
			game();//��Ϸ���庯��
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