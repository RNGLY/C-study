#ifndef __通讯录_H__
#define __通讯录_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define Default_size 3

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
	SORT,//6排序
	SAVE//7存储
};

typedef struct PeoInfo//好友信息结构体
{
	char name[Max_Name];
	int age;
	char sex[Max_Sex];
	char tele[Max_Tele];
	char addr[Max_Addr];
}PeoInfo;

typedef struct Contact//通讯录结构体
{
	struct PeoInfo* data;//好友信息结构体类型指针（用来接收动态开辟内存的地址）
	int size;//记录当前已经有的好友信息个数
	int capacity;//当前通讯录的最大容量
}Contact;

void InitContact(Contact* ps);//初始化通讯录函数声明
void ShowContact(const Contact* ps);//显示通讯录所有信息函数声明（const修饰表示只是显示通讯录所有信息，不可被修改）
void Check_Capacity(Contact* ps);//检测容量函数声明
void LoadContact(Contact* ps);//加载文件信息函数声明
void AddContact(Contact* ps);//增加好友信息函数
void DelContact(Contact* ps);//删除指定好友信息函数声明
void SearchContact(const Contact* ps);//查找指定好友信息函数声明（const修饰表示只是查找指顶好友信息，不可被修改）
void ModifyContact(Contact* ps);//修改指定好友信息函数声明
void SortContact(Contact* ps);//按名字排序通讯录信息函数声明
void SaveContact(const Contact* ps);//保存通讯录信息函数声明（const修饰表示只是保存通讯录信息，不可被修改）
void Destroy_Contact(Contact* ps);//销毁通讯录函数声明

#endif