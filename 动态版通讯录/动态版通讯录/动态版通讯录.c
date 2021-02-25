#define _CRT_SECURE_NO_WARNINGS 1

#include"动态版通讯录.h"

void InitContact(Contact* ps)//初始化通讯录函数
{
	ps->data = (PeoInfo*)malloc(Default_size * sizeof(PeoInfo));//通讯录初始化（动态分配）能存放3个好友信息的内存
	if (ps->data == NULL)
	{
		printf("%s\n", strerror(errno));//动态内存开辟失败，打印失败原因后，立即返回
		return;
	}
	ps->size = 0;//好友信息个数初始化为0
	ps->capacity = Default_size;//最大容量初始化为3
}

void ShowContact(const Contact* ps)//显示通讯录所有信息函数
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

static int FineByName(const Contact* ps, char name[Max_Name])//查找好友信息函数（因为指定好友的增删查改都需要查找，故单独封装成一个函数，解决代码冗余问题）
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

static void Check_Capacity(Contact* ps)//检测容量函数（满了，增容；没满,啥事不干）
{                                             //（static表示FineByName是内部函数，不能被外部函数调用）
	if (ps->size == ps->capacity)//满了
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));//增容
		if (ptr != NULL)//动态内存开辟成功
		{
			ps->data = ptr;
			ps->capacity += 2;
		}
		else
		{
			printf("%s\n", strerror(errno));//动态内存开辟失败，打印失败原因后，立即返回
			return;
		}
	}
}

void AddContact(Contact* ps)//增加好友信息函数
{
	system("cls");
	Check_Capacity(ps);//检测容量函数
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

void DelContact(Contact* ps)//删除指定好友信息函数声明
{
	system("cls");
	char name[Max_Sex];
	printf("请输入删除人的姓名：");
	scanf("%s", name);
	int pos = FineByName(ps, name);//查找好友信息函数
	if (-1 == pos)
	{
		printf("要删除的人信息不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("好友信息删除成功\n");
	}
}

void SearchContact(const Contact* ps)//查找指定好友的信息函数
{
	system("cls");
	char name[Max_Name];
	printf("请输入查找人的姓名：");
	scanf("%s", name);
	int pos = FineByName(ps, name);//查找好友信息函数
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

void ModifyContact(Contact* ps)
{
	system("cls");
	char name[Max_Sex];
	printf("请输入修改人的姓名：");
	scanf("%s", name);
	int pos = FineByName(ps, name);//查找好友信息函数
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

static int cmp_name(const PeoInfo* e1, const PeoInfo* e2)//按名字比较好友信息函数（const修饰表示只是比较好友信息，不可被修改）
{                                                                      //（static表示cmp_name是内部函数，不能被外部函数调用）
	return strcmp(e1->name, e2->name);
}

void SortContact(struct Contact* ps)//按名字排序通讯录信息函数
{
	system("cls");
	if (ps->size > 1)
	{
		qsort(ps->data, ps->size, sizeof(PeoInfo), cmp_name);
		printf("好友信息排序成功\n");
	}
	else
	{
		printf("好友信息太少，无法排序\n");
	}
}

void Destroy_Contact(Contact* ps)//销毁通讯录函数声明（释放动态开辟的内存）
{
	free(ps->data);
	ps->data = NULL;
}
