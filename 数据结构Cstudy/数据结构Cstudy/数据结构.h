#pragma once//���ȼ���#ifdef _���ݽṹ_H_,#define _���ݽṹ_H_,#endif (_���ݽṹ_H_��ʡ��)��

////˳���ͷ�ļ���
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType* _a;
//	size_t size;
//	size_t capacity;
//}SeqList;
//
//void SeqListInit(SeqList* ps);
//void SeqListDestory(SeqList* ps);
//void SeqListPrint(SeqList* ps);
//
//void SeqListCheckCapacity(SeqList* ps);
//void SeqListPushback(SeqList* ps,SLDataType x);
//void SeqListPopback(SeqList* ps);
//void SeqListPushFront(SeqList* ps, SLDataType x);
//void SeqListPopFront(SeqList* ps);
//int SeqListFind(SeqList* ps, SLDataType x);
//void SeqListInsert(SeqList* ps, size_t pos, SLDataType x);
//void SeqListErase(SeqList* ps, size_t pos);
//void SeqListRemove(SeqList* ps, SLDataType x);
//void SeqListBubbleSort(SeqList* ps);
//void SeqListBinaryFind(SeqList* ps,SLDataType x);

////����ͷ��ѭ��������ͷ�ļ���
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int SLTDataType;
//typedef struct SListNode
//{
//	SLTDataType _Data;
//	struct SListNode* _next;
//}SListNode;
//
//void SListPrint(SListNode* pList);
//
//void SListPushBack(SListNode** ppList, SLTDataType x);
//void SListPopBack(SListNode** ppList);
//void SListPushFront(SListNode** ppList, SLTDataType x);
//void SListPopFront(SListNode** ppList);
//SListNode* SListFind(SListNode* pList, SLTDataType x);
//void SListInsertAfter(SListNode* pos, SLTDataType x);
//void SListEraseAfter(SListNode* pos);
//void SListDestroy(SListNode** ppList);