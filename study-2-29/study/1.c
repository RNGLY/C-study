#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////����ʵ�����0��100000��ˮ�ɻ���
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
//	    //scanf("%d",&x);//���ڲ���count����
//	    n=Count(x);//���㼸λ��
//	    //printf("%d\n",n);//���ڲ���count����
//	    sum=Sxh(x,n);//����ÿλ����n�η���
//		if(x==sum)
//		{
//			printf("%d ",x);
//		}
//	}
//	return 0;
//}

////����ʵ�ּ�������ת�Ʊ�棩��
//void menu()
//{
//	printf("*************************************\n");
//	printf("*****     1.��         2.��     *****\n");
//	printf("*****     3.��         4.��     *****\n");
//	printf("*********     0.�˳�����     ********\n");
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
//	int(*ZH[])(int,int)={0,Add,Sub,Mul,Div};//����ָ�����飬ʵ��ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		if(input>=1&&input<=4)
//		{
//			printf("������������������");
//			scanf("%d%d",&x,&y);
//			printf("%d\n",ZH[input](x,y));
//		}
//		else if(input==0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	}while(input);
//	return 0;
//}

//����ʵ�ּ��������ص������棩��
void menu()
{
	printf("*************************************\n");
	printf("*****     1.��         2.��     *****\n");
	printf("*****     3.��         4.��     *****\n");
	printf("*********     0.�˳�����     ********\n");
}
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
void HD(int (*c)(int,int))
{
	int x=0;
	int y=0;
	printf("������������������");
	scanf("%d%d",&x,&y);
	printf("%d\n",c(x,y));
}
int main()
{
	int input=0;
	int m=0;
	int n=0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 0:
			printf("�˳�����\n");
			break;
		case 1:
			HD(Add);
			break;
		case 2:
			HD(Sub);
			break;
		case 3:
			HD(Mul);
			break;
		case 4:
			HD(Div);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	}while(input);
	return 0;
}

////�ݹ麯��ʵ��n��k�η���
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
//	printf("��������n=");
//	scanf("%d",&n);
//	printf("������η�k=");
//	scanf("%d",&k);
//	nk=Nkf(n,k);
//	printf("%d��%d�η�=%lf\n",n,k,nk);
//	return 0;
//}

////�ݹ麯��ʵ��һ������ÿλ����֮�ͣ�
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
//	printf("����������n=");
//	scanf("%d",&n);
//	sum=Digitsum(n);
//	printf("%d��ÿλ����֮��=%d\n",n,sum);
//	return 0;
//}

////ʹ��ָ���ӡ���飺
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

////��������ʱ����������������ֵ��
//int main()
//{
//	int m=0;
//	int n=0;
//	printf("��������m=");
//	scanf("%d",&m);
//	printf("��������n=");
//	scanf("%d",&n);
//	m=m^n;
//	n=m^n;
//	m=m^n;
//	printf("m=%d,n=%d\n",m,n);
//}

////����ʵ�ֱַ��ӡһ���������Ƶ�����λ��ż��λ��
//void Print(int n)
//{
//	int i=0;
//	printf("����λ��");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n=0;
//	printf("��������n=");
//	scanf("%d",&n);
//	Print(n);
//	return 0;
//}

////����ʵ��ͳ�����������������в�ͬλ�ĸ�����
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
//	printf("��������m=");
//	scanf("%d",&m);
//	printf("��������n=");
//	scanf("%d",&n);
//	count=Count_b(m,n);
//	printf("%d��%d�Ķ������в�ͬλ�ĸ�����%d��\n",m,n,count);
//	return 0;
//}

////����ʵ��ͳ��������������1�ĸ������ռ��棩��
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
//	printf("������һ����n=");
//	scanf("%d",&n);
//	count=Count_1(n);
//	printf("%d�Ķ�������1�ĸ�����%d��\n",n,count);
//	return 0;
//}

////����ʵ��ͳ��������������1�ĸ������Ż��棩��
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
//	printf("������һ����n=");
//	scanf("%d",&n);
//	count=Count_1(n);
//	printf("%d�Ķ�������1�ĸ�����%d��\n",n,count);
//	return 0;
//}

////����ʵ��ͳ��������������1�ĸ�����
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
//	printf("������һ����n=");
//	scanf("%d",&n);
//	count=Count_1(n);
//	printf("%d�Ķ�������1�ĸ�����%d��\n",n,count);
//	return 0;
//}

////����ʵ�ֽ�������һ����С���������飺
//void Jh(int arr1[],int arr2[],int sz)//���±꽻������Ԫ�غ���
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
//void Print(int arr[],int sz)//�����ӡ����
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
//	Jh(arr1,arr2,sz);//���±꽻������Ԫ��
//	Print(arr1,sz);//�����ӡ
//	Print(arr2,sz);//�����ӡ
//	return 0;
//}

////�ݹ麯��ʵ����������
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

////����ʵ������ȫ����ʼ��Ϊ0��ȫ����ӡ��ȫ�����ã�
//void reverse(int arr[],int sz)//�������ú���
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
//void Print(int arr[],int sz)//�����ӡ����
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Init(int arr[],int sz)//�����ʼ��Ϊ0����
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
//	//Init(arr,sz);//�����ʼ��Ϊ0
//	Print(arr,sz);//�����ӡ
//	reverse(arr,sz);//����������
//	Print(arr,sz);//�����ӡ
//	return 0;
//}

////һ��������ֻ��һ��ֻ����һ�ε������ҳ����������⣩��
//int main()
//{
//	int arr[]={1,2,3,4,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	int i=0;
//	int j=1;//���յ���
//	for(i=0;i<sz-1;i++)
//	{
//		j^=arr[i];
//	}
//	printf("��������%d\n",j);
//	return 0;
//}

////һ��������ֻ��һ��ֻ����һ�ε������ҳ���(�������)��
//int main()
//{
//	int arr[]={1,2,3,4,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);//��������Ԫ�ظ���
//	int i=0;
//	for(i=0;i<sz;i++)//ȡһ��Ԫ��
//	{
//		int j=0;
//		int count=0;//������
//		for(j=0;j<sz;j++)//��ÿ��Ԫ�ؽ��бȽ�
//		{
//			if(arr[i]==arr[j])
//			{
//				count++;
//			}
//		}
//		if(1==count)
//		{
//			printf("��������%d\n",arr[i]);
//			break;
//		}
//	}
//}

////ð��������ʵ�֣�
//void Mppx(int x[],int y)
//{
//	int i=0;//ð����������
//	for(i=0;i<y-1;i++)
//	{
//		int flag=1;//���������Ѿ�����
//		int j=0;//ÿһ�˱Ƚ϶���
//		for(j=0;j<y-1-i;j++)
//		{
//			if(x[j]>x[j+1])
//			{
//				int tmp=x[j];
//				x[j]=x[j+1];
//				x[j+1]=tmp;
//				flag=0;//�����鲢����ȫ����
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
//	Mppx(arr,sz);//ð���������������Ͻ���arr��Ԫ�ص�ַ(&arr[0])
//	for(n=0;n<sz;n++)
//	{
//		printf("%d ",arr[n]);
//	}
//	return 0;
//}

////������̨�����⺯��ʵ�֣�
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
//		}while(x-2);//ѭ��
//		return c;
//		break;
//	}
//}
//int main()
//{
//	int n=0;
//	int j=0;
//	printf("������̨����n=");
//	scanf("%d",&n);
//	j=Qwttj(n);
//	printf("%d��̨����%d������\n",n,j);
//	return 0;
//}

////��ŵ�����Ž⺯��ʵ�֣�
//int Hnt(int x)
//{
//	int i=1;
//	if(x>1)
//	{
//		i+=2*Hnt(x-1);//�ݹ�
//	}
//	return i;
//}
//int main()
//{
//	int n=0;
//	int j=0;
//	printf("�����뺺ŵ������n=");
//	scanf("%d",&n);
//	j=Hnt(n);
//	printf("%d�㺺ŵ�������Ž�=%d\n",n,j);
//	return 0;
//}

////ѭ����ʽ��쳲���������
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
//	printf("������n=");
//	scanf("%d",&n);
//	sum=Fbnq(n);
//	printf("��%d��쳲�������=%d\n",n,sum);
//	return 0;
//}

////�ݹ���쳲���������
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
//�ظ����㣬Ч�ʵ�
//int main()
//{
//	int n=0;
//	int sum=0;
//	printf("������n=");
//	scanf("%d",&n);
//	sum=Fbnq(n);
//	printf("��%d��쳲�������=%d\n",n,sum);
//	return 0;
//}

////����ʵ��strcpy����(���ְ�)��
//#include<assert.h>
//char* my_strcpy(char* dest,const char* str)//��������char*��Ϊ���ܹ�����dest�������Ԫ�ص�ַ��const����*str��֤strָ���ڸú����ڲ����ܱ��ı�
//{
//	char* mdd=dest;
//	assert(dest!=NULL);//��֤destָ�����Ч�ԣ�assert���ԣ�����������ʱ��������������ӽ�׳
//	assert(str!=NULL);//��֤strָ�����Ч��
//	while(*dest++=*str++)//��str�ַ���������destָ��Ŀռ䣬������\0������Ϊ��\0����ֵΪ0�����Ե�������str�ġ�\0��ʱֹͣѭ��
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

////����ʵ��strcpy����(�����)��
//void my_strcpy(char* dest,char* str)
//{
//	while(*str!='\0')
//	{
//		*dest=*str;
//		str++;
//		dest++;
//	}
//	*dest=*str;//��������str�еġ�\0��
//}
//int main()
//{
//	char arr1[]="################";
//	char arr2[]="I am god!!!";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

////����ָ��ʵ��strlen������
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
//	printf("�ַ�������=%d\n",lenth);
//	return 0;
//}

////�����ݹ�ʵ��strlen������
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
//	printf("�ַ�������=%d\n",lenth);
//	return 0;
//}

////����ָ��ʵ��strlen����(������)�����ְ棩��
//#include<assert.h>
//int my_strlen(const char* x)//const���Σ���ָ֤��x�ڸú����ڲ����ܱ��ı�
//{
//	int count=0;
//	assert(x!=NULL);//��ָ֤�����Ч��
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
//	printf("�ַ�������lenth=%d\n",lenth);
//	return 0;
//}

////����ָ��ʵ��strlen����(������)��
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
//	printf("�ַ�������lenth=%d\n",lenth);
//	return 0;
//}

////�ݹ麯����˳�����ÿһλ��
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
//	printf("������һ������");
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

////�ݹ�û���ж���������ջ�����
//int main()
//{
//	printf("�Ǻ�\n");
//	main();
//	return 0;
//}

////goto���Ĺػ�����
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20]={};
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣡��ĵ��Խ���1�����ڹػ���������롰����������ȡ���ػ���\n�����룺");
//	scanf("%s",&input);
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

////��������ʵ�֣�
//void menu()
//{
//	printf("*********************\n");
//	printf("*** 1.��1  0.���� ***\n");
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
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			add(&num);
//	        printf("%d\n",num);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}

////��������Ϸ
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*******************************************\n");
//	printf("***************1.��  0.�˳�****************\n");
//	printf("*******************************************\n");
//}
//void game()
//{
//  1.���������
//	int ret=0;
//	int guess=0;
//	ret=rand()%100+1;//�������ֵ������Ϊ1-100֮��
//	printf("%d\n",ret);
//  2.������
//	while(1)
//	{
//		printf("������֣�");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));//unsignedǿ��ת��longΪint���ͣ�time������ȡʱ������������ֵ���������
//	do{
//		menu();//�˵�
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch(input)//�����û�����
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}

////����ʵ��n*n�˷��ھ���
//void Print(int n)
//{
//	int i=0;
//	for(i=1;i<=n;i++)//��
//	{
//		int j=0;
//		for(j=1;j<=i;j++)//��
//		{
//			printf("%d*%d=%-3d",i,j,(i*j));//-3d������Ĳ�����λ�ں��油�ո�����룩
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n=0;
//	printf("��������n=");
//	scanf("%d",&n);
//	Print(n);
//	return 0;
//}

////9*9�˷��ھ���
//int main()
//{
//	int m=0;
//	int n=0;
//	int c=0;
//	for(m=1;m<10;m++)//��
//	{
//		for(n=1;n<m+1;n++)//��
//		{
//			c=m*n;
//			printf("%d*%d=%-2d ",m,n,c);//-2d������Ĳ�����λ�ں��油�ո�����룩
//		}
//		printf("\n");
//	}
//	return 0;
//}

////����ѳ�ʼ�������е��������
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

////1/1-1/2+1/3...+1/99-1/100��
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
////1��100��������9�ĸ�����
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
//	printf("��9��������%d\n��",count);
//	return 0;
//}

////�ж������ĺ���ʵ�֣�
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
//	printf("������һ����n��");
//	scanf("%d",&n);
//	if(0==panduan(n))
//	{
//		printf("%d����һ������\n",n);
//	}
//	else
//	{
//		printf("%��һ������\n",n);
//	}
//	return 0;
//}

////100��200��������⣺
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

////�ж�����ĺ���ʵ�֣�
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
//	printf("��������ݣ�");
//	scanf("%d",&y);
//	if(0==panduan(y))
//	{
//		printf("%d������\n ",y);
//	}
//	else
//	{
//		printf("%d��������\n",y);
//	}
//	return 0;
//}

////���1000��2000���е����꣺
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
//	printf("\n1000��2000����һ����%d������\n",count);
//}

////շת������������������Լ����
//int main()
//{
//	int m=0;
//	int n=0;
//	int r=0;
//	printf("��������������");
//	scanf("%d%d",&m,&n);
//	while(r=m%n)
//	{
//		m=n;
//		n=r;
//	}
//	printf("�������������Լ��=%d\n",n);
//}

////���100����3�ı�����
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

////�Ӵ�С���������������
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	printf("��������������");
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

////ģ���û���¼��
//#include<string.h>
//int main()
//{
//	int i=0;
//	char password[20]={};
//	for(i=0;i<3;i++)
//	{
//		printf("���������룺");
//		scanf("%s",password);
//		if(strcmp(password,"5360430")==0)//strcmp-�Ƚ������ַ���
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if(3==i)
//		printf("�����������������˳�����\n");
//	return 0;
//}

////�ַ������������м��ƶ���
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[]="I am god!!!!!!";
//	char arr2[]="##############";
//	int left=0;
//	int right=strlen(arr1)-1;//strlen-���ַ������ȣ���1�Ǽ�ȥת���ַ�'\n'
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//system-ϵͳ���ã�cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}

////���ֲ����㷨�ĺ���ʵ�֣�
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
//	printf("��������ҵ���n��");
//	scanf("%d",&n);
//	i=chaozhao(arr,n,g);
//	if(-1==i)
//	{
//		printf("%d�Ҳ���\n",n);
//	}
//	else
//	{
//		printf("%d�ҵ��ˣ��±���%d\n",n,i);
//	}
//	return 0;
//}

////��������Ķ��ֲ����㷨��
//int main()
//{
//	int v[10]={1,2,3,4,5,6,7,8,9,10};//��������
//	int x=0;//���ҵ���
//	int left=0;//���±�
//	int right=sizeof(v)/sizeof(v[0])-1;//���±�
//	int mid=0;
//	printf("����������ҵ���x��");
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
//			printf("�ҵ��ˣ��±���%d\n",mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

////1��n�Ľ׳˺ͣ�
//int main()
//{
//	int n=0;
//	int a=0;
//	int b=0;
//	int ret=1;
//	int sum=0;
//	printf("�������������n��");
//	scanf("%d",&n);
//	for(a=1;a<n+1;a++)
//	{
//		for(b=1,ret=1;b<a+1;b++)
//		{
//			ret*=b;
//		}
//		sum+=ret;
//	}
//	printf("1�׳�һֱ�ӵ�n�Ľ׳�Ϊ%d\n",sum);
//	return 0;
//}

////1��n�Ľ׳˺��Ż��棺
//int main()
//{
//	int n=0;
//	int a=0;
//	int ret=1;
//	int sum=0;
//	printf("�������������n��");
//	scanf("%d",&n);
//	for(a=1;a<n+1;a++)
//	{
//		ret*=a;
//		sum+=ret;
//	}
//	printf("1��n�Ľ׳˺�=%d\n",sum);
//	return 0;
//}

////�ݹ麯����n�Ľ׳ˣ�
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
//	printf("��������n=");
//	scanf("%d",&n);
//	ret=jiec(n);
//	printf("%d�Ľ׳�=%d\n",n,ret);
//	return 0;
//}

////n�Ľ׳˺���ʵ�֣�
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
//	printf("������n=");
//	scanf("%d",&n);
//	ret=jiec(n);
//	printf("%d�Ľ׳�=%d\n",n,ret);
//	return 0;
//}

////n�Ľ׳ˣ�
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret=1;
//	printf("������n��");
//	scanf("%d",&n);
//	for(i=1;i<n+1;i++)
//	{
//		ret*=i;
//	}
//	printf("n�Ľ׳�Ϊ%d\n",ret);
//	return 0;
//}

////forѭ�����1��10��
//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

////������뻺������
//int main()
//{
//	int ch=0;
//	while((ch=getchar())!=EOF)
//		putchar(ch);
//	return 0;
//}

////whileѭ����0��100��������
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

////�ж���������ż����
//int main()
//{
//	int a=0;
//	printf("�����������жϵ���:");
//	scanf("%d",&a);
//	if(1==a%2)
//	{
//		printf("%d������\n",a);
//	}
//	else
//	{
//		printf("%d��ż��\n",a);
//	}
//	return 0;
//}

////ָ���ʶ��
//int main()
//{
//	char a='b';
//	char* c=&a;
//	printf("a=%c\n",*c);
//	return 0;
//}

////ָ������ռ�ֻ�������йأ�
//int main()
//{
//	int a=10;
//	int* p=&a;
//	printf("%d\n",sizeof(p));
//	return 0;
//}

////extern�����ⲿ������
//int main()
//{
//	extern int qj;
//	printf("qj=%d\n",qj);
//	return 0;
//}

////ÿ��������ռ�ռ��С��
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