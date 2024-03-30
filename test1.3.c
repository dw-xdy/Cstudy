#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

//我写的第一个Switch语句，这个是最简单的应该
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	}
//	return 0;
//}

//打印1——10的整数
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}

//有了“continue”的情况
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)       //这里有地方需要注意的是：这是个“循环语句”，所以，无论自己打出多少字符都会被打印出来，
//	{                                     //只不过我输入了7个字符，那就直接调用14次getchar 和 putchar函数。因为还有“空格”代表的\n。
//		putchar(ch);                      //用Crtl+z停止。
//	}									  //有时候按三次Crtl+z才能停止，这个是一个小bug，不用太在意。
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):");          //这时候无论输入的是什么都会直接输出“No”因为getchar会将"\n"直接读取，所以就直接进入到了else。
////////////////////////////////	getchar();
//	int ret = getchar();				//这时候直接输入再输入一个“getchar”就行，但是这种方法非常低效。
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	printf("请确认密码(y/n):");
//	int ch = 0;
//	while ((ch = getchar()) != '\n')					//用一个while循环语句，然后直接进行读取，知道读取到“\n”，就能进行没有限制的输入了
//	{
//		;
//	}
//	int ret = getchar();
//	if ('y' == ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')      //要好好使用“监视”功能，监视功能可以让自己看清楚代码是“如何运转”的。
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

/*小明和小华的年龄之和是m
岁。n年后，小明的年龄将
是小华年龄的两倍。请问小
明和小华现在各有多少岁 ?*/
//int main()
//{
//	int x, y, m, n;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	y = (m - n) / 3;
//	x = 2 * m / 3  + 1 * n / 3 ;
//	if (0 != x && 0 != y &&  0 == m % 3 && n%3 == 0 && m == 2 * n)  //一定要有限定条件，因为这个的条件是决定性的，
//		printf("小明年龄为%d岁 小华年龄为%d岁", x, y);                 //毕竟年龄一点是整数，而且是正整数，而且“m”和“n”之间也是有关系的。
//	else
//		printf("错误");
//	return 0;
//}

//int main()
//{
//	int m, n, x, y;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	x = 1 * m / 3  + 1 * n / 3 ;               //1/3m +1/3n 就是这样表达的，这样可以进行直接表示。
//	printf("%d", y);                          // x = 1 * m / 3  + 1 * n / 3 ;
//	return 0;
//}

/*给定N个正整数，请统计奇数和偶数各有多少个？

输入格式：
输入第一行给出一个正整数：N（≤1000）；第2行给出n个非负整数，以空格分隔。

输出格式：
在一行中先后输出奇数的个数、偶数的个数。中间以1个空格分隔。*/
//int main()
//{
//    int N = 0;
//    int n = 0;
//    int j = 0;
//    int s = 0;
//    scanf("%d", &N);                          //先写一个“N”，“N”的意思是自己想要判断多少个数字是“技术和偶数”
//
//    for (int i = 0; i < N; i++)              //随便定义一个“i”，这个“i”以后永远不会出现，因为“i”只是用来帮助这个代码进入循环的的东西。
//    {                                        //这个“i ”的意义是能输入几个数字，或者说是“循环几次”，N = 循环次数。
//
//        scanf("%d", &n);                       //然后用“n”代表自己“输入”的数字。
//        if (n % 2 == 0)                        //但是“n”每次只用一次，然后看自己输入了几个数字，n就能输入几次。
//        {
//            s++;//偶数的个数                  //然后用if else语句判断是“偶数还是奇数”
//        }                                      //因为最开始设置的是s和j都 = 0；所以后面会自动进行增加。
//        else
//        {
//            j++;//奇数的个数
//        }
//    }
//    printf("%d %d", j, s);
//    return 0;
//}

//打印9 * 9 乘法表
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)                     //一定要理解好各个符号的意思和意义。
//    {                                            // 这个是一个“双重循环”一定要理解了。
//        for (j = 1; j <= i; j++)                 //“++”的意思是先给“b”一个值“a”，然后再让“a加上1”
//        {
//            printf("%d*%d=%-4d", j, i, i * j);          //“-4d”的意思是“对一个变量来说，这个“变量”占位“4个空格”的距离。
//        }                                               //这样就可以保证整体的美观整洁性。
//        printf("\n");                                  //说白了就是在利用这个for循环的“嵌套特性”，让“i”循环一次的时候，“j”可以循环“i”次
//    }
//    return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// 阶乘的运算
//int main()
//{
//    int n;
//    int i;
//    int s = 1, S = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        s = s * i;       //阶乘的表达式。（每个阶乘的表达式）          // “for循环”我觉得还是有点不好理解的，自己还是要多多写一下运算式，才能更好理解“for循环”。
//        S = S + s;      // 阶乘的求和。
//    }
//    printf("%d", S);
//}

////计算数字的平方和
//int main()
//{
//	int a, b, c, d = 0;
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		c = b * b;                //这个题目和上面的题目是一样的，说白了就是先进行“单个运算”的进行，然后
//		d = d + c;                //进行“累加”求和。
//	}
//	printf("%d", d);
//	return 0;
//}
// 在上面两个题目中，注意要运用“迭代”的思想，第一步进行“单个运算”的时候，用的就是“迭代”的思想。
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	int N, i, s;
//	float sum;
//	scanf("%d", N);
//	for (i = 1; i <= N; i++)
//	{
//		s = i - (i + 1) / (i + 2);
//	}
//
//
//	return 0;
//}

//int main()
//{
//    int a = 1, b = 1, flag = 1;
//    double sum = 0;
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum += a * 1.0 * flag / b;          //这里的浮点数的运算是有点不一样的， “a和b”都是int类型的，但是我需要输出的是float类型的，
//        flag++;//控制分子
//        a = -a;//这里的作用是为了显示+-交替
//        b += 2;
//    }
//    printf("%.3lf", sum);
//}

// 写代码 == 办法（编程思维） + 写代码（按照语法形式去写）
//编程思维是需要训练的。（用计算机的思维去解决问题）

//计算“n”的阶乘
// 思路：先想好“n”的阶乘是什么：n！= 1 * 2 * 3......*
//int main()
//{
//	int n = 1, N, a = 0;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		n *= i;    // 这个算式的意思是进行无论输入多大的数字，以前的数字都是要重新乘一遍的，所以才能进行阶乘的计算
//		a += n;
//	}
//	printf("%d", a);
//	return 0;
//}

/* praise1.c -- uses an assortment of strings */
//#include <stdio.h>
//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
//    char name[40];
//
//    printf("What's your name? ");
//    scanf("%s", name);
//    printf("Hello, %s. %s\n", name, PRAISE);
//
//    return 0;
//}

//int main()
// {
//    int i, sum = 0, x, n = 8;
//    float y;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d ", &x);
//        sum += x;
//    }
//    y = sum * 1.0 / 8;             //要是没有“1.0”这个数字，那么我自己输出来的是整数，因为这一步中“sum / 8”是整数，
//    printf("%.2f\n", y);            //但是我想要的是“浮点数类型”
//    return 0;
//}
//
//int main()
//{
//    float c, a, b;
//    scanf("%f %d", &a, &b);
//    c = a / b;                    //这里的“a和b”都是“int类型”，然后进行运算的时候运行出来的结果是“int类型”
//    c = a * 1.0 / b;              //也就是说：算出来的东西和接收的东西是分开的。例子：3 / 2 == 1.5，但是“整数运算”出来的是“1”
//    printf("%.1f", c);            //接收的“c”虽然是浮点数类型，但是它将接收的是“1”也就是说转化出来的的是“1.0”。
//    return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////1. 求“100——200之间素数”使用“遍历”的方法
//int main()
//{
//	int i, j;
//	int flag = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)          //素数的意思是只有1和其本身能将自己除尽。
//			//但是这里我有一个不理解的地方，这个for循环中“j<=i”这个时候不是把j=i了吗？应该除尽了，但是没有除尽
//			//而且我重新试了一下“j<i”这样也是没问题的，而且这两种形式连“循环次数”都没有变，理解不了。
//		{
//			if (i % j == 0)            //这个式子的意义是“输入一个i，然后让j从2开始一直和i整除，知道j增加到i。
//			{
//				break;
//			}
//			count1++;
//		}
//		count2++;
//		if (i == j)                     // 这个时候内层的“for循环”已经运行完了，只用运行“外层的if语句”了
//			printf("%d  ", i);         //有必要注意一下“%d ”中d后面的空格，不然就会产生误会，比如输入“5”
//									  // 然后会出现“2， 3， 5”三个素数，但是没加空格就会看成“235”这样会让自己误会
//	}
//	printf("\n内层count=%d", count1);
//	printf("\n外层count=%d", count2);
//	return 0;
//}
//2. 优化1：减少遍历的长度
//int main()
//{
//	int i, j;
//	int flag = 0;
//	//int count1 = 0;
//	//int count2 = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < (i / 2); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			//count1++;
//		}
//		//count2++;
//		if (j >= i / 2)
//			printf("%d  ", i);
//	}
//	//printf("\n内层count=%d", count1);
//	//printf("\n外层count=%d", count2);
//	return 0;
//}

//3.优化2：剔除偶数 并进行求和。
//int main()
//{
//	int i = 0, j = 0, sum = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			sum += i;
//			count++;
//		}
//	}
//	printf("\n%d ", sum);
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//计算1到任何数的素数以及“素数和”
//int main()
//{
//	int N, i, j, sum = 0, sum1 = 0;
//	scanf("%d", &N);
//	printf("1 ");
//	for (i = 1; i <= N; i++)
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
//			printf("%d ", i);
//			sum += i;
//		}
//
//	}
//	sum1 = sum + 1;
//	printf("\n%d", sum1);
//	return 0;
//}

//求两个数的最大值,自己定义函数并且使用函数的方式。
//int add(int x, int y)  //自己写的  返回值类型，  函数名，  参数。
//{
//	if (x >= y)
//	{
//		return x;         //函数最终是要返回一个值的，或者说是要输出一个值。
//	}                     //若是没有“返回值类型”，那就另当别论了，就不用输出了
//	if (x < y)
//	{
//		return y;          //函数的最后结尾不一定是“return”。当函数没有返回值的时候就不用写“返回值”了。
//	}
//}
//
//int main()
//{
//	int m = add(765, 1);    //函数的调用在使用的时候要先进行“声明”，
//
//	printf("%d\n", m);      //最后输出的时候进行“返回值”的输出。
//	return 0;
//}

//老师写的
//get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{                    
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);    //输出的时候一定要注意格式问题，要是scanf中的“转换符号”之间用“，”隔开，那自己写数字的时候也要用“，”隔开。
//
//	int m = get_max(a, b);     //我需要做的是把函数用一个变量代替，然后进行将其返回值输出。
//
//	printf("%d\n", m);
//}

//////////写一个函数可以交换两个整形变量的内容。
////////int change(int x, int y)           //自己写的，什么都不是。根本运行不出来
////////{
////////    int z = 0;
////////    z = x;
////////    x = y;
////////    y = z;
////////    printf("%d %d", x, y);
////////}
////////
////////int main()
////////{
////////    int m = change(7, 4);
////////    printf("%d", m);
////////    return 0;
////////}

//水仙花数  利用三重循环的方式进行计算
//int main()
//{
//    int a, b, i, j;
//    for (i = 1; i < 10; i++)       //还是要好好理解“for”循环中的的“嵌套”和“break 和 continue”。
//    {
//        for (j = 0; j < 10; j++)
//        {
//            for (a = 0; a < 10; a++)
//            {
//                if (i * 100 + j * 10 + a * 1 == i * i * i + j * j * j + a * a * a)
//                {
//                    b = i * 100 + j * 10 + a * 1;
//                    printf("%d ", b);
//                }
//            }
//        }
//    }
//    return 0;
//}

//水仙花数,利用单个循环的方式进行计算
//int main() 
// {
//    int num, hundreds, tens, ones;
//
//    for (num = 100; num <= 999; num++) 
// {
//        hundreds = num / 100;
//        tens = (num / 10) % 10;
//        ones = num % 10;
//
//        if (num == (hundreds * hundreds * hundreds + tens * tens * tens + ones * ones * ones))
//        {
//            printf("%d\n", num);
//        }
//    }
//    return 0;
//}



//输出21世纪中截止某个年份以来的所有闰年年份。输入在一行中给出21世纪的某个截止年份
//int main()
//{
//    int year, i;
//    printf("请输入截止年份: ");
//    scanf("%d", &year);
//    printf("21世纪中截止%d年以来的所有闰年年份:\n", year);
//    for (i = 2000; i <= year; i++)
//    {
//        if (i % 4 == 0 && (i % 100 !=  0 || i % 400 == 0))
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



//阶乘的运算  (使用“循环（迭代）”的方式写代码。）
//int main()
//{
//	int i, n, j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j *= i;
//	}
//	printf("%d", j);
//	return 0;
//}

//使用“递归”的方式写“阶乘”的代码
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//	return 0;
//}
//int main()
//{
//	求n 的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//递归的方式
//	printf("%d\n", ret);
//}



//输入在一行中给出两个正整数M和N（1≤M≤N≤500）。
//输出M到N之间的所有素数，并计算它们的和。
// 主函数：程序入口
//int main()
//{
//	// 定义变量
//	int M = 0, N = 0, i, j, sum = 0, a = 0;
//	// 输入M和N的值
//	scanf("%d %d", &M, &N);
//	// 循环从M到N
//	for (i = M; i <= N; i++)
//	{
//		// 内层循环，判断i是否为素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				// 若能整除则跳出循环
//				break;
//			}
//		}
//		// 若j等于i，表示i为素数
//		if (i == j)
//		{
//			// 素数个数加1，累加素数的和
//			sum += i;
//			a++;
//		}
//	}
//	// 输出素数个数和素数的和
//	printf("%d ", a);
//	printf("%d ", sum);
//	// 返回程序执行成功
//	return 0;
//}

//计算居民水费
//int main()
//{
//	int x;
//	float y;      //注意一下这个“float”
//	scanf("%d", &x);
//	if (x <= 15)
//	{
//		y = 4 * x / 3;
//	}
//	else
//	{
//		y = 2.5 * x - 17.5;
//	}
//	printf("%.2f", y);
//	return 0;
//}

//统计学生平均成绩和及格人数
//int main()
//{
//	int N, i, j, sum = 0, count = 0;
//	float average = 0;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &j);
//		sum += j;
//		if (j >= 60)
//		{
//			count++;
//		}
//	}
//	average = sum * 1.0 / N;            //就像是我在CSDN上写的文章一样，接收的和计算的东西是分开的。一定要注意这一点。
//	printf("average = %.1f\n", average);
//	printf("count = %d", count);
//	return 0;
//}


 //输出三角形面积和周长
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	float area, perimeter, s;
//	scanf("%d %d %d", &a, &b, &c);
//	s = (a + b + c) / 2.0;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	perimeter = a + b + c;
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		printf("area = %.2f; perimeter = %.2f", area, perimeter);
//	}
//	else
//	{
//		printf("These sides do not correspond to a valid triangle");
//	}
//	printf("\n%.2f", s);
//	return 0;
//}

//用C语言实现斐波那契数列用循环的方式
//int main()
//{
//    int n, i, a = 0, b = 1, c;
//    printf("输入项数: ");   //输入“n”的值
//    scanf("%d", &n);
//    printf("斐波那契数列: ");
//    for (i = 1; i <= n; ++i)
//    {
//        printf("%d, ", a);
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return 0;
//}



//用C语言实现斐波那契数列用“递归”的方式
//int Fibonacci(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;     //斐波那契数列的第一个数和第二个数都是1
//    else
//        return Fibonacci(n - 1) + Fibonacci(n - 2);   //递归的方式
//}
//int main()
//{
//    int n, i, a = 0, b = 1, c;
//    printf("输入项数: ");   //输入“n”的值
//    scanf("%d", &n);
//    printf("斐波那契数列: ");
//    for (i = 1; i <= n; ++i)
//    {
//        printf("%d, ", Fibonacci(i));
//    }
//    return 0;
//}

//求和函数
//void sum(int begin, int end)     //返回类型是“void”的，函数名是“sum”，参数是“begin”和“end”
//{
//	int i, sum = 0;
//	for (i = begin; i <= end; i++)
//	{
//		sum += i;
//	}
//	printf("%d到%d的和为：%d\n", begin, end, sum);
//}
//int main()
//{
//	sum(1, 10);
//	sum(10, 20);
//	sum(20, 30);
//	return 0;
//}

/*函数名（参数值）：
()起到了表示函数调用的重要作用
即使没有参数也需要()
如果有参数，则需要给出正确的数量和顺序
这些值会被按照顺序依次用来初始化函数中的参数*/

//void cheer(viod)    //第一个void表示一个函数没有返回值，第二个void表示函数没有参数
//{
//    printf("cheer\n");
//}
//
//int main()
//{
//    cheer;
//    cheer();
//    return 0;
//}


//交换两个数字的值
//void swap(int a, int b);  //形式参数  （参数）
//
//int main()
//{
//	int a = 10, b = 20;
//	swap (a, b);        //实际参数  （值）
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}
//
//void swap(int x, int y)  //形式参数  （参数）      //C语言在调用函数时，永远只能传值给函数
//{										 //上面式子中的“ a和b ”和我们定义了的函数中的“ x和y ”是两个不同的变量
//	int t = x;							//他们是没有任何关系的变量
//	x = y;								//打开监视的时候可以看到，x和y的值已经发生了变化
//	y = t;								//但是a和b的值并没有变化
//}


//编程输入一个实数，输出它的平方根，输出结果保留6位小数
//#include <math.h>
//int main()
//{
//	float a, b;
//	scanf("%f", &a);
//	b = sqrt(a);
//	printf("%.6f", b);
//	return 0;
//}

//编程输入一个角度值r，输出角的正弦值和余弦值
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%lf %lf", sin(a * 3.14159265358979323846 / 180), cos(a * 3.14159265358979323846 / 180));
//	return 0;
//}

//编程输入若干个角度的值，输出它们的正弦值和余弦值。
//int main()
//{
//	float f;
//	while (scanf("%f", &f) == 1)
//	{
//		printf("%lf %lf\n", sin(f * 3.14159265358979323846 / 180), cos(f * 3.14159265358979323846 / 180));
//
//	}
//	return 0;
//}

//另一种方法，我感觉也可以进行运算。
//int main()
//{
//	int i, n;
//	for (i = 0; ; i++)
//	{
//		scanf("%d", &n);
//		printf("%lf %lf\n", sin(n * 3.14159265358979323846 / 180), cos(n * 3.14159265358979323846 / 180));
//	}
//	return 0;
//}


//循环输出“好好学习，天天向上！”
//void fun()
//{
//	printf("好好学习，天天向上！\n");
//}
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	while (n--) 
//	{
//		fun();
//	}
//	return 0;
//}


//请设计有参函数输:void print_star(int n)，功能为输出n个星号。在主函数中输入正整数N，输出N行如样例所示的字符图形。
//void print_star(int n)
//{
//	int i, a;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		printf("*");
//	}
//}
//
//int main()
//{
//	print_star(1);
//	print_star(3);
//	print_star(5);
//	return 0;
//}


// 定义名为print_star的函数，该函数接受一个整数n作为参数
//void print_star(int n)
//{
//    int i, j, t;
//    t = n;
//    // 循环打印n行星号图案
//    for (i = 1; i <= n; i++)
//    {
//        // 打印空格
//        for (j = t - 1; j > 0; j--)
//        {
//            printf(" ");
//        }
//        t = t - 1;
//        // 打印星号
//        for (j = 0; j < 2 * i - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//// 主函数
//int main(void)
//{
//    int n;
//    // 从用户输入中读取整数n
//    scanf("%d", &n);
//    // 调用print_star函数打印星号图案
//    print_star(n);
//    return 0;
//}



// 定义函数：打印星号
void print_star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*"); // 打印星号
        }
        printf("\n"); // 打印换行符
    }
}

// 主函数
int main()
{
    int N;
    scanf("%d", &N); // 读取输入值
    print_star(N); // 调用打印星号函数
    return 0;
}











