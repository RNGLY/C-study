#define _CRT_SECURE_NO_WARNINGS 1

#include"数据结构.h"

//顺序表接口测试：
//void TestSeqList1()
//{
//	SeqList s;
//	SeqListInit(&s);
//	SeqListPushback(&s, 1);
//	SeqListPushback(&s, 2);
//	SeqListPushback(&s, 3);
//	SeqListPushback(&s, 4);
//	SeqListPushback(&s, 5);
//	SeqListPrint(&s);
//	SeqListPopback(&s);
//	SeqListPrint(&s);
//	SeqListPushFront(&s, 0);
//	SeqListPrint(&s);
//	SeqListPopFront(&s);
//	SeqListPrint(&s);
//  SeqListDestory(&s);
//}
//void TestSeqList2()
//{
//	SeqList s;
//	SeqListInit(&s);
//	SeqListPushback(&s, 0);
//	SeqListPushback(&s, 1);
//	SeqListPushback(&s, 2);
//	SeqListPushback(&s, 3);
//	SeqListPushback(&s, 4);
//	SeqListPushback(&s, 5);
//	SeqListPrint(&s);
//	SeqListInsert(&s, 0, 30);
//	SeqListPrint(&s);
//	SeqListErase(&s, 0);
//	SeqListPrint(&s);
//	SeqListRemove(&s, 5);
//	SeqListPrint(&s);
//  SeqListDestory(&s);
//}
//void TestSeqList3()
//{
//	SeqList s;
//	SeqListInit(&s);
//	SeqListPushback(&s, 5);
//	SeqListPushback(&s, 1);
//	SeqListPushback(&s, 0);
//	SeqListPushback(&s, 2);
//	SeqListPushback(&s, 4);
//	SeqListPushback(&s, 3);
//	SeqListPrint(&s);
//	SeqListBubbleSort(&s);
//	SeqListPrint(&s);
//  SeqListDestory(&s);
//}
//int main()
//{
//		TestSeqList1();
//		TestSeqList2();
//		TestSeqList3();
//	return 0;
//}

////不带头非循环单链表接口测试：
//void TestSList1()
//{
//	SListNode* pList = NULL;
//	SListPushBack(&pList, 1);
//	SListPushBack(&pList, 2);
//	SListPushBack(&pList, 3);
//	SListPushBack(&pList, 4);
//	SListPrint(pList);
//	SListPushFront(&pList, 0);
//	SListPrint(pList);
//	SListPopBack(&pList);
//	SListPrint(pList);
//	SListPopFront(&pList);
//	SListPrint(pList);
//	SListNode* ret = SListFind(pList, 3);
////	ret->_Data = 30;
//	SListInsertAfter(ret, 30);
//	SListPrint(pList);
//	SListEraseAfter(ret);
//	SListPrint(pList);
//	SListDestroy(&pList);
//}
//void TestSList2()
//{
//	SListNode* pList = NULL;
//	SListPushBack(&pList, 1);
//	SListPushBack(&pList, 2);
//	SListPushBack(&pList, 3);
//	SListPushBack(&pList, 4);
//	SListPrint(pList);
//	SListDestroy(&pList);
//}
//int main()
//{
//	TestSList2();
//	return 0;
//}

////带头循环双链表接口测试：
//void TestList1()
//{
//	ListNode* list = ListCreate();
//	ListPushBack(list, 1);
//	ListPushBack(list, 2);
//	ListPushBack(list, 3);
//	ListPushBack(list, 4);
//	ListPrint(list);
//	ListPopBack(list);
//	ListPrint(list);
//	ListPushFront(list,0);
//	ListPrint(list);
//	ListPopFront(list);
//	ListPrint(list);
//  ListDestory(list)
//}
//int main()
//{
//	TestList1();
//	return 0;
//}

////栈常见接口测试：
//void TestStack()
//{
//	Stack st;
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	printf("%d ", StackTop(&st));
//	StackPop(&st);
//	StackPush(&st, 4);
//	while (!StackEmpty(&st))
//	{
//		printf("%d ", StackTop(&st));
//		StackPop(&st);
//	}
//  printf("\n");
//	StackDestroy(&st);
//}
//int main()
//{
//	TestStack();
//	return 0;
//}

////队列常见接口测试：
//void TestQueue()
//{
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//	//printf("%d ", QueueFront(&q));
//	//QueuePop(&q);
//	while (!QueueEmpty(&q))
//	{
//		printf("%d ", QueueFront(&q));
//		QueuePop(&q);
//	}
//	printf("\n");
//	QueueDestroy(&q);
//}
//int main()
//{
//	TestQueue();
//	return 0;
//}

//小堆常见接口测试：
