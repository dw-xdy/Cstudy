#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//自己写的，写的什么都不是（这个就当做课后作业来做吧）
//void ejz(int a)
//{
//	int count = 0;
//	if (a == 0)
//	{
//		return;
//	}
//	ejz(a / 2);
//	int b = a % 2;
//	if (b == 1)
//	{
//		count++;
//		
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int a = 10;
//	ejz(a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	return 0;
//}

//Fibonacci数列本来讨论的就是兔子的对数，而不是兔子的总数。
//int main()
//{
//    int sum[47] = { 0,1 };    //定义数组并赋初始值
//    int n, inte;
//    for (int i = 2; i <= 46; i++)
//    {                             //范围内的每个月的兔子总数，而且本来就是兔子的对数，
//        sum[i] = sum[i - 1] + sum[i - 2];
//    }
//    scanf("%d", &inte);
//    for (int i = 0; i < inte; i++)
//    {                              //测试组数，不是说一组最开始有多少个兔子，而是有多少组测试，每组测试最开始都是只有一个兔子
//        scanf("%d", &n);
//        printf("%d\n", sum[n]);
//    }
//    return 0;
//}

//这里我只用了一组数据测试。
//int main()
//{
//    int sum[47] = { 0,1 };    //定义数组并赋初始值
//    int n, inte;
//    for (int i = 2; i <= 46; i++)
//    {    //范围内的每个月的兔子总数
//        sum[i] = sum[i - 1] + sum[i - 2];
//    }
//    scanf("%d", &inte);
//    scanf("%d", &n);
//    printf("%d\n", sum[n]);
//    return 0;
//}

//int nyr(int a, int b, int c)
//{
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//	{
//
//	}
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	return 0;
//}

// 计算给定日期是该年的第几天
//int day(int y, int m, int d)
//{
//    // 定义月份对应的天数数组
//    int i, sum = 0, a[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    // 计算月份之前的天数总和
//    for (i = 0; i < m - 1; i++)
//    {
//        sum = sum + a[i];
//    }
//    // 加上当前月份的天数
//    sum = sum + d;
//    // 判断闰年并且当前月份大于等于3月时，加1天
//    if ((y % 4 == 0 && y % 100 != 0 || y % 400 == 0) && m >= 3)
//    {
//        sum = sum + 1;
//    }
//    return sum; // 返回天数总和
//}
//
//// 主函数
//int main(void)
//{
//    int y, m, d;
//    int m1, d1;
//    scanf("%d%d%d%d%d", &y, &m, &d, &m1, &d1); // 输入日期信息
//    printf("%d", day(y, m1, d1) - day(y, m, d)); // 输出两个日期之间相差的天数
//    return 0;
//}

//int main()
//{
//	int i, j, m, n, a = 0, b, c[100];
//	scanf("%d %d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//				if ()
//				if ( - c[a] == 2)
//				{
//					printf("%d,%d\n", c[a], c[a + 2]);
//			    }
//		}
//	}
//	return 0;
//}

//
//#include <math.h>
//#define MAX 20000
//
//int is_prime(int n)
//{
//	int i, limit = sqrt(n);
//	if (n <= 1)
//	{
//		return 0;
//	}
//	for (i = 2; i <= limit; i++) 
//	{
//		if (n % i == 0) 
//		return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int m, n, i, j, cnt = 0;
//	scanf("%d%d", &m, &n);
//	for (i = m + 1; i < MAX; i++)
//	{
//		if (is_prime(i) && is_prime(i + 2)) 
//		{
//			cnt++;
//			printf("%d,%d\n", i, i + 2);
//			if (cnt == n)
//			{
//				break;
//			}
//		}
//	}
//	return 0;
//}


//
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
//                    printf("%d ", i);
//                }
//                if (count == 10)
//                {
//                    printf("\n");
//                    count = 0;
//                }
//            }
//            printf("\n\n");
//            count = 0;
//        }
//    return 0;
//}


//#include<math.h>
//
//void prime(int a, int b)
//{
//    static int k = 0; // 用于统计 prime 函数被调用的次数，“静态变量”以在多次调用中保持值不变。
//    if (k++ == 0) 
//    {              // 如果是第一次被调用，则输出闭区间信息和一个换行符。
//        printf("[%d,%d]\n", a, b);
//    }
//    else 
//    {          // 否则输出一个新的闭区间信息和一个换行符。
//        printf("\n[%d,%d]\n", a, b);
//    }
//
//    int i, j, count = 0, flag = 1;
//    for (i = a; i <= b; i++) // 遍历闭区间内的每个数字。
//    {
//        flag = 1; // 每次迭代都初始化 flag 标记为 1。
//        if (i < 2)
//            flag = 0;
//        for (j = 2; j <= sqrt(i); j++) // 在范围内检查每个数是否为素数。
//        {
//            if (i % j == 0) // 如果存在因子 j 可整除，则该数字不是素数。
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1) // 对于每个找到的素数，输出并统计数量，格式化输出结果。
//        {
//            if (count % 10 == 9)  // 每找到十个素数后换行
//            {
//                printf(" %d\n", i);
//            }
//            else if (count % 10 == 0)  // 每找到十个素数后在行首输出
//            {
//                printf("%d", i);
//            }
//            else
//            {
//                printf(" %d", i); // 输出素数，并以空格分隔
//            }
//            count++;
//        }
//    }
//    if (count % 10 != 0) // 在所有数字都输出完成后，如果最后一行没有满 10 个数字，则主动插入一个换行符。
//        printf("\n");
//
//    return;
//}
//
//int main()
//{
//    int m, n;
//    while (scanf("%d%d", &m, &n) != EOF)
//    {
//        prime(m, n);
//    }
//    return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c;
//	a = 10;
//	b = ++a;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//sizeof不是函数，而是运算符，它返回变量或表达式的字节大小。



//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//上述代码的输出结果为：a = 1， b = 2， c = 3， d = 4。
//因为a++是“先使用，后++”所以在i进行运算的时候，a先进行使用，a = 0，所以后面就不用看了，不会执行了。
//后面的b和d都是不会进行运算的。

//这里最重要的一个思想是“运算的优先级”。

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = ++b && a++ && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//这时候运算的结果为：a = 1， b = 3， c = 3， d = 5。
// //因为++b是“先++，后使用”所以在i进行运算的时候，b先进行++，b = 3，
// 然后a++，a = 1，但是因为a++是先试用后++，所以a = 0的时候，后面的d++不会进行运算。
//所以最后的结果是a = 1， b = 3， c = 3， d = 4。
// 综上：运算的时候是从左到右进行的，要是左边的的都不满足条件，就不会向右进行运算。