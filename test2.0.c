#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Fibionacci 数列的第n项 (使用递归)
//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//	return 0;
//}

//函数返回两个实数的和 (使用函数方法）
//float add(float a, float b)
//{
//	return a + b;
//}
//int main()
//{
//	float a, b, c;
//	scanf("%f %f", &a, &b);
//	c = add(a, b);
//	printf("%f", c);
//	return 0;
//}

//从三个整数中找出最大值 (使用函数方法)
//int add(int a, int b, int c)
//{
//	return a + b + c;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	d = add(a, b, c);
//	printf("%d", d);
//	return 0;
//}

//求两个整数的最大值 (使用函数方法)
//int max(int a, int b)
//{
//    if (a > b)
//        return a;
//    else
//        return b;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    c = max(a, b);
//    printf("The max is:%d.", c);
//    return 0;
//}

//函数返回三个整数中最大的值 (使用函数方法)
//第一种方法
//int max(int a, int b, int c)
//{
//	if (a > b && a > c)
//	{
//		return a;
//	}
//	if (b > a && b > c)
//	{
//		return b;
//	}
//	if (c > a && c > b)
//	{
//		return c;
//	}
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	d = max(a, b, c);
//	printf("%d", d);
//	return 0;
//}

//第二种方法
//int max(int x, int y, int z)
//{
//	// 声明变量m，并将x的值赋给m
//	int m = x;                    //这个进行“代换”的思想很重要，我还是要注意一下，有必要刻意地练习一下。
//	// 如果y大于m，则将y的值赋给m
//	if (y > m) m = y;             //m在这里是局部变量，只对函数内部有效，
//	// 如果z大于m，则将z的值赋给m     //m是一个中间变量，可以作为临时变量使用
//	if (z > m) m = z;
//	// 返回m，即三个整数中的最大值
//	return m;
//}
//int main()
//{
//	// 声明三个整数变量a, b, c
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d\n", max(a, b, c));
//	return 0;
//}
    //我现在写过的有关于函数的问题都是不用进行地址的传递的，但是我其实还是没有理解什么时候需要，什么时候不需要。多多学习。
    //现在我写的函数都是“传值函数”，都是只用进行值传递，不用进行地址的传递。
    //然后还有“传址函数”但是我还没有学到指针，所以这个先放一放。

//打印素数
//int main()
//{
//    int i, j, n;
//    for (i = 1; i <= 100; i += 2)   //这里flag的作用是让1加进来，要是没有flag的话，就不会打印“1”了。
//    {                               //因为1本身是素数，但是不会被打印的，所以这里要加上“flag”判断。
//        int flag = 1;             
//        for (j = 2; j < i; j++)   
//        {
//            if (i % j == 0)           //例子：i = 101，j = 3，这时候不满足if的条件，所以根本就不会进入循环。
//            {                         //若是i = 101，j = 2，这时候满足if的条件，所以会进入循环，然后break，跳出内层的for循环
//                flag = 0;             //此时flag = 0，说明i不是素数，所以不会打印。
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



//实数的四则运算
//float add(float a, float b)
//{
//    return a + b;
//}
//float sub(float a, float b)
//{
//    return a - b;
//}
//float mul(float a, float b)
//{
//    return a * b;
//}
//float div(float a, float b)
//{
//    return a / b;
//}
//int main()
//{
//    float a, b, c, d, e, f;
//    scanf("%f %f", &a, &b);
//    c = add(a, b);
//    d = sub(a, b);
//    e = mul(a, b);
//    f = div(a, b);
//    printf("%f %f %f %f", c, d, e, f);
//    return 0;
//}

//设计函数long next(long n){}，返回3n+1猜想中形式参数n的下一个值。例如：next(5)的值为16、next(16)的值为8等等。
//主函数的功能为读入一个整数n，输出变换到1的过程
//long next (long n)
//{
//    if (n % 2 == 0)
//    {
//        return  n / 2;
//    }
//    else if (n % 2 == 1)
//    {
//        return 3 * n + 1;
//    }
//}
//int main() 
//{
//    long n, count = 0;
//    scanf("%ld", &n);
//    while (n != 1) 
//    {
//        count++;
//        n = next(n);
//        printf("Times of %ld is %ld.\n", count, n);
//    }
//    return 0;
//}



//设计主函数的功能为读入一个100分制的分数，输出5分制成绩
//int get(int n)
//{
//    if (n >= 0 && n < 10)
//        return 0;
//    else if (n >= 10 && n < 40)
//        return 1;
//    else if (n >= 40 && n < 60)
//        return 2;
//    else if (n >= 60 && n < 70)
//        return 3;
//    else if (n >= 70 && n < 80)
//        return 4;
//    else if (n >= 80 && n <= 100)
//        return 5;
//    else
//        return -1;
//}
//int main()
//{
//    int i, a;
//    scanf("%d", &i);
//    a = get(i);
//    printf("%d", a);
//    return 0;
//}

//编写函数返回形式参数（一个正整数）是否为回文数
// 定义一个函数，找出指定范围内的所有回文数并打印
//int palindromic(int n, int m)
//{
//	int i, j, k, count = 0;
//	for (i = n; i <= m; i++)
//	{
//		// 初始化变量
//		k = 0; j = i;     //k 用于存储反转后的数值。
//		// 反转当前数值
//		while (j)
//		{
//			k = k * 10 + j % 10;    
//			j /= 10;
//		}
//		// 判断是否为回文数，如果是，则计数加一
//		if (k == i) count++;
//		// 根据条件打印回文数
//		if (k == i && count == 1)
//			printf("%d", k);
//		if (k == i && count != 1)
//			printf(",%d", k);
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	palindromic(n, m);
//	return 0;
//}

//编写函数，函数的形式参数为两个整数a和b(0<a<=b),函数返回a与b之间所有整数的和。
//要求分别用非递归和递归两种方式分别实现，并请尝试不同的递归策略。主函数中输入两个整数m和n，输出从m到n之间连续整数的和
// 非递归实现
//int main()
//{
//    int a, b, i, sum = 0;
//    scanf("%d %d", &a, &b);
//    for (i = a; i <= b; i++)
//    {
//        sum += i;
//    }
//    printf("%d", sum);
//    return 0;
//}

// 递归实现
//int SUM(int a, int b)
//{
//    if (a == b)  // 如果只有一个数，直接返回该数
//        return a;
//    else  // 否则返回当前数加上后面的所有数字之和
//        return a + SUM(a + 1, b);
//}
//
//int main()
//{
//    int m, n;
//    scanf("%d%d", &m, &n);
//    printf("%d", SUM(m, n));
//    return 0;
//}



/*编程输出[a,b]区间内所有素数，输出格式为10个素数一行，素数间以一个空格分隔。请设计函数void prime(int a,int b)完成上述功能。
主函数中输入若干整数对，表示有若干组数据，每组数据先输出区间，再输出区间内所有素数，每组输出间有一个空行。*/
//我自己的思路和答案。（我的答案肯定是没有问题的，因为我的输出和标准答案是一样的。）
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

//标准的思路和答案
//#include<math.h>
//
//void prime(int a, int b)
//{
//    static int k = 0; // 用于统计 prime 函数被调用的次数，静态变量可以在多次调用中保持值不变。
//    if (k++ == 0) 
//    { // 如果是第一次被调用，则输出闭区间信息和一个换行符。
//        printf("[%d,%d]\n", a, b);
//    }
//    else 
//    { // 否则输出一个新的闭区间信息和一个换行符。
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

//暂时先不做这个题目，等今天晚上的时候再做。
//int main()
//{
//    int a, b;
//    for (int i = 1;; i++)
//    {
//        scnaf("%d %d", &a, &b);
//
//    }
//}


/*对输入的算式进行简单的运算，输出算式结果。运算符只会是加+、减-、乘*、除/、求余%、阶乘！之一。
输出运算的结果，如果出现除数为零，则输出“error”,如果求余运算的第二个运算数为0，也输出“error”。*/
//自己写的
int add (int a, int b)
{
    return a + b;
    printf("\n");
}
int bdd (int a, int b)
{
    return a - b;
    printf("\n");
}
int cdd (int a, int b)
{
    return a * b;
    printf("\n");
}
int ddd (int a, int b)
{
    return a / b;
    if (b == 0)
    {
        printf("error");
    }
    printf("\n");
}
int edd (int a)
{
    return a * edd (a - 1);
    printf("\n");
}
int fdd(int a, int b)
{
    return a % b;
    if (b == 0)
    {
        printf("error");
    }
    printf("\n");
}

int main()
{
    int a, b;
    scanf("%d + %d", &a, &b);
    printf("\n");
    printf("%d", add(a, b));

    scanf("%d - %d", &a, &b);
    printf("\n");
    printf("%d", bdd(a, b));

    scanf("%d * %d", &a, &b);
    printf("\n");
    printf("%d", cdd(a, b));

    scanf("%d / %d", &a, &b);
    printf("\n");
    printf("%d", ddd(a, b));

    scanf("%d !", &a);
    printf("\n");
    printf("%d", edd(a));

    scanf("%d % %d", &a, &b);
    printf("\n");
    printf("%d", fdd(a, b));

    scanf("%d    /%d", &a, &b);
    printf("\n");
    printf("%d", ddd(a, b));

    scanf("%d/%d", &a, &b);
    printf("\n");
    printf("%d", ddd(a, b));
    return 0;
}