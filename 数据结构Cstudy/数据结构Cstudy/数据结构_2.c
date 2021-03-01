#define _CRT_SECURE_NO_WARNINGS 1

#include"数据结构.h"

void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushback(&s, 1);
	SeqListPushback(&s, 2);
	SeqListPushback(&s, 3);
	SeqListPushback(&s, 4);
	SeqListPushback(&s, 5);
	SeqListPrint(&s);
	SeqListPopback(&s);
	SeqListPrint(&s);
	SeqListPushFront(&s, 0);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
}
void TestSeqList2()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushback(&s, 0);
	SeqListPushback(&s, 1);
	SeqListPushback(&s, 2);
	SeqListPushback(&s, 3);
	SeqListPushback(&s, 4);
	SeqListPushback(&s, 5);
	SeqListPrint(&s);
	SeqListInsert(&s, 0, 30);
	SeqListPrint(&s);
	SeqListErase(&s, 0);
	SeqListPrint(&s);
	SeqListRemove(&s, 5);
	SeqListPrint(&s);
}
void TestSeqList3()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushback(&s, 5);
	SeqListPushback(&s, 1);
	SeqListPushback(&s, 0);
	SeqListPushback(&s, 2);
	SeqListPushback(&s, 4);
	SeqListPushback(&s, 3);
	SeqListPrint(&s);
	SeqListBubbleSort(&s);
	SeqListPrint(&s);
}
int main()
{
	TestSeqList3();
	return 0;
}