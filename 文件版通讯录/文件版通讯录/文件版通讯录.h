#ifndef __ͨѶ¼_H__
#define __ͨѶ¼_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define Default_size 3

#define Max_Name 20
#define Max_Sex 5
#define Max_Tele 12
#define Max_Addr 30

enum Option//����ö�������ô���ɶ��Ը���
{
	EXIT,//0�˳�
	ADD,//1����
	DEL,//2ɾ��
	SERACH,//3����
	MODIFY,//4�޸�
	SHOW,//5��ʾ
	SORT,//6����
	SAVE//7�洢
};

typedef struct PeoInfo//������Ϣ�ṹ��
{
	char name[Max_Name];
	int age;
	char sex[Max_Sex];
	char tele[Max_Tele];
	char addr[Max_Addr];
}PeoInfo;

typedef struct Contact//ͨѶ¼�ṹ��
{
	struct PeoInfo* data;//������Ϣ�ṹ������ָ�루�������ն�̬�����ڴ�ĵ�ַ��
	int size;//��¼��ǰ�Ѿ��еĺ�����Ϣ����
	int capacity;//��ǰͨѶ¼���������
}Contact;

void InitContact(Contact* ps);//��ʼ��ͨѶ¼��������
void ShowContact(const Contact* ps);//��ʾͨѶ¼������Ϣ����������const���α�ʾֻ����ʾͨѶ¼������Ϣ�����ɱ��޸ģ�
void Check_Capacity(Contact* ps);//���������������
void LoadContact(Contact* ps);//�����ļ���Ϣ��������
void AddContact(Contact* ps);//���Ӻ�����Ϣ����
void DelContact(Contact* ps);//ɾ��ָ��������Ϣ��������
void SearchContact(const Contact* ps);//����ָ��������Ϣ����������const���α�ʾֻ�ǲ���ָ��������Ϣ�����ɱ��޸ģ�
void ModifyContact(Contact* ps);//�޸�ָ��������Ϣ��������
void SortContact(Contact* ps);//����������ͨѶ¼��Ϣ��������
void SaveContact(const Contact* ps);//����ͨѶ¼��Ϣ����������const���α�ʾֻ�Ǳ���ͨѶ¼��Ϣ�����ɱ��޸ģ�
void Destroy_Contact(Contact* ps);//����ͨѶ¼��������

#endif