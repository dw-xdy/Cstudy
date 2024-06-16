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

//int main()
//{
//	int a[1000] = { 2 }, count = 1;
//	int i = 0;
//	for (i = 3; count < 1000; i += 2)
//	{
//		int flag = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			a[count] = i;
//			count++;
//		}
//	}
//	while (scanf("%d", &i) == 1)
//	{
//		printf("%d", a[i - 1]);
//		if (getchar() == '\n')
//		{
//			putchar('\n');
//		}
//		else
//		{
//			putchar(',');
//		}
//	}
//
//	return 0;
//}


////看不懂，等等再看。
//void fun(int n)
//{
//    int i = 2, k = 0;
//    while (n != 1)
//    {
//        if (n % i == 0)
//        {
//            if (k == 0)
//                printf("%d=", n);
//            printf(k++ == 0 ? "%d" : "*%d", i);
//            n /= i;
//        }
//        else 
//        {
//            i++;
//        }
//    }
//    printf("\n");
//}
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1 && n > 1) // 输入 0 或 负数结束输入
//        fun(n);
//    return 0;
//}



//#define N 1001
//void Init(int* a, int n)
//{
//	int i, j, k, flg;
//	for (i = 1, k = 0; k < n; i++)
//	{
//		for (j = 2, flg = 1; flg && j * j <= i; j++)
//		{
//			if (i % j == 0)  
//				flg = 0;
//		}
//		if (flg)
//		{
//			a[k++] = i;
//		}
//	}
//}
//
//
//int main()
//{
//	int a[N], n, k = 0;
//	Init(a, N);
//	while (scanf("%d", &n) == 1) 
//	{              //输入 0 或 ctrl + z 回车 结束输入
//		if (n <= 0) 
//		{
//			break;
//		}
//		else
//		{
//			printf(k++ == 0 ? "%d" : ",%d", a[n]);
//		}
//	}
//	return 0;
//}



//这个真是有点看不懂，但是还是要看啊，今天下午有时间了看，还是先把最基础的知识看了吧。
//#define N 1001
//
//// 初始化素数数组
//void InitPrimeArray(int* primeArray, int n)
//{
//	int j = 0;
//	int num, i, isPrime;
//	for (num = 2, i = 0; i < n; num++)
//	{
//		for (isPrime = 1,  j = 2; j * j <= num; j++)
//		{
//			if (num % j == 0)
//			{
//				isPrime = 0;
//				break;
//			}
//		}
//		if (isPrime)
//		{
//			primeArray[i++] = num;
//		}
//	}
//}
//
//int main()
//{
//	int primeArray[N];  // 存储素数的数组
//	int input, count = 0;  // 输入的数字，计数器
//
//	InitPrimeArray(primeArray, N);  // 初始化素数数组
//
//	while (scanf("%d", &input) == 1)
//	{
//		if (input <= 0)
//		{
//			break;
//		}
//		else
//		{
//			if (count == 0)
//			{
//				printf("%d", primeArray[input - 1]);
//			}
//			else
//			{
//				printf(",%d", primeArray[input - 1]);
//			}
//			count++;
//		}
//	}
//	printf("\n");
//	return 0;
//}

//水仙花数的生成
//int main()
//{
//	int i = 0, j = 0, k = 0;
//	
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			for (k = 0; k < 10; k++)
//			{
//				if (i * 100 + j * 10 + k == i * i * i + j * j * j + k * k * k)
//				{
//					printf("%d%d%d\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int m = 10;
//	int n = 100;
//
//	const int* p = &m;
//	printf("%d\n", *p);
//	return 0;
//}


//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//unsigned long long fibonacci(long long a, long long b, int count)
//{
//	if (count == 0)
//		return b;
//	else
//		return fibonacci(a + b, a, count - 1);
//}
//
//int main()
//{
//	int i, n;
//	printf("请输入要计算的斐波那契数列的项数：");
//	scanf("%d", &n);
//
//	if (n < 0)
//	{
//		return 1;
//	}
//	for (i = 0; i <= n; ++i)
//	{
//		printf("斐波那契数列的第 %d 项是 %llu\n", i, fibonacci(1, 0, i));
//	}
//	return 0;
//}



//int main() 
//{
//	char t[200] = "ThE arrAy dimensions must be pOsitive constant Integer expressions.";
//	int i, j, s = 0;
//	//请在此处补充代码
//
//	for (i = 0; i < strlen(t); i++)
//	{
//		if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u' || t[i] == 'A' || t[i] == 'E' || t[i] == 'I' || t[i] == 'O' || t[i] == 'U')
//		{
//			s++;
//		}
//	}
//	printf("%d", s);//输出字符串t中元音字母的个数 
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    char s[26];
//    char t[100] = "The People\'s Republic of China";
//    int i, j;
//
//    for (i = 0; i < 26; i++)  //遍历整个数组赋值 
//    {
//        s[i] = 'A' + i;
//    }
//
//    for (i = 0; i < 26; i++)  //遍历整个数组输出
//    {
//        printf("%c%c", s[i], s[i] + 32);
//    }
//    printf("\n");
//
//    for (i = 0; t[i] != '\0'; i++)  //只遍历字符串（不是整个数组）
//    {
//        printf("%c_", t[i]);
//    }
//    return 0;
//}


//遍历二维数组并输出
//#define MAX_SIZE 20
//
//int main() 
//{
//    int N, i, j;
//    printf("请输入一个正整数N，N<20：");
//    scanf("%d", &N);
//
//    if (N >= MAX_SIZE)
//    {
//        printf("输入的数应小于20");
//        return 1;
//    }
//
//    int matrix[MAX_SIZE][MAX_SIZE];
//
//    for (i = 0; i < N; i++) 
//    {
//        for (j = 0; j < N; j++) 
//        {
//            matrix[i][j] = (i + 1) * 100 + (j + 1);
//        }
//    }
//
//    for (i = 0; i < N; i++) 
//    {
//        for (j = 0; j < N; j++)
//        {
//            printf("%04d", matrix[i][j]);
//            if (j < N - 1)
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//可以实现和上一个程序相同的功能，但是使用了更加简洁的代码。
//#include <stdio.h>
//
//int main() {
//    int N;
//    printf("请输入一个正整数N，N<20：");
//    scanf("%d", &N);
//
//    if (N >= 20) {
//        printf("输入的数应小于20");
//        return 1;
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            printf("%02d%02d ", i + 1, j + 1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


/*输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔
输出格式:
输出转置后的n行n列矩阵，每个数占4位。*/
//完全是自己写的。
//#define MAX 6
//int main()
//{
//	int shuzu[MAX][MAX];
//	int i = 0, n = 0;
//	int j = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &shuzu[i][j]);
//		}
//	}
//
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%4d ", shuzu[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n;
//
//	scanf("%d", &n);
//
//	if (n < 1 || n > 10)
//	{
//		printf("not found");
//	}
//	else
//	{
//		printf("weizhi:%d", n - 1);
//	}
//	return 0;
//}

//计算两个斐波纳契数列的和
//int main()
//{
//	unsigned long long a[100] = { 1,1 };
//	int i = 0, j = 0, k = 0;
//	int c = 0, b = 0;
//
//	for (i = 2; i < 100; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//
//	scanf("%d %d", &c, &b);
//
//	printf("%llu", a[c - 1] + a[b - 1]);
//	return 0;
//}



/* 选择排序 */
void selectionSort(int nums[], int n)
{
    // 外循环：未排序区间为 [i, n-1]
    for (int i = 0; i < n - 1; i++)
    {
        // 内循环：找到未排序区间内的最小元素
        int k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[k])
                k = j; // 记录最小元素的索引
        }
        // 将该最小元素与未排序区间的首个元素交换
        int temp = nums[i];
        nums[i] = nums[k];
        nums[k] = temp;
    }
}

#define MAX 100
int main()
{
	int n;
	int num[MAX];
	int i, j, k;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

    selectionSort(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}











