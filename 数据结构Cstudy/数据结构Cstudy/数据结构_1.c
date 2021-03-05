#define _CRT_SECURE_NO_WARNINGS 1

#include"数据结构.h"

////顺序表常见接口：
//void SeqListInit(SeqList* ps)
//{
//	assert(ps);
//	ps->_a = NULL;
//	ps->size = 0;
//	ps->capacity = 0;
//}
//void SeqListDestory(SeqList* ps)
//{
//	assert(ps);
//	free(ps->_a);
//	ps->_a = NULL;
//	ps->size = ps->capacity = 0;
//}
//void SeqListPrint(SeqList* ps)
//{
//	assert(ps);
//	for (size_t i = 0; i < ps->size; ++i)
//	{
//		printf("%d ", ps->_a[i]);
//	}
//	printf("\n");
//}
//void SeqListCheckCapacity(SeqList* ps)
//{
//	if (ps->size >= ps->capacity)
//	{
//		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		ps->_a=realloc(ps->_a,newcapacity*sizeof(SLDataType));
//		ps->capacity = newcapacity;
//	}
//}
//void SeqListPushback(SeqList* ps, SLDataType x)
//{
//	assert(ps);
//	SeqListCheckCapacity(ps);
//	ps->_a[ps->size++] = x;
////	ps->size++;
//}
//void SeqListPopback(SeqList* ps)
//{
//	assert(ps && ps->size>0);
////	ps->_a[ps->size - 1] = 0;
//	ps->size--;
//}
//void SeqListPushFront(SeqList* ps, SLDataType x)
//{
//	assert(ps);
//	SeqListCheckCapacity(ps);
//	int end = ps->size-1;
//	for (; end >= 0; --end)
//	{
//		ps->_a[end + 1] = ps->_a[end];
//	}
//	ps->_a[0] = x;
//	ps->size++;
//}
//void SeqListPopFront(SeqList* ps)
//{
//	assert(ps && ps->size > 0);
//	size_t start = 0;
//	for (start = 1; start < ps->size; ++start)
//	{
//		ps->_a[start-1] = ps->_a[start];
//	}
//	ps->size--;
//}
//int SeqListFind(SeqList* ps, SLDataType x)
//{
//	assert(ps);
//	for (size_t i = 0; i < ps->size; ++i)
//	{
//		if (ps->_a[i] == x)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//void SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
//{
//	assert(ps && pos <= ps->size);
//	SeqListCheckCapacity(ps);
//	size_t end = ps->size+1;
//	while (end > pos)
//	{
//		ps->_a[end] = ps->_a[end-1];
//		--end;
//	}
//	ps->_a[pos] = x;
//	ps->size++;
//}
//void SeqListErase(SeqList* ps, size_t pos)
//{
//	assert(ps && pos<ps->size);
//	size_t i = pos + 1;
//	while (i < ps->size)
//	{
//		ps->_a[i - 1] = ps->_a[i];
//		++i;
//	}
//	ps->size--;
//}
//void SeqListRemove(SeqList* ps, SLDataType x)
//{
//	int pos = SeqListFind(ps, x);
//	if (pos >= 0)
//	{
//		SeqListErase(ps, pos);
//	}
//}
//void SeqListBubbleSort(SeqList* ps)
//{
//	for (size_t end = ps->size; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (ps->_a[i-1]>ps->_a[i])
//			{
//				SLDataType tmp = ps->_a[i - 1];
//				ps->_a[i - 1] = ps->_a[i];
//				ps->_a[i] = tmp;
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//		{
//			break;
//		}
//	}
//}
//void SeqListBinaryFind(SeqList* ps, SLDataType x)
//{
//	size_t begin = 0, end = ps->size-1;
//	while (begin <= end)
//	{
//		size_t mid = (begin + end) / 2;
//		if (x > ps->_a[mid])
//		{
//			begin = mid + 1;
//		}
//		else if (x < ps->_a[mid])
//		{
//			end = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

////不带头非循环单链表常见接口：
//void SListPrint(SListNode* pList)
//{
//	SListNode* cur = pList;
//	while (cur != NULL)
//	{
//		printf("%d->", cur->_Data);
//		cur = cur->_next;
//	}
//	printf("NULL\n");
//}
//SListNode* BuySListNode(SLTDataType x)
//{
//	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
//	newNode->_Data = x;
//	newNode->_next = NULL;
//	return newNode;
//}
//void SListPushBack(SListNode** ppList, SLTDataType x)
//{
//	SListNode* newNode = BuySListNode(x);
//	if (*ppList == NULL)
//	{
//		*ppList = newNode;
//	}
//	else
//	{
//		SListNode* tail = *ppList;
//		while (tail->_next != NULL)
//		{
//			tail = tail->_next;
//		}
//		tail->_next = newNode;
//	}
//}
//void SListPopBack(SListNode** ppList)
//{
//	if (*ppList == NULL)
//	{
//		return;
//	}
//	else if ((*ppList)->_next == NULL)
//	{
//		free(*ppList);
//		*ppList = NULL;
//	}
//	else
//	{
//		SListNode* prev = NULL;
//		SListNode* tail = *ppList;
//		while (tail->_next != NULL)
//		{
//			prev = tail;
//			tail = tail->_next;
//		}
//		free(tail);
//		if (prev != NULL)
//		{
//			prev->_next = NULL;
//		}
//	}
//}
//void SListPushFront(SListNode** ppList, SLTDataType x)
//{
//	SListNode* newNode = BuySListNode(x);
//	newNode->_next = *ppList;
//	*ppList = newNode;
//}
//void SListPopFront(SListNode** ppList)
//{
//	if (*ppList)
//	{
//		SListNode* next = (*ppList)->_next;
//		free(*ppList);
//		*ppList = next;
//	}
//}
//SListNode* SListFind(SListNode* pList, SLTDataType x)
//{
//	SListNode* cur = pList;
//	while (cur)
//	{
//		if (cur->_Data == x)
//		{
//			return cur;
//		}
//		else
//		{
//			cur = cur->_next;
//		}
//	}
//	return NULL;
//}
//void SListInsertAfter(SListNode* pos, SLTDataType x)
//{
//	SListNode* newNode = BuySListNode(x);
//	newNode->_next = pos->_next;
//	pos->_next = newNode;
//}
//void SListEraseAfter(SListNode* pos)
//{
//	SListNode* next = pos->_next;
//	if (next != NULL)
//	{
//		pos->_next = next->_next;
//		free(next);
//	}
//}
//void SListDestroy(SListNode** ppList)
//{
//	SListNode* cur = *ppList;
//	while (cur)
//	{
//		SListNode* next = cur->_next;
//		free(cur);
//		cur = next;
//	}
//	*ppList = NULL;
//}

//带头循环双链表常见接口：
ListNode* ListCreate()
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	head->next = head;
	head->prev = head;
	return head;
}
void ListPrint(ListNode* pList)
{
	ListNode* cur = pList->next;
	while (cur != pList)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void ListPushBack(ListNode* pList, LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	ListNode* tail = pList->prev;
	tail->next = newNode;
	newNode->prev = tail;
	newNode->next = pList;
	pList->prev = newNode;
}
void ListPopBack(ListNode* pList)
{
	ListNode* tail = pList->prev;
	ListNode* prev = tail->prev;
	free(tail);
	prev->next = pList;
	pList->prev = prev;
}

////函数实现原地移除数组中值为val的数（要求时间复杂度为O(N)，空间复杂度为O(1)）：
//int removeElement(int* nums, int numsSize, int val)
//{
//	size_t src = 0, dst = 0;
//	while(src < numsSize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst++] = nums[src++];
//		}
//		else
//		{
//			++src;
//		}
//	}
//	return dst;
//}

////函数实现原地删除排序数组中的重复组（要求空间复杂度为O(1)）：
//int removeDuplicates(int* nums,int numsSize)
//{
//	int src1 = 0, src2 = 1;
//	int dst = 0;
//	while (src2 < numsSize)
//	{
//		nums[dst] = nums[src1];
//		++dst;
//		if (nums[src1] != nums[src2])
//		{
//			++src1;
//			++src2;
//		}
//		else
//		{
//			while (src2 < numsSize && nums[src1] == nums[src2])
//			{
//				++src2;
//			}
//			src1 = src2;
//			++src2;
//		}
//	}
//	if (src1 < numsSize)
//	{
//		nums[dst] = nums[src1];
//		++dst;
//	}
//	return dst;
//}

////函数实现合并两个有序数组为一个有序数组：
//void merge(int* nums1,int nums1Size,int m,int* nums2,int nums2Size,int n)
//{
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int end = m + n - 1;
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[end--] = nums1[end1--];
//		}
//		else
//		{
//			nums1[end--] = nums2[end2--];
//		}
//	}
//	while (end2 >= 0)
//	{
//		nums1[end--] = nums2[end2--];
//	}
//}

////函数实现旋转数组：
//void reverse(int* nums,int begin,int end)
//{
//	while (begin < end)
//	{
//		int tmp = nums[begin];
//		nums[begin] = nums[end];
//		nums[end] = tmp;
//	}
//}
//void rotate(int* nums, int numsSize, int k)
//{
//	if (k > numsSize)
//	{
//		k %= numsSize;
//	}
//	reverse(nums, 0, numsSize - 1);
//	reverse(nums, 0, k - 1);
//	reverse(nums, k, numsSize - 1);
//}

////函数实现数组加整数：
//#include<stdlib.h>
//void reverse(int* nums,int begin,int end)
//{
//	while (begin < end)
//	{
//		int tmp = nums[begin];
//		nums[begin] = nums[end];
//		nums[end] = tmp;
//	}
//}
//int* addToArrayForm(int* A, int ASize, int k, int* returnSize)
//{
//	int* addRet = (int*)malloc(10001 * sizeof(int));
//	int reti = 0;
//	int ai = ASize - 1;
//	int next = 0;
//	while (ai >= 0 || k > 0)
//	{
//		int x1 = 0;
//		if (ai >= 0)
//		{
//			x1 = A[ai];
//		}
//		int x2 = 0;
//		if (k > 0)
//		{
//			x2 = k % 10;
//			k /= 10;
//		}
//		int ret = x1 + x2 + next;
//		if (ret > 9)
//		{
//			ret %= 10;
//			next = 1;
//		}
//		else
//		{
//			next = 0;
//		}
//		addRet[reti++] = ret;
//	}
//	if (next == 1)
//	{
//		addRet[reti++] = 1;
//	}
//	reverse(addRet, 0, reti-1);
//	*returnSize = reti;
//	return addRet;
//}

////函数实现找出数组0到n中缺少的整数：
//int missingNumber(int* nums,int numssize)
//{
//	int x = 0;
//	for (int i = 0; i < numssize; i++)
//	{
//		x ^= nums[i];
//	}
//	for (int i = 0; i <= numssize; i++)
//	{
//		x ^= i;
//	}
//	return x;
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 10 };
//	int* p = &arr[0];
//	int t = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", missingNumber(p, t));
//	return 0;
//}

////函数实现返回单链表中间结点，如果有两个结点返回第二个结点（要求只能遍历链表一次）
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//struct ListNode* middleNode(struct ListNode* head)
//{
//	ListNode* slow = head, *fast = head;
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}

////函数实现删除单链表中所有值为val的结点，然后返回链表（要求只能遍历链表一次）
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	ListNode* prev = NULL, *cur = head;
//	while (cur != NULL)
//	{
//		if (cur->val == val)
//		{
//			ListNode* next = cur->next;
//			free(cur);
//			if (cur == head)
//			{
//				head = next;
//			}
//			else
//			{
//				prev->next = next;
//			}
//			cur = next;
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	return head;
//}

////函数实现反转单链表（指针转方向）：
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	else
//	{
//		ListNode* n1 = NULL, *n2 = head, *n3 = n2->next;
//		while (n2)
//		{
//			n2->next = n1;
//			n1 = n2;
//			n2 = n3;
//			if (n3)
//			{
//				n3 = n3->next;
//			}
//		}
//		return n1;
//	}
//}

////函数实现反转单链表（取结点头插到新链表）：
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//struct ListNode* reverseList(struct ListNode* head)
//{
//	ListNode* cur = head;
//	ListNode* newhead = NULL;
//	while (cur)
//	{
//		ListNode* next = cur->next;
//		cur->next = newhead;
//		newhead = cur;
//		cur = next;
//	}
//	return newhead;
//}

////函数实现输出一个单链表的倒数第k个结点：
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//ListNode* FindKthToTail(ListNode* pListHead,unsigned int k)
//{
//	ListNode* slow = pListHead, *fast = pListHead;
//	while (k--)
//	{
//		if (fast == NULL)
//		{
//			return NULL;
//		}
//		fast = fast->next;
//	}
//	while (fast)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow;
//}

////函数实现合并两个有序单链表：
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//ListNode* mergeTwoLists(ListNode* L1, ListNode* L2)
//{
//	if (L1 == NULL)
//	{
//		return L2;
//	}
//	if (L2 == NULL)
//	{
//		return L1;
//	}
//	ListNode* head = NULL, *tail = NULL;
//	while (L1 && L2)
//	{
//		if (L1->val < L2->val)
//		{
//			if (tail == NULL)
//			{
//				head = tail = L1;
//			}
//			else
//			{
//				tail->next = L1;
//				tail = L1;
//			}
//			L1 = L1->next;
//		}
//		else
//		{
//			if (tail == NULL)
//			{
//				head = tail = L2;
//			}
//			else
//			{
//				tail->next = L2;
//				tail = L2;
//			}
//			L2 = L2->next;
//		}
//	}
//	if (L1 == NULL)
//	{
//		tail->next = L1;
//	}
//	else if (L2 == NULL)
//	{
//		tail->next = L2;
//	}
//	return head;
//}

////函数实现以给定的值x将单链表分割为两部分：
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//ListNode*  partition(ListNode* pHead, int x)
//{
//	ListNode* cur = pHead, *lesserHead, *lesserTail, *greaterHead, *greaterTail;
//	lesserHead = lesserTail = (ListNode*)malloc(sizeof(ListNode));
//	greaterHead = greaterTail = (ListNode*)malloc(sizeof(ListNode));
//	lesserTail->next = NULL;
//	greaterTail->next = NULL;
//	while (cur != NULL)
//	{
//		if (cur->val < x)
//		{
//			lesserTail->next = cur;
//			lesserTail = cur;
//		}
//		else
//		{
//			greaterTail->next = cur;
//			greaterTail = cur;
//		}
//		cur = cur->next;
//	}
//	lesserTail->next = greaterHead->next;
//	greaterTail->next = NULL;
//	ListNode* list = lesserHead->next;
//	free(lesserHead);
//	free(greaterHead);
//	return list;
//}

////函数实现判断单链表（长度小于等于900）是否是回文结构（要求时间复杂度为O(n),额外空间复杂度为O(1)）：
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//bool chkPalindrome(ListNode* A)
//{
//	int a[900] = { 0 };
//	int n = 0;
//	while (A != NULL)
//	{
//		a[n++] = A->val;
//		A = A->next;
//	}
//	int begin = 0, end = n - 1;
//	while (begin < end)
//	{
//		if (a[begin] != a[end])
//		{
//			return false;
//		}
//		++begin;
//		--end;
//	}
//	return true;
//}

////函数实现判断单链表是否是回文结构（要求时间复杂度为O(n),额外空间复杂度为O(1)）：
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//bool chkPalindrome(ListNode* A)
//{
//	ListNode*  copyA = NULL;
//	ListNode* cur = A;
//	while (cur != NULL)
//	{
//		ListNode* copyCur = (ListNode*)malloc(sizeof(ListNode));
//		copyCur->val = cur->val;
//		copyCur->next = NULL;
//		copyCur->next = copyA;
//		copyA = copyCur;
//		cur = cur->next;
//	}
//	cur = A;
//	ListNode* copycur = copyA;
//	bool ret = true;
//	while (cur != NULL)
//	{
//		if (cur->val != copycur->val)
//		{
//			ret = false;
//			break;
//		}
//		cur = cur->next;
//		copycur = copycur->next;
//	}
//	copycur = copyA;
//	while (copycur != NULL)
//	{
//		ListNode* next = copycur->next;
//		free(copycur);
//		copycur = next;
//	}
//	return ret;
//}

////函数实现找到两个单链表的起始相交结点：
//#include<stdio.h>
//#include<math.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//ListNode* getIntersectionNode(ListNode* headA,ListNode* headB)
//{
//	if (headA == NULL || headB == NULL)
//	{
//		return NULL;
//	}
//	ListNode* curA = headA, *curB = headB;
//	int lenA=0, lenB=0;
//	while (curA->next)
//	{
//		lenA++;
//		curA = curA->next;
//	}
//	while (curB->next)
//	{
//		lenB++;
//		curB = curB->next;
//	}
//	if (curA != curB)
//	{
//		return NULL;
//	}
//	int gap = abs(lenA - lenB);
//	ListNode* longList = headA, *shortList = headB;
//	if (lenA < lenB)
//	{
//		longList = headB;
//		shortList = headA;
//	}
//	while (gap--)
//	{
//		longList = longList->next;
//	}
//	while (longList != shortList)
//	{
//		longList = longList->next;
//		shortList = shortList->next;
//	}
//	return longList;
//}

////函数实现判断单链表中是否有环：
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//bool hasCycle(ListNode* head)
//{
//	ListNode* slow = head, *fast = head;
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			return true;
//		}
//	}
//	return false;
//}