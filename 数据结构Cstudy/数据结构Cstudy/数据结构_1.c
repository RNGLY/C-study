#define _CRT_SECURE_NO_WARNINGS 1

#include"数据结构.h"

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

void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->_a[i]);
	}
	printf("\n");
}
void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->_a=realloc(ps->_a,newcapacity*sizeof(SLDataType));
		ps->capacity = newcapacity;
	}
}
void SeqListPushback(SeqList* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->_a[ps->size++] = x;
//	ps->size++;
}
void SeqListPopback(SeqList* ps)
{
	assert(ps && ps->size>0);
//	ps->_a[ps->size - 1] = 0;
	ps->size--;
}
void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size-1;
	for (; end >= 0; --end)
	{
		ps->_a[end + 1] = ps->_a[end];
	}
	ps->_a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	assert(ps && ps->size > 0);
	size_t start = 0;
	for (start = 1; start < ps->size; ++start)
	{
		ps->_a[start-1] = ps->_a[start];
	}
	ps->size--;
}
int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; ++i)
	{
		if (ps->_a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
{
	assert(ps && pos < ps->size);
	SeqListCheckCapacity(ps);
	size_t end = ps->size+1;
	while (end > pos)
	{
		ps->_a[end] = ps->_a[end-1];
		--end;
	}
	ps->_a[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps && pos<ps->size);
	size_t i = pos + 1;
	while (i < ps->size)
	{
		ps->_a[i - 1] = ps->_a[i];
		++i;
	}
	ps->size--;
}
void SeqListRemove(SeqList* ps, SLDataType x)
{
	int pos = SeqListFind(ps, x);
	if (pos >= 0)
	{
		SeqListErase(ps, pos);
	}
}
void SeqListBubbleSort(SeqList* ps)
{
	for (size_t end = ps->size; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{
			if (ps->_a[i-1]>ps->_a[i])
			{
				SLDataType tmp = ps->_a[i - 1];
				ps->_a[i - 1] = ps->_a[i];
				ps->_a[i] = tmp;
				exchange = 1;
			}
		}
		if (exchange == 0)
		{
			break;
		}
	}
}
void SeqListBinaryFind(SeqList* ps, SLDataType x)
{
	size_t begin = 0, end = ps->size-1;
	while (begin <= end)
	{
		size_t mid = (begin + end) / 2;
		if (x > ps->_a[mid])
		{
			begin = mid + 1;
		}
		else if (x < ps->_a[mid])
		{
			end = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}