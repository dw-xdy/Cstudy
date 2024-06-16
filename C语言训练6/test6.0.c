#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef unsigned int uint;
//
//int main()
//{
//	 uint a = 10;
//	 uint b = 20;
//	 uint c = a + b;  //给这个“类型”一个新的名字，然后进行使用就行，这样会方便很多
//	return 0;
//}


//修饰局部变量的时候，static 修饰符的作用是使局部变量的生命周期和程序的生命周期一样长。
//void test()
//{
//	static int a = 1;            //1.static 修饰局部变量的时候，局部变量出了作用域是不销毁的。
//	                             //本质上，static修饰局部变量的时候，改变了变量的存储位置，
//	                             //影响了变量的生命周期，生命周期变长，和程序的生命周期一样。
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0; 
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//人类信息结构体
//struct Person
//{
//	//成员
//	char name[20];
//	int age;
//	float height;
//	char telephone[20];
//};
//
//
//int main()
//{
//	struct Person p1 = {"Tom", 20, 1.8, "1234567890"};
//	
//	//结构体对象. 成员名
//	printf("%s %d %.2f %s\n", p1.name, p1.age, p1.height, p1.telephone);
//	return 0;
//}




//#define max 100
//int main()
//{
//	int a[max];
//	int i;
//	int n;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//struct peo
//{
//	char name[20];
//	char telephone[12];
//	char sex[5];
//	int high;
//};
//
//int main()
//{
//	struct peo p1, p2;  //结构体变量的创建
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int a[10];
//
//	//初始化数组
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	//输出数组
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	test();
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//实现拷贝字符串的函数
//#include <string.h>
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);	
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	//断言
//	assert(dest != NULL && src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int a = 10;  //常量，不可修改
//	//a = 20;
//	//int* p = &a;
//	//*p = 20;  //指针可以修改所指对象的内容,相当于绕过去了常量限制
//	const int* p = &a;  //指针常量，指向常量的指针，不可修改所指对象
//	int** pb = &p;
//	**pb = 20;  //指针的指针可以修改所指对象的内容,也就是“二级指针”也可以修改所指对象
//	printf("%d\n", a);
//	return 0;
//}


