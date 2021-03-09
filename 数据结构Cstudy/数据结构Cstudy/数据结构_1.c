#define _CRT_SECURE_NO_WARNINGS 1

#include"���ݽṹ.h"

////˳������ӿڣ�
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

////����ͷ��ѭ�����������ӿڣ�
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
//static SListNode* BuySListNode(SLTDataType x)
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

////��ͷѭ��˫�������ӿڣ�
//ListNode* ListCreate()
//{
//	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
//	head->next = head;
//	head->prev = head;
//	return head;
//}
//static ListNode* BuyListNode(LTDataType x)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//	newNode->data = x;
//	newNode->next = NULL;
//	newNode->prev = NULL;
//	return newNode;
//}
//void ListDestory(ListNode* plist)
//{
//	ListNode* cur = plist->next;
//	while (cur != plist)
//	{
//		ListNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	free(plist);
//	plist = NULL;//ֻ�ı��βΣ�û��ʵ������
//}
//void ListPrint(ListNode* pList)
//{
//	ListNode* cur = pList->next;
//	while (cur != pList)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//void ListPushBack(ListNode* pList, LTDataType x)
//{
//	//ListNode* newNode = BuyListNode(x);
//	//ListNode* tail = pList->prev;
//	//tail->next = newNode;
//	//newNode->prev = tail;
//	//newNode->next = pList;
//	//pList->prev = newNode;
//	ListInsert(pList, x);
//}
//void ListPopBack(ListNode* pList)
//{
//	//ListNode* tail = pList->prev;
//	//ListNode* prev = tail->prev;
//	//free(tail);
//	//prev->next = pList;
//	//pList->prev = prev;
//	ListErase(pList->prev);
//}
//void ListPushFront(ListNode* pList, LTDataType x)
//{
//	//ListNode* newNode = BuyListNode(x);
//	//ListNode* first = pList->next;
//	//pList->next = newNode;
//	//newNode->prev = pList;
//	//newNode->next = first;
//	//first->prev = newNode;
//	ListInsert(pList->next, x);
//}
//void ListPopFront(ListNode* pList)
//{
//	//assert(pList->next != pList);
//	//ListNode* first = pList->next;
//	//ListNode* second = first->next;
//	//free(first);
//	//pList->next = second;
//	//second->prev = pList;
//	ListErase(pList->next);
//}
//ListNode* ListFind(ListNode* pList, LTDataType x)
//{
//	ListNode* cur = pList->next;
//	while (cur != pList)
//	{
//		if (cur->data == x)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}
//void ListInsert(ListNode* pos, LTDataType x)
//{
//	ListNode* prev = pos->prev;
//	ListNode* newNode = BuyListNode(x);
//	prev->next = newNode;
//	newNode->prev = prev;
//	newNode->next = pos;
//	pos->prev = newNode;
//}
//void ListErase(ListNode* pos)
//{
//	ListNode* prev = pos->prev;
//	ListNode* next = pos->next;
//	free(pos);
//	prev->next = next;
//	next->prev = prev;
//}

////ջ�����ӿڣ�
//void StackInit(Stack* ps)
//{
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//void StackPush(Stack* ps, STDataType data)
//{
//	if (ps->top == ps->capacity)
//	{
//		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		ps->a = (STDataType*)realloc(ps->a, newcapacity*sizeof(STDataType));
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = data;
//	ps->top++;
//}
//void StackPop(Stack* ps)
//{
//	assert(ps && ps->top > 0);
//	--ps->top;
//}
//STDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->a[ps->top - 1];
//}
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->top == 0 ? 1 : 0;//Ϊ�շ���1����Ϊ�շ���0
//}
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}

////���г����ӿڣ�
//void QueueInit(Queue* q)
//{
//	assert(q);
//	q->front = q->back = NULL;
//}
//void QueuePush(Queue* q, QDataType data)
//{
//	assert(q);
//	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
//	newNode->data = data;
//	newNode->next = NULL;
//	if (q->back == NULL)
//	{
//		q->front=q->back = newNode;
//	}
//	else
//	{
//		q->back->next = newNode;
//		q->back = newNode;
//	}
//}
//void QueuePop(Queue* q)
//{
//	assert(q);
//	if (q->front->next == NULL)
//	{
//		free(q->front);
//		q->front = q->back = NULL;
//	}
//	else
//	{
//		QueueNode* next = q->front->next;
//		free(q->front);
//		q->front = next;
//	}
//}
//QDataType QueueFront(Queue* q)
//{
//	assert(q);
//	return q->front->data;
//}
//QDataType QueueBack(Queue* q)
//{
//	assert(q);
//	return q->back->data;
//}
//int QueueSize(Queue* q)
//{
//	int n = 0;
//	QueueNode* cur = q->front;
//	while (cur != NULL)
//	{
//		n++;
//		cur = cur->next;
//	}
//	return n;
//}
//int QueueEmpty(Queue* q)
//{
//	return q->front == NULL ? 1 : 0;
//}
//void QueueDestroy(Queue* q)
//{
//	QueueNode* cur = q->front;
//	while (cur)
//	{
//		QueueNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	q->front = q->back = NULL;
//}

//С�ѵĳ����ӿڣ�
void AdjustDown(HpDataType* arr,size_t n,int root)
{
	int parent = root;
	int child = 2 * parent + 1;
	while (child < n)
	{
		if ((child + 1) < n && arr[child + 1] < arr[child])
		{
			++child;
		}
		if (arr[parent] > arr[child])
		{
			HpDataType tmp = arr[parent];
			arr[parent] = arr[child];
			arr[child] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
Heap* HeapCreate(HpDataType* arr, size_t n)
{
	Heap* hp = (Heap*)malloc(sizeof(Heap));
	hp->arr = (HpDataType*)malloc(sizeof(HpDataType)*n);
	memcpy(hp->arr, arr, sizeof(HpDataType)*n);
	hp->size = n;
	hp->capacity = n;
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(hp->arr, hp->size, i);
	}
	return hp;
}
void HeapPush(Heap* hp, HpDataType x);
void HeapPop(Heap* hp);
HpDataType HeapTop(Heap* hp);

////����ʵ��ԭ���Ƴ�������ֵΪval������Ҫ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)����
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

////����ʵ��ԭ��ɾ�����������е��ظ��飨Ҫ��ռ临�Ӷ�ΪO(1)����
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

////����ʵ�ֺϲ�������������Ϊһ���������飺
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

////����ʵ����ת���飺
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

////����ʵ�������������
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

////����ʵ���ҳ�����0��n��ȱ�ٵ�������
//#include<stdio.h>
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

////����ʵ�ַ��ص������м��㣬�����������㷵�صڶ�����㣨Ҫ��ֻ�ܱ�������һ�Σ���
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

////����ʵ��ɾ��������������ֵΪval�Ľ�㣬Ȼ�󷵻�����Ҫ��ֻ�ܱ�������һ�Σ���
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

////����ʵ�ַ�ת������ָ��ת���򣩣�
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

////����ʵ�ַ�ת������ȡ���ͷ�嵽��������
//#include<stdio.h>
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

////����ʵ�����һ��������ĵ�����k����㣺
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

////����ʵ�ֺϲ�������������
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

////����ʵ���Ը�����ֵx��������ָ�Ϊ�����֣�
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

////����ʵ���жϵ���������С�ڵ���900���Ƿ��ǻ��Ľṹ��Ҫ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)����
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//int chkPalindrome(ListNode* A)
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
//			return 0;
//		}
//		++begin;
//		--end;
//	}
//	return 1;
//}

////����ʵ���жϵ������Ƿ��ǻ��Ľṹ��Ҫ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)����
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//int chkPalindrome(ListNode* A)
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
//	bool ret = 1;
//	while (cur != NULL)
//	{
//		if (cur->val != copycur->val)
//		{
//			ret = 0;
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

////����ʵ���ҵ��������������ʼ�ཻ��㣺
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

////����ʵ���жϵ��������Ƿ��л���
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//int hasCycle(ListNode* head)
//{
//	ListNode* slow = head, *fast = head;
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

////����ʵ���жϵ��������Ƿ��л�,�л��򷵻ػ��ĵ�һ����㣬�޻��򷵻ؿգ���ʽ֤����L=N*C-X����
//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//ListNode* detectCycle(ListNode* head)
//{
//	ListNode* slow = head, *fast = head;
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			ListNode* meet = slow;
//			while (1)
//			{
//				if (meet = head)
//				{
//					return meet;
//				}
//				meet = meet->next;
//				head = head->next;
//			}
//		}
//	}
//}

////����ʵ�����������ָ����������ȿ�����
//#include<stdio.h>
//#include<stdlib.h>
//class Node
//{
//public:
//	int val;
//	Node* next;
//	Node* random;
//
//	Node(int _val)
//	{
//		val = _val;
//		next = NULL;
//		random = NULL;
//	}
//};
//class Solution
//{
//public:
//	Node* copyRandmoList(Node* head)
//	{
//		Node* cur = head;
//		while (cur)
//		{
//			Node* next = cur->next;
//			Node* copyNode = (Node*)malloc(sizeof(Node));
//			copyNode->val = cur->val;
//			copyNode->next = NULL;
//			copyNode->random = NULL;
//			cur->next = copyNode;
//			copyNode->next = next;
//			cur = next;
//		}
//		cur = head;
//		while (cur)
//		{
//			Node* copyNode = cur->next;
//			if (cur->random)
//			{
//				copyNode->random = cur->random->next;
//			}
//			else
//			{
//				copyNode->random = NULL;
//			}
//			cur = copyNode->next;//cur=cur->next->next;
//		}
//		Node* copyHead=NULL, *copyTail=NULL;
//		cur = head;
//		while (cur)
//		{
//			Node* copyNode = cur->next;
//			Node* next = copyNode->next;
//			if (copyTail == NULL)
//			{
//				copyHead = copyTail = copyNode;
//			}
//			else
//			{
//				copyTail->next = copyNode;
//				copyTail = copyNode;
//			}
//			cur->next = next;
//			cur = next;
//		}
//		return copyHead;
//	}
//};

////����ʵ�ֶԵ�������в�������
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}ListNode;
//struct ListNode* insertionSortList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	ListNode* sortHead = (ListNode*)malloc(sizeof(ListNode));
//	sortHead->next = head;
//	sortHead->next->next = NULL;
//	head = head->next;
//	while (head)
//	{
//		ListNode* headNext = head->next;
//		ListNode* prev = sortHead;
//		ListNode* cur = sortHead->next;
//		while (cur)
//		{
//			if (cur->val > head->val)
//			{
//				prev->next = head;
//				head->next = cur;
//				break;
//			}
//			else
//			{
//				prev = cur;
//				cur = cur->next;
//			}
//			if (cur == NULL)
//			{
//				prev->next = head;
//				head->next = NULL;
//			}
//		}
//		head = headNext;
//	}
//	return sortHead->next;
//}

////����ʵ���ж������ַ����Ƿ�����Ч�ģ�
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef char STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}Stack;
//
//void StackInit(Stack* ps)
//{
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//void StackPush(Stack* ps, STDataType data)
//{
//	if (ps->top == ps->capacity)
//	{
//		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		ps->a = (STDataType*)realloc(ps->a, newcapacity*sizeof(STDataType));
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = data;
//	ps->top++;
//}
//void StackPop(Stack* ps)
//{
//	assert(ps && ps->top > 0);
//	--ps->top;
//}
//STDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->a[ps->top - 1];
//}
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->top == 0 ? 1 : 0;//Ϊ�շ���1����Ϊ�շ���0
//}
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}
//int isValid(char* s)
//{
//	Stack st;
//	StackInit(&st);
//	char* symbols[3] = { "{}", "[]", "()" };
//	while (*s)
//	{
//		if (*s == '{' || *s == '[' || *s == '(')
//		{
//			StackPush(&st, *s);
//		}
//		else
//		{
//			if (StackEmpty(&st))
//			{
//				return 0;
//			}
//			char top = StackTop(&st);
//			StackPop(&st);
//			for (int i = 0; i < 3; i++)
//			{
//				if (*s == symbols[i][1] && top!=symbols[i][0])
//				{
//					return 0;
//				}
//			}
//		}
//		//else if (*s == '}')
//		//{
//		//	if (StackEmpty(&st))
//		//	{
//		//		return 0;
//		//	}
//		//	char top = StackTop(&st);
//		//	StackPop(&st);
//		//	if (top != '{')
//		//	{
//		//		return 0;
//		//	}
//		//}
//		//else if (*s == ']')
//		//{
//		//	if (StackEmpty(&st))
//		//	{
//		//		return 0;
//		//	}
//		//	char top = StackTop(&st);
//		//	StackPop(&st);
//		//	if (top != '[')
//		//	{
//		//		return 0;
//		//	}
//		//}
//		//else if (*s == '(')
//		//{
//		//	if (StackEmpty(&st))
//		//	{
//		//		return 0;
//		//	}
//		//	char top = StackTop(&st);
//		//	StackPop(&st);
//		//	if (top != ')')
//		//	{
//		//		return 0;
//		//	}
//		//}
//		++s;
//	}
//	int ret = StackEmpty(&st);
//	StackDestroy(&st);
//	return ret;
//}

////����ʵ���ö���ʵ��ջ��
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
//void QueueInit(Queue* q)
//{
//	assert(q);
//	q->front = q->back = NULL;
//}
//void QueuePush(Queue* q, QDataType data)
//{
//	assert(q);
//	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
//	newNode->data = data;
//	newNode->next = NULL;
//	if (q->back == NULL)
//	{
//		q->front=q->back = newNode;
//	}
//	else
//	{
//		q->back->next = newNode;
//		q->back = newNode;
//	}
//}
//void QueuePop(Queue* q)
//{
//	assert(q);
//	if (q->front->next == NULL)
//	{
//		free(q->front);
//		q->front = q->back = NULL;
//	}
//	else
//	{
//		QueueNode* next = q->front->next;
//		free(q->front);
//		q->front = next;
//	}
//}
//QDataType QueueFront(Queue* q)
//{
//	assert(q);
//	return q->front->data;
//}
//QDataType QueueBack(Queue* q)
//{
//	assert(q);
//	return q->back->data;
//}
//int QueueSize(Queue* q)
//{
//	int n = 0;
//	QueueNode* cur = q->front;
//	while (cur != NULL)
//	{
//		n++;
//		cur = cur->next;
//	}
//	return n;
//}
//int QueueEmpty(Queue* q)
//{
//	return q->front == NULL ? 1 : 0;
//}
//void QueueDestroy(Queue* q)
//{
//	QueueNode* cur = q->front;
//	while (cur)
//	{
//		QueueNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	q->front = q->back = NULL;
//}
//typedef struct
//{
//	Queue q1;
//	Queue q2;
//}MyStack;
//MyStack* myStackCreate()
//{
//	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&st->q1);
//	QueueInit(&st->q2);
//	return st;
//}
//void myStackPush(MyStack* obj, int x)
//{
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1,x);
//	}
//	else
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//int myStackPop(MyStack* obj)
//{
//	Queue* pemptyQ = &obj->q1;
//	Queue* pnoemptyQ = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		pemptyQ = &obj->q2;
//		pnoemptyQ = &obj->q1;
//	}
//	while (QueueSize(pemptyQ) > 1)
//	{
//		QueuePush(pemptyQ, QueueFront(pnoemptyQ));
//		QueuePop(pnoemptyQ);
//	}
//	int top = QueueBack(pnoemptyQ);
//	QueuePop(pnoemptyQ);
//	return top;
//}
//int myStackTop(MyStack* obj)
//{
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&obj->q1);
//	}
//	else
//	{
//		return QueueBack(&obj->q2);
//	}
//}
//bool myStackEmpty(MyStack* obj)
//{
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//void myStackFree(MyStack* obj)
//{
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//	free(obj);
//}

////����ʵ����ջʵ�ֶ��У�
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
//void StackInit(Stack* ps)
//{
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//void StackPush(Stack* ps, STDataType data)
//{
//	if (ps->top == ps->capacity)
//	{
//		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		ps->a = (STDataType*)realloc(ps->a, newcapacity*sizeof(STDataType));
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = data;
//	ps->top++;
//}
//void StackPop(Stack* ps)
//{
//	assert(ps && ps->top > 0);
//	--ps->top;
//}
//STDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->a[ps->top - 1];
//}
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->top == 0 ? 1 : 0;//Ϊ�շ���1����Ϊ�շ���0
//}
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}
//typedef struct
//{
//	Stack pushst;
//	Stack popst;
//}MyQueue;
//MyQueue* myQueueCreate()
//{
//	MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&q->pushst);
//	StackInit(&q->popst);
//	return q;
//}
//void myQueuePush(MyQueue* obj, int x)
//{
//	StackPush(&obj->pushst,x);
//}
//int myQueuePop(MyQueue* obj)
//{
//	if (StackEmpty(&obj->popst))
//	{
//		while (StackEmpty(&obj->pushst))
//		{
//			StackPush(&obj->popst, StackTop(&obj->pushst));
//			StackPop(&obj->pushst);
//		}
//	}
//	int front = StackTop(&obj->popst);
//	StackPop(&obj->popst);
//	return front;
//}
//int myQueuePeek(MyQueue* obj)
//{
//	if (StackEmpty(&obj->popst))
//	{
//		while (StackEmpty(&obj->pushst))
//		{
//			StackPush(&obj->popst, StackTop(&obj->pushst));
//			StackPop(&obj->pushst);
//		}
//	}
//	return StackTop(&obj->popst);
//}
//bool myQueueEmpty(MyQueue* obj)
//{
//	return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
//}
//void myQueueFree(MyQueue* obj)
//{
//	StackDestroy(&obj->pushst);
//	StackDestroy(&obj->popst);
//	free(obj);
//}

////����ʵ��ѭ�����У�
//#include<stdlib.h>
//typedef struct
//{
//	int* arr;
//	int size;
//	int front;
//	int back;
//}MyCircularQueue;
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj);
//bool myCircularQueueIsFull(MyCircularQueue* obj);
//
//MyCircularQueue* myCircularQueueCreate(int k)
//{
//	MyCircularQueue* cq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	cq->arr = (int*)malloc(sizeof(int)*(k+1));
//	cq->size = k+1;
//	cq->front = cq->back = 0;
//	return cq;
//}
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
//{
//	if (myCircularQueueIsFull(obj))
//	{
//		return false;
//	}
//	obj->arr[obj->back] = value;
//	obj->back++;
//	//obj->back %= obj->size;
//	if (obj->back == obj->size)
//	{
//		obj->back = 0;
//	}
//	return true;
//}
//bool myCircularQueueDeQueue(MyCircularQueue* obj)
//{
//	if (myCircularQueueIsEmpty(obj))
//	{
//		return false;
//	}
//	obj->front++;
//	//obj->front %= obj->size;
//	if (obj->front == obj->size)
//	{
//		obj->front = 0;
//	}
//	return true;
//}
//int myCircularQueueFront(MyCircularQueue* obj)
//{
//	if (myCircularQueueIsEmpty(obj))
//	{
//		return -1;
//	}
//	return obj->arr[obj->front];
//}
//int myCircularQueueBack(MyCircularQueue* obj)
//{
//	if (myCircularQueueIsEmpty(obj))
//	{
//		return -1;
//	}
//	int prevBcak = obj->back - 1;
//	if (obj->back == 0)
//	{
//		prevBcak = obj->size - 1;
//	}
//	return obj->arr[prevBcak];
//}
//bool myCircularQueueIsEmpty(MyCircularQueue* obj)
//{
//	return obj->front == obj->back;
//}
//bool myCircularQueueIsFull(MyCircularQueue* obj)
//{
//	int backNext = obj->back + 1;
//	backNext %= obj->size;
//	return backNext == obj->front;
//}
//void myCircularQueueFree(MyCircularQueue* obj)
//{
//	free(obj->arr);
//	free(obj);
//}