////˳���ͷ�ļ���
//#pragma once//���ȼ���#ifdef _���ݽṹ_H_,#define _���ݽṹ_H_,#endif (_���ݽṹ_H_��ʡ��)��
//
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
//#pragma once//���ȼ���#ifdef _���ݽṹ_H_,#define _���ݽṹ_H_,#endif (_���ݽṹ_H_��ʡ��)��
//
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

////��ͷѭ��˫����ͷ�ļ���
//#pragma once
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef int LTDataType;
//typedef struct ListNode
//{
//	struct ListNode* next;
//	struct ListNode* prev;
//	LTDataType data;
//}ListNode;
//
//ListNode* ListCreate();
//void ListDestory(ListNode* plist);
//void ListPrint(ListNode* pList);
//void ListPushBack(ListNode* pList,LTDataType x);
//void ListPopBack(ListNode* pList);
//void ListPushFront(ListNode* pList, LTDataType x); 
//void ListPopFront(ListNode* pList);
//ListNode* ListFind(ListNode* pList, LTDataType x);
//void ListInsert(ListNode* pos, LTDataType x);
//void ListErase(ListNode* pos);

////ջͷ�ļ���
//#pragma once
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}Stack;
//
//void StackInit(Stack* ps);
//void StackPush(Stack* ps,STDataType data);
//void StackPop(Stack* ps);
//STDataType StackTop(Stack* ps);
//int StackSize(Stack* ps);
//int StackEmpty(Stack* ps);
//void StackDestroy(Stack* ps);

////����ͷ�ļ���
//#pragma once
//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//
//typedef int QDataType;
//typedef struct QueueNode
//{
//	QDataType data;
//	struct QueueNode* next;
//}QueueNode;
//typedef struct Queue
//{
//	struct QueueNode* front;
//	struct QueueNode* back;
//}Queue;
//
//void QueueInit(Queue* q);
//void QueuePush(Queue* q, QDataType data);
//void QueuePop(Queue* q);
//QDataType QueueFront(Queue* q);
//QDataType QueueBack(Queue* q);
//int QueueSize(Queue* q);
//int QueueEmpty(Queue* q);
//void QueueDestroy(Queue* q);

////С�ѵ�ͷ�ļ�
//#pragma once
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//
//typedef int HpDataType;
//typedef struct Heap
//{
//	HpDataType* arr;
//	size_t size;
//	size_t capacity;
//}Heap;
//
//Heap* HeapCreate(HpDataType* arr,size_t n);
//void HeapDestroy(Heap* hp);
//void HeapPrint(Heap* hp);
//void HeapPush(Heap* hp,HpDataType x);
//void HeapPop(Heap* hp);
//HpDataType HeapTop(Heap* hp);
//int HeapEmpty(Heap* hp);
//void HeapSort(Heap* hp,size_t n);
//void PrintTopK(HpDataType* arr,int n,int k);

////������ͷ�ļ���
//#pragma once
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef char BTDataType;
//typedef struct BinaryTree
//{
//	struct BinaryTree* left;
//	struct BinaryTree* right;
//	BTDataType data;
//}BinaryTree;
//
//BinaryTree* BinaryTreeCreate(BTDataType* arr, BTDataType n, int* pi);
//void BinaryTreeDestory(BinaryTree* root);
//int BinaryTreeSize(BinaryTree* root);
//int BinaryTreeLeafSize(BinaryTree* root);
//int BinaryTreeLevelKSize(BinaryTree* root, int k);
//BinaryTree* BinaryTreeFine(BinaryTree* root, BTDataType x);
//void BinaryTreePrevOrder(BinaryTree* root);
//void BinaryTreeInOrder(BinaryTree* root);
//void BinaryTreePostOrder(BinaryTree* root);
//
//typedef BinaryTree* QDataType;
//typedef struct QueueNode
//{
//	QDataType data;
//	struct QueueNode* next;
//}QueueNode;
//typedef struct Queue
//{
//	struct QueueNode* front;
//	struct QueueNode* back;
//}Queue;
//
//void QueueInit(Queue* q);
//void QueuePush(Queue* q, QDataType data);
//void QueuePop(Queue* q);
//QDataType QueueFront(Queue* q);
//QDataType QueueBack(Queue* q);
//int QueueSize(Queue* q);
//int QueueEmpty(Queue* q);
//void QueueDestroy(Queue* q);
//
//void BinaryTreeLevelOrder(BinaryTree* root);
//int BinaryTreeComplete(BinaryTree* root);

////����ͷ�ļ���
//#pragma once
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<assert.h>
//#include<string.h>
//
//void PrintArray(int* arr, int n);
//void InsertSort(int* arr, int n);
//void ShellSort(int* arr, int n);
//void SelectSort(int* arr, int n);
//void HeapSort(int* arr, int n);
//void BubbleSort(int* arr, int n);
//void QuickSort(int* arr, int begin, int end);
//void QuickSortNoR(int* arr, int begin, int end);
//void MergeSort(int* arr, int n);
//void CountSort(int* arr, int n);