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
//    int i = 2, k = 0;  // 初始化i和k为2和0
//    while (n != 1)  // 当n不等于1时循环执行以下操作，这是一个“循环操作”类似于“递归”
//    {
//        if (n % i == 0)  // 如果n能够整除i
//        {
//            if (k == 0)  // 如果k为0，表示是第一个因子
//                printf("%d=", n);  // 打印n的等号
//            printf(k++ == 0 ? "%d" : "*%d", i);  // 打印因子i（第一个因子不加乘号，后面的因子加乘号）
//            n /= i;  // 更新n的值为n除以i的商
//        }
//        else  // 如果n不能整除i
//        {
//            i++;  // i自增1
//        }
//    }
//    printf("\n");  // 换行打印
//}
//
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
//void selectionSort(int nums[], int n)
//{
//    // 外循环：未排序区间为 [i, n-1]
//    for (int i = 0; i < n - 1; i++)
//    {
//        // 内循环：找到未排序区间内的最小元素
//        int k = i;
//        for (int j = i + 1; j < n; j++)
//        {
//            if (nums[j] < nums[k])
//                k = j; // 记录最小元素的索引
//        }
//        // 将该最小元素与未排序区间的首个元素交换
//        int temp = nums[i];
//        nums[i] = nums[k];
//        nums[k] = temp;
//    }
//}
//
//#define MAX 100
//int main()
//{
//	int n;
//	int num[MAX];
//	int i, j, k;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//
//    selectionSort(num, n);
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	int n = 0;
//	int i = 0, j = 0, k = 0;
//	int a[MAX][MAX];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			a[i][j] = ((i + 1) * 100) + (j + 1);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%04d", a[i][j]);
//			if (j < n - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//求矩阵的最大值和最小值之差,主要是进行遍历，找出最大值和最小值，然后求差。二维数组的遍历也不是一个很难的地方，主要是要注意总结。
//不同的数组大小：行列设置可以“先设置一个很大的数字，然后进行输入，就可以自由设置不同的数组了”
//#define MAX 100
//int main()
//{
//	int a[MAX][MAX];
//	int n = 0, i = 0, j = 0, k = 0, m = 0;
//	int x, y;
//
//	scanf("%d %d", &m, &n);
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	//最大值遍历求解
//	x = a[0][0];
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] > x)
//			{
//				x = a[i][j];
//			}
//		}
//	}
//	//最小值遍历求解
//	y = a[0][0];
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] < y)
//			{
//				y = a[i][j];
//			}
//		}
//	}
//
//	printf("%d", x - y);
//	return 0;
//}


//int main()
//{
//	int Sum = 0;
//	float Average = 0;
//	int i = 0, j = 0, k = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &j);
//		Sum += j;
//	}
//
//	Average = Sum * 1.0 / n;
//
//	printf("Sum = %d\nAverage = %.2f", Sum, Average);
//	return 0;
//}



/*这个程序是求一个矩阵的转置，但是不是一个N*N的矩阵，而是一个N*M的矩阵，所以需要进行一些修改。
比如在“i”和“j”进行互换的时候要注意“n”和“m”也进行互换*/
//#define MAX 100
//int main()
//{
//	int a[MAX][MAX];
//	int n = 0, i = 0, j = 0, k = 0, m = 0;
//
//	scanf("%d %d", &m, &n);
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < m; i++)
//		{
//			printf("%d", a[i][j]);
//			if (i < m - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0, j = 0, k = 0, m = 0;
//
//	scanf("%d", &m);
//
//	for (i = 1; i <= m; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (j = 0; j < m; j++)
//			{
//				printf("%03d", i * m - j);
//				if (j < m - 1)
//				{
//					printf(" ");
//				}
//			}
//		}
//		if (i % 2 == 1)
//		{
//			for (j = 1; j <= m; j++)
//			{
//				printf("%03d", (i - 1) * m + j);
//				if (j < m)
//				{
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//循环数列的生成
// 这个真的有点看不懂。
//#define MAX 30
//int main() 
//{
//    int n, i = 0, j, c = 0;
//    int a[MAX][MAX];
//    scanf("%d", &n);
//    int k = 0, l = n - 1;     //k，l表示当前处理的行列
//    while (k <= l)
//    {       //以一次“圆周”为一次循环
//        for (j = k; j <= l; j++) a[k][j] = ++c;//向右
//        for (i = k + 1; i <= l; i++) a[i][l] = ++c;//向下
//        for (j = l - 1; j >= k; j--) a[l][j] = ++c;//向左
//        for (i = l - 1; i > k; i--) a[i][k] = ++c;//向上
//        k++; l--;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++)
//            printf("%03d ", a[i][j]);
//        printf("\n");
//    }
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//int main()
//{
//	int a = 3;
//	//int b = ++a;//这个是先加再赋值，所以a的值是4
//	//++这个操作符分两步进行，先对“a”自己进行加1，然后使用，就是赋值给“b”。
//
//	int b = a++;//这个是先赋值再加，所以a的值是4，然后再赋值给“b”。
//	//++和--这两个操作符的作用是对自己使用
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	return 0;
//}



//第一个void的意思是不需要返回值
//第二个void的意思是不需要参数
//void test(void)

//int main()
//{
//	int a = 20;
//	//原码：00000000000000000000000000010100
//	//反码：00000000000000000000000000010100
//	//补码：00000000000000000000000000010100
//	int b = -10;
//	//原码：10000000000000000000000000001010
//	//反码：11111111111111111111111111110101
//	//补码：11111111111111111111111111110110
//	int c = 0;
//	return 0;
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//理解数组的综合应用

int a[201], size = 0;   //全局变量 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int menu();      //函数声明 
int print();
int init();
void sort();
int max();
void min();
int sum();
int average();
int append();
int get_index(int n);
int find();
void del();

int main() {     //主函数 
    char c = '#';
    while (c != 'X') {
        c = menu();
        switch (c) {
        case 'P': print();  break;
        case 'I': init();   break;
        case 'S': sort();   break;
        case 'D': del();    break;
        case 'M': max();    break;
        case 'N': min();    break;
        case 'U': sum();    break;
        case 'G': average(); break;
        case 'A': append(); break;
        case 'F': find();   break;
        case 'X':           break;
        default:printf("\n错误的命令...");
        }
        if (c != 'X') {
            printf("\n按任意键继续 ...");
            getch();
        }
    }
}



int menu() {
    printf("\n*********** 数组综合应用 *************");
    printf("\n*   I.初始化      U.所有元素和       *");
    printf("\n*   P.输出        G.所有元素平均值   *");
    printf("\n*   S.排序        A.末尾添加元素     *");
    printf("\n*   M.最大值      F.查找元素         *");
    printf("\n*   N.最小值      D.删除元素         *");
    printf("\n*          X.退出程序                *");
    printf("\n**************************************");
    printf("\n请输入您的选择:");
    char c;
    c = getche();
    if (c >= 'a' && c <= 'z')c = c - 32;
    return c;
}
int print() {
    int i; printf("\n数组共有%d个元素:", size);
    for (i = 0; i < size; i++)printf("%d ", a[i]);
}
int init() {
    printf("\n系统初始化数组为5个1到1000的随机整数.");
    int i;
    size = 5;
    srand(time(NULL));
    for (i = 0; i < size; i++) a[i] = rand() % 1000 + 1;
    print();
}

void sort() {
    int i, j, t;
    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (a[i] < a[j]) {
                t = a[i]; a[i] = a[j]; a[j] = t;
            }
    printf("\n排序完成....");
    print();
}

int max() {
    int m, i;
    if (size == 0) printf("\n没有元素!");
    else {
        m = a[0];
        for (i = 1; i < size; i++)if (m < a[i])m = a[i];
        printf("\n最大元素: %d", m);
    }
}
void min() {
    int m, i;
    if (size == 0) printf("\n没有元素!");
    else {
        m = a[0];
        for (i = 1; i < size; i++)if (m > a[i])m = a[i];
        printf("\n最小元素: %d", m);
    }
}
int sum() {
    int s = 0, i;
    if (size == 0) printf("\n没有元素!");
    else {
        for (i = 0; i < size; i++)s += a[i];
        printf("\n所有元素之和: %d", s);
    }
}
int average() {
    int s = 0, i;
    if (size == 0) printf("\n没有元素!");
    else {
        for (i = 0; i < size; i++)s += a[i];
        printf("\n所有元素平均值: %lf", (double)s / size);
    }
}
int append() {
    int i, p = 0, n;
    printf("\n请输入要添加的元素:");
    scanf("%d", &n);
    a[size++] = n;
    print();
}
int get_index(int n) {
    int i;
    for (i = 0; i < size; i++)
        if (a[i] == n)  return i;
    return -1;
}
int find() {
    int i, n, index;
    printf("\n请输入要查找的元素:");
    scanf("%d", &n);
    index = get_index(n);
    if (index != -1)
        printf("\n找到了，索引为: %d.", index);
    else
        printf("\n没找到.");
}

void del() {
    int n, i, index;
    printf("\n请输入要查找的元素:");
    scanf("%d", &n);
    index = get_index(n);
    if (index == -1) {
        printf("没找到值为%d的元素.", n);
        return;
    }
    for (i = index; i < size - 1; i++)a[i] = a[i + 1];
    size--;
    print();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////