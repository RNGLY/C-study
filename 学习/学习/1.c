#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////打印用户输入为上半部分（避免用户输入偶数）行数的菱形：
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("请输入菱形上半部分行数n=");
//	scanf("%d",&line);
//	for (i = 0; i < line; i++)//打印上半部分
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i;j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i + 1; j++)//打印星号
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1;i++)//打印下半部分
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//打印星号
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////输出0到100000的自幂数(优化版)：
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000;i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)//计算i的位数n（不能直接用i，否则会导致死循环）
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)//计算i的每一位的n次方之和（sum）
//		{
//			sum += (int)pow(tmp % 10, n);//pow求平方的库函数（头文件math.h）(返回类型double类型)
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

////函数实现输出0到100000的水仙花数
//int Sxh(int x,int n)
//{
//	int i=0;
//	int sum=0;
//	for(i=0;i<n;i++)
//	{
//		int j=0;
//		int c=1;
//		for(j=0;j<n;j++)
//		{
//			c*=(x%10);
//		}
//		x=x/10;
//		sum+=c;
//	}
//	return sum;
//}
//int Count(int n)
//{
//	if(n>10)
//	{
//		return 1+Count(n/10);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int x=153;
//	for(x=0;x<100000;x++)
//	{
//		int n=0;
//		int sum=0;
//	    //scanf("%d",&x);//用于测试count函数
//	    n=Count(x);//计算几位数
//	    //printf("%d\n",n);//用于测试count函数
//	    sum=Sxh(x,n);//计算每位数的n次方和
//		if(x==sum)
//		{
//			printf("%d ",x);
//		}
//	}
//	return 0;
//}

////函数实现m+mm+mmm+...（有n项）：
//int Sum(int m,int n)
//{
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret*10 + m;
//		sum += ret;
//	}
//	return sum;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入数m：");
//	scanf("%d",&m);
//	printf("请输入项数n：");
//	scanf("%d",&n);
//	printf("%d\n",Sum(m,n));
//	return 0;
//}

////函数实现字符数组逆序：
//#include<assert.h>
//#include<string.h>
//void Reverse(char* arr)
//{
//	assert(arr);
//	int lenth = strlen(arr);
//	char* left = arr;
//	char* right = arr + lenth - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[500] = {0};
//	printf("请输入一组字符串：");
//	//scanf("%s",arr);//读取到‘\0’或者空格或者0停止
//	gets(arr);//读取一行
//	Reverse(arr);
//	printf("逆序后为：%s\n",arr);
//	return 0;
//}

////函数实现能冒泡排序任何类型的数组：
//#include<string.h>
//int cmp_int(const void* e1, const void* e2)//使用者自己根据数组比较条件设计的比较函数
//{
//	return  *(int*)e1 - *(int*)e2;
//}
//int cmp_char(const void* e1,const void* e2)
//{
//	return strcmp((char*) e1,(char*) e2);
//}
//void Jh(char* jh1, char* jh2, int width)
//{
//	int i = 0;
//	for (i = 0; i<width; i++)//width标识一个字节一个字节进行交换，直到跟数组的一个元素字节相同
//	{
//		char tmp = *jh1;
//		*jh1 = *jh2;
//		*jh2 = tmp;
//		jh1++;
//		jh2++;
//	}
//}
//void Mppx(void* base, int num, int width, int(*cmp)(const void* e1, const void* e2))//冒泡排序函数
//{
//	int i = 0;
//	for (i = 0; i<num; i++)//趟数
//	{
//		int j = 0;
//		for (j = 0; j<num - 1 - i; j++)//一趟交换对数
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				Jh((char*)base + j*width, (char*)base + (j + 1)*width, width);//交换函数
//			}
//		}
//	}
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Mppx(arr, sz, sizeof(arr[0]), cmp_int);
//	for(i=0;i<sz;i++)
//	{
//	printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void test2()
//{
//	char arr[] = {'c','f','d','a','e','b'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Mppx(arr, sz, sizeof(arr[0]), cmp_char);
//	for (i = 0; i<sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

////使用qsort对任何数组进行排序：
//#include<stdlib.h>
//#include<string.h>
//typedef struct Student
//{
//	char name[20];
//	int age;
//	double high;
//}Stu;
//int cmp_name(const void* e1,const void* e2)
//{
//	return strcmp(((Stu*)e1)->name,((Stu*)e2)->name);
//}
//void test1()
//{
//	Stu s[3]={{"c",13,1.5},{"b",30,1.75},{"a",20,1.80}};
//	int sz=sizeof(s)/sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_name);
//	printf("名字：\n");
//	printf("%s %d %lf\n",s[0].name,s[0].age,s[0].high);
//	printf("%s %d %lf\n",s[1].name,s[1].age,s[1].high);
//	printf("%s %d %lf\n",s[2].name,s[2].age,s[2].high);
//}
//int cmp_age(const void* e1,const void* e2)
//{
//	return ((Stu*)e1)->age-((Stu*)e2)->age;
//}
//void test2()
//{
//	Stu s[3]={{"c",13,1.5},{"b",30,1.75},{"a",20,1.80}};
//	int sz=sizeof(s)/sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_age);
//	printf("年龄：\n");
//	printf("%s %d %lf\n",s[0].name,s[0].age,s[0].high);
//	printf("%s %d %lf\n",s[1].name,s[1].age,s[1].high);
//	printf("%s %d %lf\n",s[2].name,s[2].age,s[2].high);
//}
//int cmp_high(const void* e1,const void* e2)
//{
//	return (int)(((Stu*)e1)->high-((Stu*)e2)->high);//强制类型转换（也可以用if else语句判断返回1，0，-1）
//}
//void test3()
//{
//	Stu s[3]={{"c",13,1.5},{"b",30,1.75},{"a",20,1.80}};
//	int sz=sizeof(s)/sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_high);
//	printf("身高：\n");
//	printf("%s %d %lf\n",s[0].name,s[0].age,s[0].high);
//	printf("%s %d %lf\n",s[1].name,s[1].age,s[1].high);
//	printf("%s %d %lf\n",s[2].name,s[2].age,s[2].high);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}

////函数实现计算器（转移表版）：
//void menu()
//{
//	printf("*************************************\n");
//	printf("*****     1.加         2.减     *****\n");
//	printf("*****     3.乘         4.除     *****\n");
//	printf("*********     0.退出程序     ********\n");
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//int main()
//{
//	int input=0;
//	int x=0;
//	int y=0;
//	int(*ZH[])(int,int)={0,Add,Sub,Mul,Div};//函数指针数组，实现转移表
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		if(input>=1&&input<=4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d",&x,&y);
//			printf("%d\n",ZH[input](x,y));
//		}
//		else if(input==0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("选择错误，请重新选择！\n");
//		}
//	}while(input);
//	return 0;
//}

////函数实现计算器（回调函数版）：
//void menu()
//{
//	printf("*************************************\n");
//	printf("*****     1.加         2.减     *****\n");
//	printf("*****     3.乘         4.除     *****\n");
//	printf("*********     0.退出程序     ********\n");
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//void HD(int (*c)(int,int))//回调函数-解决代码冗余的问题；形参为函数指针，用地址找到函数进行调用
//{
//	int x=0;
//	int y=0;
//	printf("请输入两个操作数：");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",c(x,y));
//}
//int main()
//{
//	int input=0;
//	int m=0;
//	int n=0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 0:
//			printf("退出程序\n");
//			break;
//		case 1:
//			HD(Add);
//			break;
//		case 2:
//			HD(Sub);
//			break;
//		case 3:
//			HD(Mul);
//			break;
//		case 4:
//			HD(Div);
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//		}
//	}while(input);
//	return 0;
//}

////递归函数实现n的k次方：
//double Nkf(int n,int k)
//{
//	if(k==0)
//	{
//		return 1;
//	}
//	else if(k<0)
//	{
//		return 1.0/(Nkf(n,-k));
//	}
//	else
//	{
//		return n*Nkf(n,k-1);
//	}
//}
//int main()
//{
//	int n=2;
//	int k=-1;
//	double nk=0;
//	printf("请输入数n=");
//	scanf("%d",&n);
//	printf("请输入次方k=");
//	scanf("%d",&k);
//	nk=Nkf(n,k);
//	printf("%d的%d次方=%lf\n",n,k,nk);
//	return 0;
//}

////递归函数实现一个正数每位数字之和：
//int Digitsum(unsigned int n)
//{
//	if(n>9)
//	{
//		return Digitsum(n/10)+n%10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n=0;
//	int sum=0;
//	printf("请输入正数n=");
//	scanf("%d",&n);
//	sum=Digitsum(n);
//	printf("%d的每位数字之和=%d\n",n,sum);
//	return 0;
//}

////使用指针打印数组：
//void Print(int* p,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}

////不创建临时变量交换两个数的值：
//int main()
//{
//	int m=0;
//	int n=0;
//	printf("请输入数m=");
//	scanf("%d",&m);
//	printf("请输入数n=");
//	scanf("%d",&n);
//	m=m^n;
//	n=m^n;
//	m=m^n;
//	printf("m=%d,n=%d\n",m,n);
//}

////函数实现分别打印一个数二进制的奇数位和偶数位：
//void Print(int n)
//{
//	int i=0;
//	printf("奇数位：");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n=0;
//	printf("请输入数n=");
//	scanf("%d",&n);
//	Print(n);
//	return 0;
//}

////函数实现统计两个整数二进制中不同位的个数：
//int Count_1(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//int Count_b(int m,int n)
//{
//	int x=m^n;
//	return Count_1(x);
//}
//int main()
//{
//	int m=0;
//	int n=0;
//	int count=0;
//	printf("请输入数m=");
//	scanf("%d",&m);
//	printf("请输入数n=");
//	scanf("%d",&n);
//	count=Count_b(m,n);
//	printf("%d和%d的二进制中不同位的个数是%d个\n",m,n,count);
//	return 0;
//}

////函数实现统计整数二进制中1的个数（终极版）：
//int Count_1(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n=0;
//	int count=0;
//	printf("请输入一个数n=");
//	scanf("%d",&n);
//	count=Count_1(n);
//	printf("%d的二进制中1的个数是%d个\n",n,count);
//	return 0;
//}

////函数实现统计整数二进制中1的个数（优化版）：
//int Count_1(int n)
//{
//	int i=0;
//	int count=0;
//	for(i=0;i<32;i++)
//	{
//		if(1==((n>>i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n=0;
//	int count=0;
//	printf("请输入一个数n=");
//	scanf("%d",&n);
//	count=Count_1(n);
//	printf("%d的二进制中1的个数是%d个\n",n,count);
//	return 0;
//}

////函数实现统计整数二进制中1的个数：
//int Count_1(unsigned int n)
//{
//	int count=0;
//	while(n)
//	{
//		if(1==n%2)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//	return count;
//}
//int main()
//{
//	int n=0;
//	int count=0;
//	printf("请输入一个数n=");
//	scanf("%d",&n);
//	count=Count_1(n);
//	printf("%d的二进制中1的个数是%d个\n",n,count);
//	return 0;
//}

////函数实现交换两个一样大小的整型数组：
//void Jh(int arr1[],int arr2[],int sz)//按下标交换数组元素函数
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		int tmp=0;
//		tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//}
//void Print(int arr[],int sz)//数组打印函数
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[5]={1,2,3,4,5};
//	int arr2[5]={6,7,8,9,10};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	Jh(arr1,arr2,sz);//按下标交换数组元素
//	Print(arr1,sz);//数组打印
//	Print(arr2,sz);//数组打印
//	return 0;
//}

////递归函数实现数组逆序：
//int my_strlen(char* arr)
//{
//	int count=0;
//	while((*arr)!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse(char* arr)
//{
//	int lenth=my_strlen(arr);
//	char tmp=arr[0];
//	arr[0]=arr[lenth-1];
//	arr[lenth-1]='\0';
//	if(my_strlen(arr+1)>=2)
//	{
//		reverse(arr+1);
//	}
//	arr[lenth-1]=tmp;
//}
//int main()
//{
//	char arr[]="!!!em si doG";
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}

////函数实现数组全部初始化为0，全部打印，全部逆置：
//void reverse(int arr[],int sz)//数组逆置函数
//{
//	int left=0;
//	int right=sz-1;
//	while(left<right)
//	{
//		int tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//void Print(int arr[],int sz)//数组打印函数
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Init(int arr[],int sz)//数组初始化为0函数
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz);//数组初始化为0
//	Print(arr,sz);//数组打印
//	reverse(arr,sz);//将数组逆置
//	Print(arr,sz);//数组打印
//	return 0;
//}

////一个数组中只有一个只出现一次的数，找出来（异或求解）：
//int main()
//{
//	int arr[]={1,2,3,4,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	int i=0;
//	int j=1;//接收单身狗
//	for(i=0;i<sz-1;i++)
//	{
//		j^=arr[i];
//	}
//	printf("单生狗：%d\n",j);
//	return 0;
//}

////一个数组中只有一个只出现一次的数，找出来(暴力求解)：
//int main()
//{
//	int arr[]={1,2,3,4,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组元素个数
//	int i=0;
//	for(i=0;i<sz;i++)//取一个元素
//	{
//		int j=0;
//		int count=0;//计数器
//		for(j=0;j<sz;j++)//与每个元素进行比较
//		{
//			if(arr[i]==arr[j])
//			{
//				count++;
//			}
//		}
//		if(1==count)
//		{
//			printf("单生狗：%d\n",arr[i]);
//			break;
//		}
//	}
//}

////冒泡排序函数实现：
//void Mppx(int x[],int y)
//{
//	int i=0;//冒泡排序趟数
//	for(i=0;i<y-1;i++)
//	{
//		int flag=1;//假设数组已经有序
//		int j=0;//每一趟比较对数
//		for(j=0;j<y-1-i;j++)
//		{
//			if(x[j]>x[j+1])
//			{
//				int tmp=x[j];
//				x[j]=x[j+1];
//				x[j+1]=tmp;
//				flag=0;//该数组并不完全有序
//			}
//		}
//		if(1==flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[]={10,9,8,7,6,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int n=0;
//	Mppx(arr,sz);//冒泡排序函数，本质上接收arr首元素地址(&arr[0])
//	for(n=0;n<sz;n++)
//	{
//		printf("%d ",arr[n]);
//	}
//	return 0;
//}

////青蛙跳台阶问题函数实现：
//int Qwttj(int x)
//{
//	int a=1;
//	int b=2;
//	int c=0;
//	switch(x)
//	{
//	case 1:
//		return a;
//		break;
//	case 2:
//		return b;
//		break;
//	default:
//		do
//		{
//			c=a+b;
//			a=b;
//			b=c;
//			x--;
//		}while(x-2);//循环
//		return c;
//		break;
//	}
//}
//int main()
//{
//	int n=0;
//	int j=0;
//	printf("请输入台阶数n=");
//	scanf("%d",&n);
//	j=Qwttj(n);
//	printf("%d层台阶有%d种跳法\n",n,j);
//	return 0;
//}

////汉诺塔最优解函数实现：
//int Hnt(int x)
//{
//	int i=1;
//	if(x>1)
//	{
//		i+=2*Hnt(x-1);//递归
//	}
//	return i;
//}
//int main()
//{
//	int n=0;
//	int j=0;
//	printf("请输入汉诺塔层数n=");
//	scanf("%d",&n);
//	j=Hnt(n);
//	printf("%d层汉诺塔的最优解=%d\n",n,j);
//	return 0;
//}

////循环方式求斐波那契数：
//int Fbnq(int x)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(x>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n=0;
//	int sum=0;
//	printf("请输入n=");
//	scanf("%d",&n);
//	sum=Fbnq(n);
//	printf("第%d个斐波那契数=%d\n",n,sum);
//	return 0;
//}

////递归求斐波那契数：
//int Fbnq(int x)
//{
//	if(x<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fbnq(x-1)+Fbnq(x-2);
//	}
//}
//x=50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//....
//重复计算，效率低
//int main()
//{
//	int n=0;
//	int sum=0;
//	printf("请输入n=");
//	scanf("%d",&n);
//	sum=Fbnq(n);
//	printf("第%d个斐波那契数=%d\n",n,sum);
//	return 0;
//}

////函数实现strcpy函数(满分版)：
//#include<assert.h>
//char* my_strcpy(char* dest,const char* str)//函数类型char*是为了能够返回dest数组的首元素地址；const修饰*str保证str指针在该函数内部不能被改变
//{
//	char* mdd=dest;
//	assert(dest!=NULL);//保证dest指针的有效性（assert断言，不满足条件时报错）——代码更加健壮
//	assert(str!=NULL);//保证str指针的有效性
//	while(*dest++=*str++)//把str字符串拷贝到dest指向的空间，包含‘\0’；因为‘\0’的值为0，所以当拷贝到str的‘\0’时停止循环
//	{
//	}
//	return mdd;
//}
//int main()
//{
//	char arr1[]="################";
//	char arr2[]="I am god!!!";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}

////函数实现strcpy函数(及格版)：
//void my_strcpy(char* dest,char* str)
//{
//	while(*str!='\0')
//	{
//		*dest=*str;
//		str++;
//		dest++;
//	}
//	*dest=*str;//拷贝数组str中的‘\0’
//}
//int main()
//{
//	char arr1[]="################";
//	char arr2[]="I am god!!!";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

////函数指针实现strlen函数：
//int my_strlen(char* a)
//{
//	char* start=a;
//	char* end=a;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char arr[]="hello world";
//	int lenth=0;
//	lenth=my_strlen(arr);
//	printf("字符串长度=%d\n",lenth);
//	return 0;
//}

////函数递归实现strlen函数：
//int my_strlen(char* x)
//{
//	if(*x!='\0')
//	{
//		return 1+my_strlen(x+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[]="hello world";
//	int lenth=0;
//	lenth=my_strlen(arr);
//	printf("字符串长度=%d\n",lenth);
//	return 0;
//}

////函数指针实现strlen函数(计数器)（满分版）：
//#include<assert.h>
//int my_strlen(const char* x)//const修饰，保证指针x在该函数内部不能被改变
//{
//	int count=0;
//	assert(x!=NULL);//保证指针的有效性
//	while(*x!='\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//int main()
//{
//	char err[]="hello world";
//	int lenth=0;
//	lenth=my_strlen(err);
//	printf("字符串长度lenth=%d\n",lenth);
//	return 0;
//}

////函数指针实现strlen函数(计数器)：
//int my_strlen(char* x)
//{
//	int count=0;
//	while(*x!='\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//int main()
//{
//	char err[]="hello world";
//	int lenth=0;
//	lenth=my_strlen(err);
//	printf("字符串长度lenth=%d\n",lenth);
//	return 0;
//}

////递归函数按顺序输出每一位：
//void print(int x)
//{
//	if(x>9)
//	{
//		print(x/10);
//	}
//	printf("%d ",x%10);
//}
//int main()
//{
//	unsigned int num=0;
//	printf("请输入一个数：");
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

////递归没有判断条件导致栈溢出：
//int main()
//{
//	printf("呵呵\n");
//	main();
//	return 0;
//}

////goto语句的关机程序
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20]={};
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意！你的电脑将在1分钟内关机！如果输入“我是猪”，就取消关机。\n请输入：");
//	scanf("%s",&input);
//	if(strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

////自增函数实现：
//void menu()
//{
//	printf("*********************\n");
//	printf("*** 1.加1  0.结束 ***\n");
//	printf("*********************\n");
//}
//int add(int* x)
//{
//	return (*x)++;
//}
//int main()
//{
//	int input=0;
//	int num=0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			add(&num);
//	        printf("%d\n",num);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}

////猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*******************************************\n");
//	printf("***************1.玩  0.退出****************\n");
//	printf("*******************************************\n");
//}
//void game()
//{
//  1.生成随机数
//	int ret=0;
//	int guess=0;
//	ret=rand()%100+1;//生成随机值并设置为1-100之间
//	printf("%d\n",ret);
//  2.猜数字
//	while(1)
//	{
//		printf("请猜数字：");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));//unsigned强制转换long为int类型；time（）获取时间戳来设置随机值的生成起点
//	do{
//		menu();//菜单
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input)//处理用户输入
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}

////函数实现n*n乘法口诀表：
//void Print(int n)
//{
//	int i=0;
//	for(i=1;i<=n;i++)//行
//	{
//		int j=0;
//		for(j=1;j<=i;j++)//列
//		{
//			printf("%d*%d=%-3d",i,j,(i*j));//-3d：输出的不足三位在后面补空格（左对齐）
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n=0;
//	printf("请输入数n=");
//	scanf("%d",&n);
//	Print(n);
//	return 0;
//}

////9*9乘法口诀表：
//int main()
//{
//	int m=0;
//	int n=0;
//	int c=0;
//	for(m=1;m<10;m++)//行
//	{
//		for(n=1;n<m+1;n++)//列
//		{
//			c=m*n;
//			printf("%d*%d=%-2d ",m,n,c);//-2d：输出的不足两位在后面补空格（左对齐）
//		}
//		printf("\n");
//	}
//	return 0;
//}

////输出已初始化数组中的最大数：
//int main()
//{
//	int arr[]={1,2,3,4,5,6,-7,8,9};
//	int i=0;
//	int max=arr[0];
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i]>max)
//		max=arr[i];
//	}
//	printf("max=%d\n",max);
//	return 0;
//}

////1/1-1/2+1/3...+1/99-1/100：
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<101;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("sum=%lf\n",sum);
//	return 0;
//}
//
////1到100出现数字9的个数：
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1;i<101;i++)
//	{
//		if(9==i%10)
//			count++;
//		if(9==i/10)
//			count++;
//	}
//	printf("有9的数字有%d\n个",count);
//	return 0;
//}

////判断素数的函数实现：
//#include<math.h>
//int panduan(int x)
//{
//	int i=0;
//	for(i=2;i<=sqrt((double)x);i++)
//	{
//		if(0==x%i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n=0;
//	printf("请输入一个数n：");
//	scanf("%d",&n);
//	if(0==panduan(n))
//	{
//		printf("%d不是一个素数\n",n);
//	}
//	else
//	{
//		printf("%是一个素数\n",n);
//	}
//	return 0;
//}

////100到200的素数求解：
//#include<math.h>
//int main()
//{
//	int n=0;
//	int count=0;
//	for(n=101;n<201;n+=2)
//	{
//		int m=0;
//		for(m=2;m<=sqrt(double(n));m++)
//		{
//			if(0==n%m)
//				break;
//		}
//		if(m>sqrt(double(n)))
//		{
//			printf("%d ",n);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}

////判断闰年的函数实现：
//int panduan(int x)
//{
//	if((0==x%4&&0!=x%100)||0==x%400)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int y=0;
//	printf("请输入年份：");
//	scanf("%d",&y);
//	if(0==panduan(y))
//	{
//		printf("%d是闰年\n ",y);
//	}
//	else
//	{
//		printf("%d不是闰年\n",y);
//	}
//	return 0;
//}

////输出1000到2000年中的闰年：
//int main()
//{
//	int y=0;
//	int count=0;
//	for(y=1000;y<2001;y++)
//	{
//		if(0==y%4&&0!=y%100||0==y%400)
//		{
//			printf("%d ",y);
//			count++;
//		}
//	}
//	printf("\n1000到2000年中一共有%d个闰年\n",count);
//}

////辗转相除法求两个数的最大公约数：
//int main()
//{
//	int m=0;
//	int n=0;
//	int r=0;
//	printf("请输入两个数：");
//	scanf("%d%d",&m,&n);
//	while(r=m%n)
//	{
//		m=n;
//		n=r;
//	}
//	printf("这两个数的最大公约数=%d\n",n);
//}

////输出100以内3的倍数：
//int main()
//{
//	int i=0;
//	for(i=1;i<101;i++)
//	{
//		if(0==i%3)
//			printf("%d ",i);
//	}
//	return 0;
//}

////从大到小排序输出三个数：
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	printf("请输入三个数：");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		int tmp=a;
//		a=b;
//		b=tmp;
//	}
//	if(a<c)
//	{
//		int tmp=a;
//		a=c;
//		c=tmp;
//	}
//	if(b<c)
//	{
//		int tmp=b;
//		b=c;
//		c=tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}

////模拟用户登录：
//#include<string.h>
//int main()
//{
//	int i=0;
//	char password[20]={};
//	for(i=0;i<3;i++)
//	{
//		printf("请输入密码：");
//		scanf("%s",password);
//		if(strcmp(password,"5360430")==0)//strcmp-比较两个字符串
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if(3==i)
//		printf("三次密码均输入错误，退出程序\n");
//	return 0;
//}

////字符串从两端向中间移动：
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[]="I am god!!!!!!";
//	char arr2[]="##############";
//	int left=0;
//	int right=strlen(arr1)-1;//strlen-求字符串长度；减1是减去转义字符'\n'
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//休息一秒
//		system("cls");//system-系统调用；cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}

////二分查找算法的函数实现：
//int chaozhao(int x[],int y,int g)
//{
//	int left=0;
//	int right=g;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(y>x[mid])
//		{
//			left=mid+1;
//		}
//		else if(y<x[mid])
//		{
//			right=mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int n=0;
//	int i=0;
//	int g=sizeof(arr)/sizeof(arr[0])-1;
//	printf("请输入查找的数n：");
//	scanf("%d",&n);
//	i=chaozhao(arr,n,g);
//	if(-1==i)
//	{
//		printf("%d找不到\n",n);
//	}
//	else
//	{
//		printf("%d找到了，下标是%d\n",n,i);
//	}
//	return 0;
//}

////有序数组的二分查找算法：
//int main()
//{
//	int v[10]={1,2,3,4,5,6,7,8,9,10};//有序数组
//	int x=0;//查找的数
//	int left=0;//左下标
//	int right=sizeof(v)/sizeof(v[0])-1;//右下标
//	int mid=0;
//	printf("请输入想查找的数x：");
//	scanf("%d",&x);
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(v[mid]<x)
//		{
//			left=mid+1;
//		}
//		else if(v[mid]>x)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n",mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

////1到n的阶乘和：
//int main()
//{
//	int n=0;
//	int a=0;
//	int b=0;
//	int ret=1;
//	int sum=0;
//	printf("请输入想求的数n：");
//	scanf("%d",&n);
//	for(a=1;a<n+1;a++)
//	{
//		for(b=1,ret=1;b<a+1;b++)
//		{
//			ret*=b;
//		}
//		sum+=ret;
//	}
//	printf("1阶乘一直加到n的阶乘为%d\n",sum);
//	return 0;
//}

////1到n的阶乘和优化版：
//int main()
//{
//	int n=0;
//	int a=0;
//	int ret=1;
//	int sum=0;
//	printf("请输入想求的数n：");
//	scanf("%d",&n);
//	for(a=1;a<n+1;a++)
//	{
//		ret*=a;
//		sum+=ret;
//	}
//	printf("1到n的阶乘和=%d\n",sum);
//	return 0;
//}

////递归函数求n的阶乘：
//int jiec(int x)
//{
//	if(x<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*jiec(x-1);
//	}
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	printf("请输入数n=");
//	scanf("%d",&n);
//	ret=jiec(n);
//	printf("%d的阶乘=%d\n",n,ret);
//	return 0;
//}

////n的阶乘函数实现：
//int jiec(int x)
//{
//	int i=0;
//	int k=1;
//	for(i=1;i<x+1;i++)
//	{
//		k*=i;
//	}
//	return k;
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	printf("请输入n=");
//	scanf("%d",&n);
//	ret=jiec(n);
//	printf("%d的阶乘=%d\n",n,ret);
//	return 0;
//}

////n的阶乘：
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret=1;
//	printf("请输入n：");
//	scanf("%d",&n);
//	for(i=1;i<n+1;i++)
//	{
//		ret*=i;
//	}
//	printf("n的阶乘为%d\n",ret);
//	return 0;
//}

////for循环输出1到10：
//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

////清空输入缓冲区：
//int main()
//{
//	int ch=0;
//	while((ch=getchar())!=EOF)
//		putchar(ch);
//	return 0;
//}

////while循环求0到100的奇数：
//int main()
//{
//	int i=0;
//	while(i<=100)
//	{
//		if(1==i%2)
//		{
//			printf("%d ",i);
//		}
//		i++;
//	}
//	return 0;
//}

////判断奇数还是偶数：
//int main()
//{
//	int a=0;
//	printf("请输入你想判断的数:");
//	scanf("%d",&a);
//	if(1==a%2)
//	{
//		printf("%d是奇数\n",a);
//	}
//	else
//	{
//		printf("%d是偶数\n",a);
//	}
//	return 0;
//}

////指针初识：
//int main()
//{
//	char a='b';
//	char* c=&a;
//	printf("a=%c\n",*c);
//	return 0;
//}

////指针变量空间只跟环境有关：
//int main()
//{
//	int a=10;
//	int* p=&a;
//	printf("%d\n",sizeof(p));
//	return 0;
//}

////extern引入外部变量：
//int main()
//{
//	extern int qj;
//	printf("qj=%d\n",qj);
//	return 0;
//}

//每种类型所占空间大小：
//int main()
//{
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n",sizeof(short));//2
//	printf("%d\n",sizeof(int));//4
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
//	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
//}
