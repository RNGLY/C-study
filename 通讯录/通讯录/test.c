#define _CRT_SECURE_NO_WARNINGS 1

#include"通讯录.h"

void menu()
{
	printf("\n");
	printf("*****    1.增加好友信息      2.删除好友信息    *****\n");
	printf("*****    3.查找好友信息      4.修改好友信息    *****\n");
	printf("*****    5.显示所有信息      6.排序所有信息    *****\n");
	printf("*****************    0.退出程序    *****************\n");
	printf("****************************************************\n");
	printf("****************************************************\n");
}
int main()
{
	int input = 0;//接收用户输入
	struct Contact con;//创建通讯录
	InitContact(&con);//初始化通讯录
	do
	{
		menu();//菜单函数
		printf("请选择：");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);//增加好友信息
			break;
		case DEL:
			DelContact(&con);//删除指定好友信息
			break;
		case SERACH:
			SearchContact(&con);//查找指定好友信息（因为查找指定好友信息不可修改通讯录信息，所以也可以传通讯录变量，但是传地址效率更高）
			break;
		case MODIFY:
			ModifyContact(&con);//修改指定好友信息
			break;
		case SHOW:
			ShowContact(&con);//显示通讯录所有信息（因为显示通讯录不可修改通讯录信息，所以也可以传通讯录变量，但是传地址效率更高）
			break;
		case SORT:
			SortContact(&con);//排序通讯录所有信息
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}
