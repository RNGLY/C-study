#define _CRT_SECURE_NO_WARNINGS 1

#include"通讯录.h"

void InitContact(struct Contact* ps)//初始化通讯录函数
{
	memset(ps->data, 0, sizeof(ps->data));//好友信息初始化为0
	ps->size = 0;//通讯录最初好友信息个数初始化为0
}

void ShowContact(const struct Contact* ps)//显示通讯录所有信息函数
{
	system("cls");
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址"); //打印标题：%s中间的数表示多少个字符，\t制表符（负号表示左对齐）
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5s\t%-4d\t%-12s\t%-30s\n",//打印数据
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FineByName(const struct Contact* ps, char name[Max_Name])//查找好友信息函数（因为指定好友的增删查改都需要查找，故单独封装成一个函数，解决代码冗余问题）
{                                                                   //（static表示FineByName是内部函数，不能被外部函数调用）    
	int i = 0;
	for (i = 0; i < ps->size; i++)//查找删除的人所在的位置
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//找到了返回通讯录中的data下标
		}
	}
	return -1; //找不到返回 - 1
}

void AddContact(struct Contact* ps)//增加好友信息函数
{
	system("cls");
	if (ps->size == Max)
	{
		printf("通讯录已满，无法增加！\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", ps->data[ps->size].name);//name是数组，数组名相当于数组首元素地址
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);//sex是数组，数组名相当于数组首元素地址
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));//age是int型，所以需要取地址
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);//tele是数组，数组名相当于数组首元素地址
		printf("请输入地址：");
		scanf("%s", ps->data[ps->size].addr);//addr是数组，数组名相当于数组首元素地址
		ps->size++;
		printf("好友信息添加成功\n");
	}
}

void DelContact(struct Contact* ps)//删除指定好友信息函数声明
{
	system("cls");
	char name[Max_Sex];
	printf("请输入删除人的姓名：");
	scanf("%s", name);
	int pos = FineByName(ps, name);
	if (-1 == pos)
	{
		printf("要删除的人信息不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("好友信息删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)//查找指定好友的信息函数
{
	system("cls");
	char name[Max_Name];
	printf("请输入查找人的姓名：");
	scanf("%s", name);
	int pos = FineByName(ps, name);
	if (-1 == pos)
	{
		printf("要查找的人信息不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址"); //打印标题：%s中间的数表示多少个字符，\t制表符（负号表示左对齐）
		printf("%-20s\t%-5s\t%-4d\t%-12s\t%-30s\n",//打印数据
			ps->data[pos].name,
			ps->data[pos].sex,
			ps->data[pos].age,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	system("cls");
	char name[Max_Sex];
	printf("请输入修改人的姓名：");
	scanf("%s", name);
	int pos = FineByName(ps, name);
	if (-1 == pos)
	{
		printf("要修改的人信息不存在\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", ps->data[pos].name);//name是数组，数组名相当于数组首元素地址
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);//sex是数组，数组名相当于数组首元素地址
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));//age是int型，所以需要取地址
		printf("请输入电话：");
		scanf("%s", ps->data[pos].tele);//tele是数组，数组名相当于数组首元素地址
		printf("请输入地址：");
		scanf("%s", ps->data[pos].addr);//addr是数组，数组名相当于数组首元素地址
		printf("好友信息修改成功\n");
	}
}

static int cmp_name(const struct Contact* e1, const struct Contact* e2)//按名字比较好友信息函数（const修饰表示只是比较好友信息，不可被修改）
{                                                                      //（static表示cmp_name是内部函数，不能被外部函数调用）
	return strcmp(e1->data->name, e2->data->name);
}

void SortContact(struct Contact* ps)//按名字排序通讯录信息函数（const修饰表示只是排序通讯录所有信息，不可被修改）
{
	system("cls");
	if (ps->size > 1)
	{
		qsort(ps, ps->size, sizeof(ps->data[0]), cmp_name);
		printf("好友信息排序成功\n");
	}
	else
	{
		printf("好友信息太少，无法排序\n");
	}
}