#define _CRT_SECURE_NO_WARNINGS 1

#include"��̬��ͨѶ¼.h"

void menu()
{
	printf("\n");
	printf("*****    1.���Ӻ�����Ϣ      2.ɾ��������Ϣ    *****\n");
	printf("*****    3.���Һ�����Ϣ      4.�޸ĺ�����Ϣ    *****\n");
	printf("*****    5.��ʾ������Ϣ      6.����������Ϣ    *****\n");
	printf("*****************    0.�˳�����    *****************\n");
	printf("****************************************************\n");
	printf("****************************************************\n");
}
int main()
{
	int input = 0;//�����û�����
	struct Contact con;//����ͨѶ¼
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();//�˵�����
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);//���Ӻ�����Ϣ
			break;
		case DEL:
			DelContact(&con);//ɾ��ָ��������Ϣ
			break;
		case SERACH:
			SearchContact(&con);//����ָ��������Ϣ����Ϊ����ָ��������Ϣ�����޸�ͨѶ¼��Ϣ������Ҳ���Դ�ͨѶ¼���������Ǵ���ַЧ�ʸ��ߣ�
			break;
		case MODIFY:
			ModifyContact(&con);//�޸�ָ��������Ϣ
			break;
		case SHOW:
			ShowContact(&con);//��ʾͨѶ¼������Ϣ����Ϊ��ʾͨѶ¼�����޸�ͨѶ¼��Ϣ������Ҳ���Դ�ͨѶ¼���������Ǵ���ַЧ�ʸ��ߣ�
			break;
		case SORT:
			SortContact(&con);//����ͨѶ¼������Ϣ
			break;
		case EXIT:
			Destroy_Contact(&con);//����ͨѶ¼���ͷŶ�̬���ٵ��ڴ棩
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}