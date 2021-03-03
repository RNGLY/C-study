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

////单链表常见接口：
//void SListPrint(SListNode* head)
//{
//	SListNode* cur = head;
//	while (cur != NULL)
//	{
//		printf("%d->", cur->_Data);
//		cur = cur->_next;
//	}
//	printf("NULL\n");
//}
//SListNode* SListPushBack(SListNode* head, SLTDataType x)
//{
//	SListNode* tail = head;
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	newnode->_Data = x;
//	newnode->_next = NULL;
//	if (head == NULL)
//	{
//		head = newnode;
//		return head;
//	}
//	else
//	{
//		while (tail->_next != NULL)
//		{
//			tail = tail->_next;
//		}
//		tail->_next = newnode;
//		return head;
//	}
//}

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

//
