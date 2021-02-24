#define _CRT_SECURE_NO_WARNINGS 1

#include"ͨѶ¼.h"

void InitContact(struct Contact* ps)//��ʼ��ͨѶ¼����
{
	memset(ps->data, 0, sizeof(ps->data));//������Ϣ��ʼ��Ϊ0
	ps->size = 0;//ͨѶ¼���������Ϣ������ʼ��Ϊ0
}

void ShowContact(const struct Contact* ps)//��ʾͨѶ¼������Ϣ����
{
	system("cls");
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ"); //��ӡ���⣺%s�м������ʾ���ٸ��ַ���\t�Ʊ�������ű�ʾ����룩
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5s\t%-4d\t%-12s\t%-30s\n",//��ӡ����
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FineByName(const struct Contact* ps, char name[Max_Name])//���Һ�����Ϣ��������Ϊָ�����ѵ���ɾ��Ķ���Ҫ���ң��ʵ�����װ��һ����������������������⣩
{                                                                   //��static��ʾFineByName���ڲ����������ܱ��ⲿ�������ã�    
	int i = 0;
	for (i = 0; i < ps->size; i++)//����ɾ���������ڵ�λ��
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//�ҵ��˷���ͨѶ¼�е�data�±�
		}
	}
	return -1; //�Ҳ������� - 1
}

void AddContact(struct Contact* ps)//���Ӻ�����Ϣ����
{
	system("cls");
	if (ps->size == Max)
	{
		printf("ͨѶ¼�������޷����ӣ�\n");
	}
	else
	{
		printf("������������");
		scanf("%s", ps->data[ps->size].name);//name�����飬�������൱��������Ԫ�ص�ַ
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);//sex�����飬�������൱��������Ԫ�ص�ַ
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));//age��int�ͣ�������Ҫȡ��ַ
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);//tele�����飬�������൱��������Ԫ�ص�ַ
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);//addr�����飬�������൱��������Ԫ�ص�ַ
		ps->size++;
		printf("������Ϣ��ӳɹ�\n");
	}
}

void DelContact(struct Contact* ps)//ɾ��ָ��������Ϣ��������
{
	system("cls");
	char name[Max_Sex];
	printf("������ɾ���˵�������");
	scanf("%s", name);
	int pos = FineByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫɾ��������Ϣ������\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("������Ϣɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)//����ָ�����ѵ���Ϣ����
{
	system("cls");
	char name[Max_Name];
	printf("����������˵�������");
	scanf("%s", name);
	int pos = FineByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ�����Ϣ������\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ"); //��ӡ���⣺%s�м������ʾ���ٸ��ַ���\t�Ʊ�������ű�ʾ����룩
		printf("%-20s\t%-5s\t%-4d\t%-12s\t%-30s\n",//��ӡ����
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
	printf("�������޸��˵�������");
	scanf("%s", name);
	int pos = FineByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ�����Ϣ������\n");
	}
	else
	{
		printf("������������");
		scanf("%s", ps->data[pos].name);//name�����飬�������൱��������Ԫ�ص�ַ
		printf("�������Ա�");
		scanf("%s", ps->data[pos].sex);//sex�����飬�������൱��������Ԫ�ص�ַ
		printf("���������䣺");
		scanf("%d", &(ps->data[pos].age));//age��int�ͣ�������Ҫȡ��ַ
		printf("������绰��");
		scanf("%s", ps->data[pos].tele);//tele�����飬�������൱��������Ԫ�ص�ַ
		printf("�������ַ��");
		scanf("%s", ps->data[pos].addr);//addr�����飬�������൱��������Ԫ�ص�ַ
		printf("������Ϣ�޸ĳɹ�\n");
	}
}

static int cmp_name(const struct Contact* e1, const struct Contact* e2)//�����ֱȽϺ�����Ϣ������const���α�ʾֻ�ǱȽϺ�����Ϣ�����ɱ��޸ģ�
{                                                                      //��static��ʾcmp_name���ڲ����������ܱ��ⲿ�������ã�
	return strcmp(e1->data->name, e2->data->name);
}

void SortContact(struct Contact* ps)//����������ͨѶ¼��Ϣ������const���α�ʾֻ������ͨѶ¼������Ϣ�����ɱ��޸ģ�
{
	system("cls");
	if (ps->size > 1)
	{
		qsort(ps, ps->size, sizeof(ps->data[0]), cmp_name);
		printf("������Ϣ����ɹ�\n");
	}
	else
	{
		printf("������Ϣ̫�٣��޷�����\n");
	}
}