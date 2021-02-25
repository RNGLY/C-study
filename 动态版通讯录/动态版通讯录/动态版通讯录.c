#define _CRT_SECURE_NO_WARNINGS 1

#include"��̬��ͨѶ¼.h"

void InitContact(Contact* ps)//��ʼ��ͨѶ¼����
{
	ps->data = (PeoInfo*)malloc(Default_size * sizeof(PeoInfo));//ͨѶ¼��ʼ������̬���䣩�ܴ��3��������Ϣ���ڴ�
	if (ps->data == NULL)
	{
		printf("%s\n", strerror(errno));//��̬�ڴ濪��ʧ�ܣ���ӡʧ��ԭ�����������
		return;
	}
	ps->size = 0;//������Ϣ������ʼ��Ϊ0
	ps->capacity = Default_size;//���������ʼ��Ϊ3
}

void ShowContact(const Contact* ps)//��ʾͨѶ¼������Ϣ����
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

static int FineByName(const Contact* ps, char name[Max_Name])//���Һ�����Ϣ��������Ϊָ�����ѵ���ɾ��Ķ���Ҫ���ң��ʵ�����װ��һ����������������������⣩
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

static void Check_Capacity(Contact* ps)//����������������ˣ����ݣ�û��,ɶ�²��ɣ�
{                                             //��static��ʾFineByName���ڲ����������ܱ��ⲿ�������ã�
	if (ps->size == ps->capacity)//����
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));//����
		if (ptr != NULL)//��̬�ڴ濪�ٳɹ�
		{
			ps->data = ptr;
			ps->capacity += 2;
		}
		else
		{
			printf("%s\n", strerror(errno));//��̬�ڴ濪��ʧ�ܣ���ӡʧ��ԭ�����������
			return;
		}
	}
}

void AddContact(Contact* ps)//���Ӻ�����Ϣ����
{
	system("cls");
	Check_Capacity(ps);//�����������
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

void DelContact(Contact* ps)//ɾ��ָ��������Ϣ��������
{
	system("cls");
	char name[Max_Sex];
	printf("������ɾ���˵�������");
	scanf("%s", name);
	int pos = FineByName(ps, name);//���Һ�����Ϣ����
	if (-1 == pos)
	{
		printf("Ҫɾ��������Ϣ������\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("������Ϣɾ���ɹ�\n");
	}
}

void SearchContact(const Contact* ps)//����ָ�����ѵ���Ϣ����
{
	system("cls");
	char name[Max_Name];
	printf("����������˵�������");
	scanf("%s", name);
	int pos = FineByName(ps, name);//���Һ�����Ϣ����
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

void ModifyContact(Contact* ps)
{
	system("cls");
	char name[Max_Sex];
	printf("�������޸��˵�������");
	scanf("%s", name);
	int pos = FineByName(ps, name);//���Һ�����Ϣ����
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

static int cmp_name(const PeoInfo* e1, const PeoInfo* e2)//�����ֱȽϺ�����Ϣ������const���α�ʾֻ�ǱȽϺ�����Ϣ�����ɱ��޸ģ�
{                                                                      //��static��ʾcmp_name���ڲ����������ܱ��ⲿ�������ã�
	return strcmp(e1->name, e2->name);
}

void SortContact(struct Contact* ps)//����������ͨѶ¼��Ϣ����
{
	system("cls");
	if (ps->size > 1)
	{
		qsort(ps->data, ps->size, sizeof(PeoInfo), cmp_name);
		printf("������Ϣ����ɹ�\n");
	}
	else
	{
		printf("������Ϣ̫�٣��޷�����\n");
	}
}

void Destroy_Contact(Contact* ps)//����ͨѶ¼�����������ͷŶ�̬���ٵ��ڴ棩
{
	free(ps->data);
	ps->data = NULL;
}
