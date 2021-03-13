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

////带头循环双链表常见接口：
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
//	plist = NULL;//只改变形参，没有实际作用
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

////栈常见接口：
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
//	return ps->top == 0 ? 1 : 0;//为空返回1，不为空返回0
//}
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}

////队列常见接口：
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

////小堆的常见接口：
//void Swap(HpDataType* a, HpDataType* b)
//{
//	HpDataType tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void AdjustDown(HpDataType* arr,size_t n,int root)
//{
//	int parent = root;
//	int child = 2 * parent + 1;
//	while (child < n)
//	{
//		if ((child + 1) < n && arr[child + 1] < arr[child])
//		{
//			++child;
//		}
//		if (arr[parent] > arr[child])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void AdjistUp(HpDataType* arr,int child)
//{
//	int parent = (child - 1) / 2;
//	while (child > 0)
//	{
//		if (arr[child] < arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//Heap* HeapCreate(HpDataType* arr, size_t n)
//{
//	Heap* hp = (Heap*)malloc(sizeof(Heap));
//	hp->arr = (HpDataType*)malloc(sizeof(HpDataType)*n);
//	memcpy(hp->arr, arr, sizeof(HpDataType)*n);
//	hp->size = n;
//	hp->capacity = n;
//	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
//	{
//		AdjustDown(hp->arr, hp->size, i);
//	}
//	return hp;
//}
//void HeapDestroy(Heap* hp)
//{
//	free(hp->arr);
//	hp->size = hp->capacity = 0;
//	hp->arr = NULL;
//	free(hp);
//	hp = NULL;
//}
//void HeapPrint(Heap* hp)
//{
//	for (int i = 0; i < hp->size; ++i)
//	{
//		printf("%-2d ", hp->arr[i]);
//	}
//	printf("\n");
//}
//void HeapPush(Heap* hp, HpDataType x)
//{
//	if (hp->size == hp->capacity)
//	{
//		size_t newcapacity = hp->capacity * 2;
//		hp->arr = (HpDataType*)realloc(hp->arr,sizeof(HpDataType)*newcapacity);
//		hp->capacity = newcapacity;
//	}
//	hp->arr[hp->size] = x;
//	hp->size++;
//	AdjistUp(hp->arr,hp->size-1);
//}
//void HeapPop(Heap* hp)
//{
//	Swap(&hp->arr[0], &hp->arr[hp->size - 1]);
//	--hp->size;
//	AdjustDown(hp->arr, hp->size, 0);
//}
//HpDataType HeapTop(Heap* hp)
//{
//	return hp->arr[0];
//}
//int HeapEmpty(Heap* hp)
//{
//	return hp->size == 0 ? 1 : 0;
//}
//void HeapSort(Heap* hp, size_t n)
//{
//	size_t end = n - 1;
//	while (end > 0)
//	{
//		Swap(&hp->arr[0], &hp->arr[end]);
//		AdjustDown(hp->arr, end, 0);
//		--end;
//	}
//}
//void PrintTopK(HpDataType* arr, int n, int k)
//{
//	Heap* hp;
//	hp = HeapCreate(arr, k);
//	for (int i = k; i < n; ++i)
//	{
//		if (HeapTop(hp) < arr[i])
//		{
//			HeapPop(hp);
//			HeapPush(hp, arr[i]);
//		}
//	}
//	HeapPrint(hp);
//}

////二叉树常见接口：
//BinaryTree* BinaryTreeCreate(BTDataType* arr, BTDataType n, int* pi)
//{
//	if (arr[*pi] == n)
//	{
//		return NULL;
//	}
//	else
//	{
//		BinaryTree* root = (BinaryTree*)malloc(sizeof(BinaryTree));
//		root->data = arr[*pi];
//		++(*pi);
//		root->left = BinaryTreeCreate(arr, n, pi);
//		++(*pi);
//		root->right = BinaryTreeCreate(arr, n, pi);
//		return root;
//	}
//}
//void BinaryTreeDestory(BinaryTree* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	BinaryTreeDestory(root->left);
//	BinaryTreeDestory(root->right);
//	free(root);
//}
//int BinaryTreeSize(BinaryTree* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	return 1+BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
//}
//int BinaryTreeLeafSize(BinaryTree* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (root->left == NULL && root->right == NULL)
//	{
//		return 1;
//	}
//	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
//}
//int BinaryTreeLevelKSize(BinaryTree* root,int k)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (k == 1)
//	{
//		return 1;
//	}
//	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
//}
//BinaryTree* BinaryTreeFine(BinaryTree* root, BTDataType x)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->data == x)
//	{
//		return root;
//	}
//	BinaryTree* ret = BinaryTreeFine(root->left, x);
//	if (ret)
//	{
//		return ret;
//	}
//	ret = BinaryTreeFine(root->right, x);
//	if (ret)
//	{
//		return ret;
//	}
//	return NULL;
//}
//void BinaryTreePrevOrder(BinaryTree* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	printf("%c ", root->data);
//	BinaryTreePrevOrder(root->left);
//	BinaryTreePrevOrder(root->right);
//}
//void BinaryTreeInOrder(BinaryTree* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	BinaryTreeInOrder(root->left);
//	printf("%c ", root->data);
//	BinaryTreeInOrder(root->right);
//}
//void BinaryTreePostOrder(BinaryTree* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	BinaryTreePostOrder(root->left);
//	BinaryTreePostOrder(root->right);
//	printf("%c ", root->data);
//}
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
//void BinaryTreeLevelOrder(BinaryTree* root)
//{
//	Queue q;
//	QueueInit(&q);
//	if (root != NULL)
//	{
//		QueuePush(&q, root);
//	}
//	while (!QueueEmpty(&q))
//	{
//		BinaryTree* front = QueueFront(&q);
//		QueuePop(&q);
//		printf("%c ", front->data);
//		if (front->left)
//		{
//			QueuePush(&q, front->left);
//		}
//		if (front->right)
//		{
//			QueuePush(&q, front->right);
//		}
//	}
//	printf("\n");
//	QueueDestroy(&q);
//}
//int BinaryTreeComplete(BinaryTree* root)
//{
//	Queue q;
//	QueueInit(&q);
//	if (root != NULL)
//	{
//		QueuePush(&q, root);
//	}
//	while (!QueueEmpty(&q))
//	{
//		BinaryTree* front = QueueFront(&q);
//		QueuePop(&q);
//		if (front == NULL)
//		{
//			break;
//		}
//		QueuePush(&q, front->left);
//		QueuePush(&q, front->right);
//	}
//	while (!QueueEmpty(&q))
//	{
//		BinaryTree* front = QueueFront(&q);
//		QueuePop(&q);
//		if (front != NULL)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

////排序常见方法：
//void PrintArray(int* arr, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void InsertSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; ++i)
//	{
//		int end=i;
//		int tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > tmp)
//			{
//				arr[end + 1] = arr[end];
//				--end;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}
//void ShellSort(int* arr, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		for (int i = 0; i< n - gap; ++i)
//		{
//			int end = i;
//			int tmp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > tmp)
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = tmp;
//		}
//	}
//}
//void Swap(int* p1,int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void SelectSort(int* arr, int n)
//{
//	int begin = 0, end = n - 1;
//	while (begin < end)
//	{
//		int mini = begin, maxi = end;
//		for (int i = begin; i <= end; ++i)
//		{
//			if (arr[i] > arr[maxi])
//			{
//				maxi = i;
//			}
//			if (arr[i] < arr[mini])
//			{
//				mini = i;
//			}
//		}
//		Swap(&arr[begin], &arr[mini]);
//		if (begin == maxi)
//		{
//			maxi = mini;
//		}
//		Swap(&arr[end], &arr[maxi]);
//		++begin;
//		--end;
//	}
//}
//void AdjustDown(int* arr,int n,int root)
//{
//	int parent = root;
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && arr[child + 1] > arr[child])
//		{
//			++child;
//		}
//		if (arr[child] > arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(int* arr, int n)
//{
//	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
//	{
//		AdjustDown(arr, n, i);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		--end;
//	}
//}
//void BubbleSort(int* arr, int n)
//{
//	for (int end = n - 1; end > 0; --end)
//	{
//		int flag = 0;
//		for (int i = 0; i < end; ++i)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				Swap(&arr[i], &arr[i + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//int GetMiddleIndex(int* arr, int begin, int end)//三数取中法得到快排的key，可以防止出现最坏情况（key最大值或者最小值时，快排空间复杂度变成O(N*N)）
//{
//	int mid = (begin + end) >> 1;
//	if (arr[begin] < arr[mid])
//	{
//		if (arr[mid] < arr[end])
//		{
//			return mid;
//		}
//		else if (arr[begin] < arr[end])
//		{
//			return end;
//		}
//		else
//		{
//			return begin;
//		}
//	}
//	else
//	{
//		if (arr[mid] > arr[end])
//		{
//			return begin;
//		}
//		else if (arr[begin] < arr[end])
//		{
//			return begin;
//		}
//		else
//		{
//			return end;
//		}
//	}
//}
//int HoareSort(int* arr, int begin, int end)//快排左右指针法（hoare）
//{
//	int midIndex = GetMiddleIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//	int key = arr[end];
//	int keyindex = end;
//	while (begin < end)
//	{
//		while (begin < end && arr[begin] <= key)
//		{
//			++begin;
//		}
//		while (begin < end && arr[end] >= key)
//		{
//			--end;
//		}
//		Swap(&arr[begin], &arr[end]);
//	}
//	Swap(&arr[begin], &arr[keyindex]);
//	return begin;
//}
//int DigHoleSort(int* arr, int begin, int end)//快排挖坑法（更容易理解begin和end谁先走）
//{
//	int midIndex = GetMiddleIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//	int key = arr[end];
//	while (begin < end)
//	{
//		while (begin < end && arr[begin] <= key)
//		{
//			++begin;
//		}
//		arr[end] = arr[begin];
//		while (begin < end && arr[end] >= key)
//		{
//			--end;
//		}
//		arr[begin] = arr[end];
//	}
//	arr[begin] = key;
//	return begin;
//}
//int PrevCurSort(int* arr, int begin, int end)//快排前后指针法
//{
//	int midIndex = GetMiddleIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//	int key = arr[end];
//	int prev = begin - 1;
//	int cur = begin;
//	while (cur < end)
//	{
//		if (arr[cur] < key && ++prev != cur)
//		{
//			Swap(&arr[prev], &arr[cur]);
//		}
//		++cur;
//	}
//	++prev;
//	Swap(&arr[prev], &arr[end]);
//	return prev;
//}
//void QuickSort(int* arr, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	//int keyindex = HoareSort(arr, begin, end);
//	int keyindex = DigHoleSort(arr, begin, end);
//	//int keyindex = PrevCurSort(arr, begin, end);
//	QuickSort(arr, begin, keyindex - 1);
//	QuickSort(arr, keyindex + 1, end);
//}
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
//	return ps->top == 0 ? 1 : 0;//为空返回1，不为空返回0
//}
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}
//void QuickSortNoR(int* arr, int begin, int end)
//{
//	Stack st;
//	StackInit(&st);
//	StackPush(&st, begin);
//	StackPush(&st, end);
//	while (!StackEmpty(&st))
//	{
//		int right = StackTop(&st);
//		StackPop(&st);
//		int left = StackTop(&st);
//		StackPop(&st);
//		int keyindex = PrevCurSort(arr, left, right);
//		if (left < keyindex-1)
//		{
//			StackPush(&st, left);
//			StackPush(&st, keyindex-1);
//		}
//		if (keyindex+1 < right)
//		{
//			StackPush(&st, keyindex+1);
//			StackPush(&st, right);
//		}
//	}
//	StackDestroy(&st);
//}
//void _MergeSort(int* arr, int begin, int end, int* tmp)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int mid = (begin + end) >> 1;
//	_MergeSort(arr, begin, mid, tmp);
//	_MergeSort(arr, mid + 1, end, tmp);
//	int begin1 = begin, end1 = mid;
//	int begin2 = mid + 1, end2 = end;
//	int index = begin;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (arr[begin1] < arr[begin2])
//		{
//			tmp[index++] = arr[begin1++];
//		}
//		else
//		{
//			tmp[index++] = arr[begin2++];
//		}
//	}
//	if (begin1 <= end1)
//	{
//		while (begin1 <= end1)
//		{
//			tmp[index++] = arr[begin1++];
//		}
//	}
//	else
//	{
//		while (begin2 <= end2)
//		{
//			tmp[index++] = arr[begin2++];
//		}
//	}
//	memcpy(arr + begin, tmp + begin,sizeof(int)*(end-begin+1));
//}
//void MergeSort(int* arr, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int)*n);
//	_MergeSort(arr, 0, n - 1, tmp);
//	free(tmp);
//}
//void CountSort(int* arr, int n)
//{
//	int max = arr[0], min = arr[0];
//	for (int i = 0; i < n; ++i)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	int range = max - min + 1;
//	int* countArr = (int*)malloc(sizeof(int)*range);
//	memset(countArr, 0, sizeof(int)*range);
//	for (int i = 0; i < n; ++i)
//	{
//		countArr[arr[i] - min]++;
//	}
//	int j = 0;
//	for (int i = 0; i < range; ++i)
//	{
//		while (countArr[i]--)
//		{
//			arr[j++] = i + min;
//		}
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

////函数实现返回单链表中间结点，如果有两个结点返回第二个结点（要求只能遍历链表一次）：
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

////函数实现删除单链表中所有值为val的结点，然后返回链表（要求只能遍历链表一次）：
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

////函数实现判断单链表是否是回文结构（要求时间复杂度为O(n),额外空间复杂度为O(1)）：
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

////函数实现判断单链表中是否有环,有环则返回环的第一个结点，无环则返回空（公式证明：L=N*C-X）：
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

////函数实现增加了随机指针的链表的深度拷贝：
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

////函数实现对单链表进行插入排序：
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

////函数实现判断括号字符串是否是有效的：
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
//	return ps->top == 0 ? 1 : 0;//为空返回1，不为空返回0
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

////函数实现用队列实现栈：
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

////函数实现用栈实现队列：
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
//	return ps->top == 0 ? 1 : 0;//为空返回1，不为空返回0
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

////函数实现循环队列：
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

////函数实现判断二叉树是否是单值二叉树：
//#include<stdio.h>
//typedef struct TreeNode
//{
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}TreeNode;
//bool isUnivalTree(struct TreeNode* root)
//{
//	if (root == NULL)
//	{
//		return true;
//	}
//	if (root->left && root->left->val != root->val)
//	{
//		return true;
//	}
//	if (root->right && root->right->val != root->val)
//	{
//		return true;
//	}
//	return isUnivalTree(root->left) && isUnivalTree(root->right);
//}

////函数实现求二叉树的最大深度（高度）：
//#include<stdio.h>
//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//int maxDepth(BinaryTreeNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int leftDepth = maxDepth(root->left);
//	int rightDepth = maxDepth(root->right);
//	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
//}

////函数实现翻转二叉树：
//#include<stdio.h>
//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//BinaryTreeNode* invertTree(BinaryTreeNode* root)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	BinaryTreeNode* tmp = root->left;
//	root->right = root->left;
//	root->left = tmp;
//	invertTree(root->left);
//	invertTree(root->right);
//	return root;
//}

////函数实现检查两棵二叉树是否相同：
//#include<stdio.h>
//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//bool isSameTree(BinaryTreeNode* p, BinaryTreeNode* q)
//{
//	if (p == NULL && q == NULL)
//	{
//		return true;
//	}
//	if (p == NULL || q == NULL)
//	{
//		return false;
//	}
//	if (p->data != q->data)
//	{
//		return false;
//	}
//	return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
//}

////函数实现检查二叉树是否是镜像对称：
//#include<stdio.h>
//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//bool isSymmetricSameTree(BinaryTreeNode* p, BinaryTreeNode* q)
//{
//	if (p == NULL && q == NULL)
//	{
//		return true;
//	}
//	if (p == NULL || q == NULL)
//	{
//		return false;
//	}
//	if (p->data != q->data)
//	{
//		return false;
//	}
//	return isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
//}
//bool isSymmetric(BinaryTreeNode* root)
//{
//	if (root = NULL)
//	{
//		return  true;
//	}
//	return isSameTree(root->left, root->right);
//}

////函数实现二叉树的前序遍历：
//#include<stdio.h>
//#include<stdlib.h>
//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//int TreeSize(BinaryTreeNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	return 1 + TreeSize(root->left) + TreeSize(root->right);
//}
//void _preorderTraversal(BinaryTreeNode* root,int* ret,int* pi)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	ret[(*pi)++] = root->data;
//	_preorderTraversal(root->left,ret,pi);
//	_preorderTraversal(root->right, ret, pi);
//}
//int* preorderTraversal(BinaryTreeNode* root, int* returnSize)
//{
//	int size = TreeSize(root);
//	int* ret = (int*)malloc(sizeof(int)*size);
//	*returnSize = size;
//	int i = 0;
//	_preorderTraversal(root, ret, &i);
//	return ret;
//}

////函数实现判断是否是高度平衡二叉树（每个节点的左右子树高度差不超过1）：
//#include<stdio.h>
//#include<math.h>
//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//int Depth(BinaryTreeNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int leftDepth = Depth(root->left);
//	int rightDepth = Depth(root->right);
//	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
//}
//bool isBalanced(BinaryTreeNode* root)
//{
//	if (root == NULL)
//	{
//		return true;
//	}
//	int leftDepth = Depth(root->left);
//	int rightDepth = Depth(root->right);
//	return abs(leftDepth - rightDepth) < 2
//		&& isBalanced(root->left)
//		&& isBalanced(root->right);
//}

////函数实现判断一棵树是否是另一棵树的子树：
//#include<stdio.h>
//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//bool isSameTree(BinaryTreeNode* p, BinaryTreeNode* q)
//{
//	if (p == NULL && q == NULL)
//	{
//		return true;
//	}
//	if (p == NULL || q == NULL)
//	{
//		return false;
//	}
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}
//bool isSubTree(BinaryTreeNode* s, BinaryTreeNode* t)
//{
//	if (s == NULL && t == NULL)
//	{
//		return true;
//	}
//	if (s == NULL && t!= NULL)
//	{
//		return false;
//	}
//	return isSameTree(s, t) || isSubTree(s->left, t) || isSubTree(s->right, t);
//}

////函数实现二叉树的构建与（中序）遍历（输入一串长度不超过100的字符串，#表示存入二叉树为空）：
//#include<stdio.h>
//#include<stdlib.h>
//typedef char BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BinaryTreeNode;
//BinaryTreeNode* Rebuild(char* arr,int* pi)
//{
//	if (arr[*pi] == '#')
//	{
//		return NULL;
//	}
//	else
//	{
//		BinaryTreeNode* root = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
//		root->data = arr[*pi];
//		++(*pi);
//		root->left = Rebuild(arr, pi);
//		++(*pi);
//		root->right = Rebuild(arr, pi);
//		return root;
//	}
//}
//void Inorder(BinaryTreeNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	Inorder(root->left);
//	printf("%c ", root->data);
//	Inorder(root->right);
//}
//int main()
//{
//	char arr[100];
//	scanf("%s", arr);
//	int i = 0;
//	BinaryTreeNode* root = Rebuild(arr,&i);
//	Inorder(root);
//	printf("\n");
//	return 0;
//}

////函数实现（升序）直接插入排序数组（时间复杂度O(N*N)，太慢）：
//#include<stdio.h>
//void InsertSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; ++i)
//	{
//		int end = i;
//		int tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > tmp)
//			{
//				arr[end + 1] = arr[end];
//				--end;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	InsertSort(nums, numsSize);
//	*returnSize = numsSize;
//	return nums;
//}

////函数实现（升序）希尔排序数组（时间复杂度O(N^1.3)）：
//void ShellSort(int* arr, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		for (int i = 0; i< n - gap; ++i)
//		{
//			int end = i;
//			int tmp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > tmp)
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = tmp;
//		}
//	}
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	ShellSort(nums, numsSize);
//	*returnSize = numsSize;
//	return nums;
//}

////函数实现（升序）直接选择排序数组（时间复杂度O(N*N)，太慢，并且数组有序也是最坏情况）：
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void SelectSort(int* arr, int n)
//{
//	int begin = 0, end = n - 1;
//	while (begin < end)
//	{
//		int mini = begin, maxi = end;
//		for (int i = begin; i <= end; ++i)
//		{
//			if (arr[i] > arr[maxi])
//			{
//				maxi = i;
//			}
//			if (arr[i] < arr[mini])
//			{
//				mini = i;
//			}
//		}
//		Swap(&arr[begin], &arr[mini]);
//		if (begin == maxi)
//		{
//			maxi = mini;
//		}
//		Swap(&arr[end], &arr[maxi]);
//		++begin;
//		--end;
//	}
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	SelectSort(nums, numsSize);
//	*returnSize = numsSize;
//	return nums;
//}

////函数实现（升序）堆排序数组（时间复杂度O(N*logN)）：
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void AdjustDown(int* arr, int n, int root)
//{
//	int parent = root;
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && arr[child + 1] > arr[child])
//		{
//			++child;
//		}
//		if (arr[child] > arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(int* arr, int n)
//{
//	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
//	{
//		AdjustDown(arr, n, i);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		--end;
//	}
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	HeapSort(nums, numsSize);
//	*returnSize = numsSize;
//	return nums;
//}

////函数实现（升序）冒泡排序数组（时间复杂度O(N*N)，太慢）：
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void BubbleSort(int* arr, int n)
//{
//	for (int end = n - 1; end > 0; --end)
//	{
//		int flag = 0;
//		for (int i = 0; i < end; ++i)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				Swap(&arr[i], &arr[i + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	BubbleSort(nums, numsSize);
//	*returnSize = numsSize;
//	return nums;
//}

////函数实现（升序）快速排序数组（时间复杂度O(N*logN)）：
//int GetMiddleIndex(int* arr, int begin, int end)
//{
//	int mid = (begin + end) >> 1;
//	if (arr[begin] < arr[mid])
//	{
//		if (arr[mid] < arr[end])
//		{
//			return mid;
//		}
//		else if (arr[begin] < arr[end])
//		{
//			return end;
//		}
//		else
//		{
//			return begin;
//		}
//	}
//	else
//	{
//		if (arr[mid] > arr[end])
//		{
//			return begin;
//		}
//		else if (arr[begin] < arr[end])
//		{
//			return begin;
//		}
//		else
//		{
//			return end;
//		}
//	}
//}
//int HoareSort(int* arr, int begin, int end)
//{
//	int midIndex = GetMiddleIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//	int key = arr[end];
//	int keyindex = end;
//	while (begin < end)
//	{
//		while (begin < end && arr[begin] <= key)
//		{
//			++begin;
//		}
//		while (begin < end && arr[end] >= key)
//		{
//			--end;
//		}
//		Swap(&arr[begin], &arr[end]);
//	}
//	Swap(&arr[begin], &arr[keyindex]);
//	return begin;
//}
//int DigHoleSort(int* arr, int begin, int end)
//{
//	int midIndex = GetMiddleIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//	int key = arr[end];
//	while (begin < end)
//	{
//		while (begin < end && arr[begin] <= key)
//		{
//			++begin;
//		}
//		arr[end] = arr[begin];
//		while (begin < end && arr[end] >= key)
//		{
//			--end;
//		}
//		arr[begin] = arr[end];
//	}
//	arr[begin] = key;
//	return begin;
//}
//int PrevCurSort(int* arr, int begin, int end)
//{
//	int midIndex = GetMiddleIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//	int key = arr[end];
//	int prev = begin - 1;
//	int cur = begin;
//	while (cur < end)
//	{
//		if (arr[cur] < key && ++prev != cur)
//		{
//			Swap(&arr[prev], &arr[cur]);
//		}
//		++cur;
//	}
//	++prev;
//	Swap(&arr[prev], &arr[end]);
//	return prev;
//}
//void QuickSort(int* arr, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	//int keyindex = HoareSort(arr, begin, end);
//	int keyindex = DigHoleSort(arr, begin, end);
//	//int keyindex = PrevCurSort(arr, begin, end);
//	QuickSort(arr, begin, keyindex - 1);
//	QuickSort(arr, keyindex + 1, end);
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	QuickSort(nums, 0, numsSize - 1);
//	*returnSize = numsSize;
//	return nums;
//}

////函数实现（升序）归并排序数组（时间复杂度O(N*logN)）：
//void _MergeSort(int* arr, int begin, int end, int* tmp)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int mid = (begin + end) >> 1;
//	_MergeSort(arr, begin, mid, tmp);
//	_MergeSort(arr, mid + 1, end, tmp);
//	int begin1 = begin, end1 = mid;
//	int begin2 = mid + 1, end2 = end;
//	int index = begin;
//	while (begin1 <= end1 && begin2 < end2)
//	{
//		if (arr[begin1] < arr[begin2])
//		{
//			tmp[index++] = arr[begin1++];
//		}
//		else
//		{
//			tmp[index++] = arr[begin2++];
//		}
//	}
//	if (begin1 <= end1)
//	{
//		while (begin1 <= end1)
//		{
//			tmp[index++] = arr[begin1++];
//		}
//	}
//	else
//	{
//		while (begin2 <= end2)
//		{
//			tmp[index++] = arr[begin2++];
//		}
//	}
//	memcpy(arr + begin, tmp + begin, sizeof(int)*(end - begin + 1));
//}
//void MergeSort(int* arr, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int)*n);
//	_MergeSort(arr, 0, n - 1, tmp);
//	free(tmp);
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	MergeSort(nums, 0, numsSize - 1);
//	*returnSize = numsSize;
//	return nums;
//}

////函数实现（升序）计数排序数组（时间复杂度O(Max(range,N)),空间复杂度O(range)）：
//void CountSort(int* arr, int n)
//{
//	int max = arr[0], min = arr[0];
//	for (int i = 0; i < n; ++i)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	int range = max - min + 1;
//	int* countArr = (int*)malloc(sizeof(int)*range);
//	memset(countArr, 0, sizeof(int)*range);
//	for (int i = 0; i < n; ++i)
//	{
//		countArr[arr[i] - min]++;
//	}
//	int j = 0;
//	for (int i = 0; i < range; ++i)
//	{
//		while (countArr[i]--)
//		{
//			arr[j++] = i + min;
//		}
//	}
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//	CountSort(nums, 0, numsSize - 1);
//	*returnSize = numsSize;
//	return nums;
//}