#ifndef __通讯录_H__
#define __通讯录_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Max 1000

#define Max_Name 20
#define Max_Sex 5
#define Max_Tele 12
#define Max_Addr 30

enum Option//利用枚举类型让代码可读性更高
{
	EXIT,//0退出
	ADD,//1增加
	DEL,//2删除
	SERACH,//3查找
	MODIFY,//4修改
	SHOW,//5显示
	SORT//6排序
};

struct PeoInfo//好友信息结构体
{
	char name[Max_Name];
	int age;
	char sex[Max_Sex];
	char tele[Max_Tele];
	char addr[Max_Addr];
};

struct Contact//通讯录结构体
{
	struct PeoInfo data[Max];//创建max个好友信息
	int size;//记录当前已经有的好友信息个数
};

void InitContact(struct Contact* ps);//初始化通讯录函数声明
void ShowContact(const struct Contact* ps);//显示通讯录所有信息函数声明（const修饰表示只是显示通讯录所有信息，不可被修改）
void AddContact(struct Contact* ps);//增加好友信息函数
void DelContact(struct Contact* ps);//删除指定好友信息函数声明
void SearchContact(const struct Contact* ps);//查找指定好友信息函数声明（const修饰表示只是查找指顶好友信息，不可被修改）
void ModifyContact(struct Contact* ps);//修改指定好友信息函数声明
void SortContact(struct Contact* ps);//按名字排序通讯录信息函数声明
#endif
