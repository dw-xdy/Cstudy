#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*斐波那契(Fibonacci)数列是这样一个数列：1、1、2、3、5、8、13、21、……, 这个数列前两项是1，从第三项开始，每一项都等于前两项之和。

编程读入两个正整数A和B，输出Fibonacci数列的第A项到第B项。

输入格式 :
一行中给出2个不超过90的正整数A和B（A <= B）。

输出格式 :
输出Fibonacci数列的第A项到第B项，5个数一行，行内数据以一个空格分隔*/

//真是自己一步一步摸索出来的，真是没有借用任何现成的函数，自己写的。
//#define MAX 90
//int main()
//{
//	unsigned long long a[MAX] = { 1,1 };
//	int m, n;
//	int i;
//	int count = 0;
//	for (i = 3; i <= MAX - 1; i++)      //我有点不理解数组和max的关系，等会研究一下
//	{
//		a[i] = a[i - 1] + a[i - 2];        //一切都是以数组的下标形式来进行理解的，要是我设置为100，就会超出数组的范围，
//		printf("%llu ", a[i]);			//所以要设置成MAX-1  所以这样就解释了为什么当我们设置为100和90的时候的差异了，
//		                                //任何MAX数值的设置只要不超过数组的范围即可，
//		 		count++;			 // 但是这样只会算出来“87”个数字，因为我是从3开始的，所以我计算了从“第3位”到“MAX-1”。
//	}                                //输出的时候也是从“第三位”开始的
										//要是以后忘记了直接用“监视”就行，这个非常有用。
//	scanf("%d %d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//		count++;
//		if (count == 5)
//		{
//			printf(" %llu", a[i + 2]);
//			printf("\n");
//			count = 0;
//		}
//		else if (count == 1)
//		{
//			printf("%llu", a[i + 2]);
//		}
//		else
//		{
//			printf(" %llu", a[i + 2]);    //每行结尾空格
//		}
//	}
//	return 0;
//}
//
//

//void prime(int a, int b)
//{
//
//    int flag;    //标记是否是素数
//    int count = 0;    //记录素数个数，每10个换行
//    static int k;    //静态局部变量k，初始值默认为0
//
//    printf(k++ == 0 ? "[%d,%d]" : "\n\n[%d,%d]", a, b);
//
//    for (int i = a; i <= b; i++)
//    {
//        flag = 0;    //默认是素数
//
//        if (i == 2)
//        {    //特殊情况
//            printf("\n%d", i);    //换行
//            count++;
//            continue;
//        }
//
//        for (int j = 2; j < i; j++)
//        {    //判断每个数是否素数
//            if (i % j == 0)
//            {
//                flag = 1;    //不是素数
//            }
//        }
//        if (flag == 0)
//        {    //如果是素数
//            count++;    //素数个数+1
//            if (count % 10 == 1)
//            {               //余数为1，即每行开始前换行
//                printf("\n%d", i);
//            }
//            else
//            {
//                printf(" %d", i);    //每行结尾不空格
//            }
//        }
//
//    }
//}
//
//
//int main()
//{
//
//    int start, end;
//
//    while (scanf("%d %d ", &start, &end))
//    {    //处理到文件尾
//        prime(start, end);
//    }
//
//    return 0;
//}

//int main()
//{
//    int a, b, count = 0, d, e = 1, i, j;
//        while (scanf("%d %d", &a, &b) == 2)
//        {
//            printf("[%d,%d]\n", a, b);
//            for (i = a; i <= b; i++)
//            {
//                for (j = 2; j < i; j++)
//                {
//                    if (i % j == 0)
//                    {
//                        break;
//                    }
//                }
//                if (i == j)
//                {
//                    count++;
//                    if (count == 10)
//                    {
//                        printf(" %d", i);
//                        printf("\n");
//
//                        count = 0;
//                    }
//                    else if (count == 1)
//                    {
//                        printf("%d", i);
//                    }
//                    else
//                    {
//                        printf(" %d", i);
//                    }
//                }
//            }
//
//            count = 0;
//        }
//    return 0;
//}

//#define MAX 23
//int main()
//{
//	int a[MAX] = { 1,1 };
//	int count = 0;
//	int	i = 0;
//	for (i = 3; i <= MAX - 1; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		count++;
//		if (count == 5)
//		{
//			printf(" %d\n", a[i]);
//			count = 0;
//		}
//		else if (count == 1)                                       //这个方式可以很有效地将每一行的空格删除
//		{                                                          //还可以将最后一行的空格删除，完全是我自己写的，也不知道好是不好
//			printf("%d", a[i]);
//		}
//		else
//		{
//			printf(" %d", a[i]);    //每行结尾空格
//		}
//	}
///////////////////////////////////////////////////////////////////////// //////////// //////////// //////////// //////////
//	return 0;
//}

//#define MAX 50
//int main()
//{
//	int a[MAX] = { 1,3 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= MAX - 1; i++)
//	{
//		if (i == 0)
//		{
//			printf("%d", a[i]);
//			count++;
//		}
//		else if (i == 1)
//		{
//			printf(" %d", a[i]);
//			count++;
//		}
//		else
//		{
//			a[i] = a[i - 1] + (i + 1);
//			count++;
//			if (count == 10)
//			{
//				printf(" %d\n", a[i]);
//				count = 0;
//			}
//			else if (count == 1)                                  //这个方式可以很有效地将每一行的空格删除
//			{                                                     //还可以将最后一行的空格删除，完全是我自己写的，也不知道好是不好
//				printf("%d", a[i]);                               //我觉得还是很有效的，但是就是不知道好还是不好
//			}
//			else
//			{
//				printf(" %d", a[i]);    //每行结尾空格
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//    char  c[26], i;
//    for (i = 0; i < 26; i++)
//    {
//        c[i] = 'A' + i;;
//    }
//
//    for (i = 0; i < 26; i++)           //主要就是看数组的长度，因为数组和下标有非常密切的联系
//    {
//        if (i > 0)
//        {
//            printf(" ");
//        }
//        printf("%c%c", c[i], c[i] + 32);
//    }
//    return 0;
//}

//int main()
//{
//	int a[1001] = { 2 };
//	int i = 0, j = 0, k = 0;
//	int count = 1;
//
//	for (i = 0; count <= 1000; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			a[count] = i;
//			printf("%d ", a[count]);
//			count++;
//		}
//	}

	//while (scanf("%d", &i) == 1)
	//{
	//	if (count == 1)
	//	{
	//		printf("%d", a[i]);
	//	}
	//	else
	//	{
	//		printf(",%d", a[i]);
	//	}
	//}
//
//	return 0;
//}

//#define N 1001
//void Init(int* a, int n)
//{
//	int i, j, k, flg;
//	for (i = 1, k = 0; k < n; i++)
//	{
//		for (j = 2, flg = 1; flg && j * j <= i; j++)
//			if (i % j == 0)  flg = 0;
//		if (flg)
//			a[k++] = i;
//	}
//}
//int main()
//{
//	int a[N], n, k = 0;
//	Init(a, N);
//
//	while (scanf("%d", &n) == 1)
//	{
//		if (n <= 0)
//		{
//			break;
//		}
//		else
//			printf(k++ == 0 ? "%d" : ",%d", a[n]);
//	}
//	return 0;
//}

//冒泡排序（不使用函数）
//
//int main()
//{
//	int n, i = 0;
//	int j = 0, t = 0;
//	scanf("%d", &n);
//	int N[100];
//	for (i = 0; i <= n - 1; i++)
//	{
//		scanf("%d", &N[i]);
//	}
//
//	for (i = 0; i <= n - 2; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (N[j] < N[j + 1]);
//		}
//			{
//				t = N[j];
//				N[j] = N[j + 1];
//				N[j + 1] = t;
//			}
//	}
//
//	for (i = 0; i <= n - 2; i++)
//	{
//		printf("%d ", N[i]);
//	}
//	printf("%d", N[n - 1]);
//
//	return 0;
//}

//使用函数方法实现冒泡排序

//void bubbleSort(int arr[], int sz)
//{
//	int i, j, temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubbleSort(arr, sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void bubbleSort(float arr[], int N)
//{
//	int i, j;
//	float temp;
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	float arr[100];
//	int N = 0;
//	float m = 0;
//	int i = 0;
//
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%f", &m);
//		arr[i] = m;
//	}
//
//	bubbleSort(arr, N);
//
//	for (i = 0; i < N - 1; i++)
//	{
//		printf("%.4f ", arr[i]);
//	}
//	printf("%.4f", arr[N - 1]);
//	return 0;
//}

//void bianhuan(int a[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			a[i] = 2 * a[i];
//		}
//		if (i % 2 == 1)
//		{
//			a[i] = a[i] + 33;
//		}
//	}
//}
//
//int main()
//{
//	int a[100];
//	int i = 0, j = 0;
//	int n = 0;
//	int M = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &M);
//		a[i] = M;
//	}
//
//	bianhuan(a, n);
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", a[i]);                 //每行结尾空格
//	}
//	printf("%d", a[n - 1]);                  //这里的作用是让最后一个数字后面也没有空格
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	return 0;
//}

//#define ten 10
//
//int max(int a[], int sz)
//{
//	int i = 0;
//	int max = a[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (max < a[i])      //我觉得这个方式很有意思，直接将“最大值”等同于a[0],然后遍历数组，如果遇到比max大的数，则更新max
//		{                    //将max更新为当前比“max”大的数
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int a[ten];
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		a[i] = n;
//	}
//
//	max(a, 10);
//
//	printf("%d", max(a, 10));
//	return 0;
//}

//数组换位（逆序）
//int main()
//{
//	int a[10];
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d  ", &j);
//		a[i] = j;
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d,", a[i]);
//	}
//	printf("%d\n", a[9]);
//
//	for (i = 9; i > 0; i--)
//	{
//		printf("%d,", a[i]);
//	}
//	printf("%d", a[0]);
//	return 0;
//}

//编程读入10个整数存入数组中，数组前半段和后半段位置互换再输出。
//int main()
//{
//	int a[10];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &j);
//		a[i] = j;
//	}
//
//	for (i = 5; i < 10; i++)
//	{
//		printf("%d,", a[i]);
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d,", a[i]);
//	}
//	printf("%d\n", a[4]);
//	return 0;
//}

//int main()
//{
//	int a[20];
//	int i = 0;
//	int n = 0;
//	int max;             //值得注意的是，这里的“max”和“min”是全局变量
//	int min;             //“max”和“min”不能同时赋值为“a[0]” 如：int max = a[0], min = a[0]
//	int sum = 0;         //这样会导致“max”和“min”的值相同
//	float avg = 0;
//
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d", &n);
//		a[i] = n;
//		sum += n;
//	}
//
//	max = a[0];                             //应该在这里进行赋值操作
//	for (i = 1; i < 20; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//
//	min = a[0];
//	for (i = 1; i < 20; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	sum = sum - max - min;
//	avg = sum * 1.0 / 18;
//
//	printf("去掉一个最高分:%d分\n", max);
//	printf("去掉一个最低分:%d分\n", min);
//	printf("8号选手最后得分:%.3f分", avg);
//	return 0;
//}

//求数组中最大值（不使用函数）
//int main()
//{
//	int a[100];
//	int i = 0, k = 0;
//	int max = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		a[i] = k;
//	}
//
//	max = a[0];
//	for (i = 0; i < n; i++)
//	{
//		if (max < a[i]) 
//		{
//			max = a[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//求数组中最大值（使用函数）
//int max(int a[], int sz)
//{
//	int i = 0;
//	int max = a[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int a[100];
//	int i = 0, k = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		a[i] = k;
//	}
//
//	printf("%d", max(a, n));
//	return 0;
//}

//冒泡排序（不使用函数）
//int main()
//{
//	int a[10];
//	int i = 0, j = 0;
//	int n = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		a[i] = n;
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 10 - i - 1; j++)
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
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", a[9]);
//	return 0;
//}

//冒泡排序(多多理解一下原理最重要）
//int main()
//{
//	int a[10];
//	int i = 0, j = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &j);
//		a[i] = j;
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", a[n - 1]);
//	return 0;
//}