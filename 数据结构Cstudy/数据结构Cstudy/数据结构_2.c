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

//带头循环双链表接口测试：
void TestList1()
{
	ListNode* list = ListCreate();
	ListPushBack(list, 1);
	ListPushBack(list, 2);
	ListPushBack(list, 3);
	ListPushBack(list, 4);
	ListPrint(list);
	ListPopBack(list);
	ListPrint(list);
}
int main()
{
	TestList1();
	return 0;
}