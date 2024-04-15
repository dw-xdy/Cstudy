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
//		if (is_prime(i) && is_prime(i + 2))    //这里是要满足“i和i + 2”是不是同时为素数，若是同时为素数才能输出
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


//int ss(int a)
//{
//	int flag = 1;
//	for (int j = 2; j < a; j++)
//	{
//		if (a % j == 0)
//		{
//			flag = 0;
//			return 0;
//		}
//	}
//	if (flag == 1)
//	return 1;
//}
//
//int main()
//{
//	int m, n, count = 0;
//	scanf("%d%d", &m, &n);
//	for (int i = m; i < 20000; i++)
//	{
//		if (ss(i) && ss(i + 2))
//		{
//			count++;
//			printf("%d,%d\n", i, i + 2);
//			if (count == n)
//			{
//				break;
//			}
//		}
//	}
//	return 0;
//}


//自己写的，写到怎么表达这里了
//int fj(int a)
//{
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				return 0;
//			}
//		}
//		if (flag == 1)
//		{
//			if (a == i )
//		}
//	}
//	return 1;
//}


//看不懂，等等再看。
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

//输出一个数字是“完美数”若是则输出该数字，若不是就不输出
//int main()
//{
//	int a, sum = 0;
//	scanf("%d", &a);
//	for (int i = 1; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			sum += i;
//			if (a == sum)            //这样不对的原因是：在中间的一次循环中，sum == 24 ，所以输出24
//			{                        //但是我想要的是将所有的约数都算出来之后，再进行相加，所以应该改进成下面这样
//				printf("%d\n", a);
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, sum = 0;
//	scanf("%d", &a);
//	for (int i = 1; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (a == sum)
//	{
//		printf("%d\n", a);     //将其跳出去，这样就可以将所有的约数都算出来之后，再进行相加。
//	}
//	return 0;
//}

//我终于是自己写的了，也算是一个小小的进步了，这个应该不算是一个很难的题目，但是我写出来还是很开心的，个人认为写的还是可以的
//int wqs(int a)
//{
//	int sum = 0;
//	for (int i = 1; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (a == sum)
//	{
//		printf("%d\n", a);
//	}
//	if (a != sum)
//	{
//		wqs(a + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	wqs(N);
//	return 0;
//}

//我的答案，算出来的东西也是正确的，但是我去放到PTA上还是没过，不知道是那里的问题
//int geshu(int a)
//{
//	int count = 0;
//	int flag = 1;
//	for (int i = 1; i <= a; i++)
//	{
//		if (a % i == 0)
//		{
//			count++;
//		}
//	}
//	for (int i = 1; i <= count; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0) 
//			{
//				flag = 0;      //数字只有在进去这两个for循环和if之后才会判断flag是否为0；
//				break;         //若是没有进去则flag为1；
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("%d\n", count);
//	}
//	if (flag == 1)
//	{
//		printf("%d (Prime)\n", count);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		geshu(n);
//	}
//	return 0;
//}





//标准答案我也要好好看看这个，总结一下经验教训。
// 计算正整数 n 的约数个数
//int yueshu(int n)
//{
//	int i, count = 0;   // 定义变量 i 和计数器 count
//	for (i = 1; i <= n; i++) // 循环判断 1~n 中哪些数是 n 的约数
//	{
//		if (n % i == 0)    // 如果 i 是 n 的约数，则计数器加 1。
//			count++;
//	}
//	return count;     // 返回约数个数
//}
//
//int main()
//{
//	int n, t;          // 定义变量 n（输入数据）和 t（约数个数）
//	while (scanf("%d", &n) != EOF) // 不断读入输入数据，直到读到文件末尾为止
//	{
//		t = yueshu(n);          // 调用 yueshu 函数计算 n 的约数个数，返回结果存储在 t 中
//		if (t == 2)              // 判断 t 是否等于 2，如果是，说明 n 是素数
//			printf("%d (Prime)\n", t);
//		else                  // 否则，输出其约数个数
//			printf("%d\n", t);
//	}
//}

//int main()             //关键是看在哪里定义的，要是在括号内部被定义就要
//{
//	int a = 0;
//	a = 10;
//	if (a > 3)
//	{
//		a = 20;
//	}
//	printf("%d\n", a); 
//	return 0;
//}

//不使用函数，直接用循环求斐波那契数列
//很有意思的一个程序，有点难以理解，但是这样的程序真的很有趣。很高效
//int main()
//{
//    int a = 0;  // 初始化变量a为0
//    int b = 1;  // 初始化变量b为1
//    int c = 0;  // 初始化变量c为0
//    scanf("%d", &a);  // 从标准输入中读取整数并存储到变量a中
//    for (int i = 0; i < a; i++)  // 循环a次
//    {
//        printf("%d ", b);  // 输出变量b的值
//        b += c;        // b = b + c
//        c = b - c;  // c更新为原先的b值
//    }
//    return 0;  // 返回0
//}


//int sum(int a);//求这个数的所有真约数和
//
//int main(void)
//{
//    int x, y;
//    scanf("%d%d", &x, &y);//输入两个正整数
//    for (int i = x; i <= y; i++)
//    {
//        int t = sum(i);//定义一个变量t并让t等于i的真因数和
//        if (i < t && sum(t) == i && sum(i) <= y)//如果i小于i的所有真因数和&&i的真因数和的真因数和与i相等
//        {                   //i及其真因数和都在[x,y]这个范围内，那么这两个数就是亲和数对。220的所有真因数和为248
//            printf("%d,%d\n", i, sum(i));                     //248的所有真因数和为220
//        }
//    }
//    return 0;
//}
//
//int sum(int a)
//{
//    int sum = 0;
//    for (int i = 1; 2 * i <= a; i++)//求这个数的所有真约数和，只需遍历这个数的一半
//    {
//        if (a % i == 0)
//        {
//            sum += i;
//        }
//    }
//    return sum;
//}


//猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。

//自己写的，完全没有问题，但是答案的可能会更好
//int main()
//{
//	int n = 1;
//	for (int i = 1; i <= 9; i++)
//	{
//		n = 2 * (n + 1);
//	}
//	printf("%d\n", n);
//	return 0;
//}

//标准答案：

//#include <stdlib.h>
//int main()
//{
//    int day, x1 = 0, x2;
//    day = 9;
//    x2 = 1;
//    while (day > 0) 
//    {
//        x1 = (x2 + 1) * 2;  // 第一天的桃子数是第2天桃子数加1后的2倍
//        x2 = x1;
//        day--;
//    }
//    printf("总数为 %d\n", x1);
//
//    return 0;
//}

//int main()
//{
//	int a = 10;
//	for (int i = 1; i <= 4; i++)
//	{
//		a = a + 2;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 9, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//隐式类型转换
//第一个问题：我们都知道一个二进制8位能表示的最大值是 1111 1111 == 255，但为什么最大表示到127？
//  因为对于计算机来说，一个二进制的数字它的最高位是符号位，0表示正数，1表示负数。 
// 所以 1111 1111 表示的 -127， 而 0111 1111 表示的是127，范围区间应该是 [-127,127]之间。
//int main()
//{
//	//进行类型转换的过程
//	char a = 5;
//	//00000000000000000000000000000101 5的补码
//	char b = 126;
//	//00000000000000000000000001111110 126的补码
//	char c = a + b;
//	//5和126相加：
//	//00000000000000000000000100000011 131的补码
//	//因为是char类型的：所以直接截取：100000011
//	//然后进行“整形提升”：11111111111111111111111100000011  131的补码（在char类型下，自动截取高位的1，之后的结果，不是真正的131的补码）
//	//11111111111111111111111100000010 
//	//10000000000000000000000011111101
//	//所以c打印的是-125；
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	/*100000000000000000000000000000001
//	  111111111111111111111111111111110
//	  111111111111111111111111111111111 -1是补码
//	  但是由于这个定义的时候是char类型的，
//	  所以要进行“整型提升”，转换为int类型
//	  提升方式：先截取一段“八字节”：11111111
//	  然后进行“整型提升”
//	  先看其“符号位”若是1，就全为1；若是0；就全为0*/
//	return 0;
//}

/*截断的概念：char类型只能放8个比特位，多余的位会被截断。
100000000000000000000000000000001
就会只剩下“00000001”*/

//int main()
//{
//	//% u表示数据按十进制无符号整型数输入或输出
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

//int main()
//{
//	int c = 2;
//	int b = c + --c;
//	printf("%d\n", b);
//	return 0;
//}

//这个也是一个错误的代码
//int fun()
//{
//	static int count = 0;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//这里只能去确定先算“*”后算“-”，但是我们没办法确定执行哪一个“fun（）”
//	printf("%d\n", answer);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	//这个代码的运行方式为：先执行：第一个++a，为2，然后执行：第二个++a，为3，然后执行：第三个++a，为4，
//	//然后再进行加法运算，将“4”带入a，然后运算出来的结果为12
// ++a的执行方式：先将a的值加1，然后将a的值赋给a，所以a的值变为2；（这是两步）所以要进行“加一”，然后最后算出来a = 4，
// 最后再进行4的相加运算。
//	printf("%d\n", b);
//	return 0;
//}
//哪怕我们知道了代码的优先级和运算顺序，也无法确定运算的唯一路径，所以代码一定要好好写。


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a); //每一次运行都会输出不同的地址，因为地址是随机的
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//p就是指针变量。
//	*p = 20; //通过指针变量p，可以直接修改a的值。*p是解引用操作符，通过这个操作符可以找到对应地址的变量的值。
//	printf("%d\n", a); //输出a的值，发现已经变成20了。
//	return 0;
//}

//int main()
//{
// // 不管是什么类型的指针变量，都是在创建指针变量
// //指针变量是用来存放地址的，所以指针变量的大小是固定的，与指针指向的变量的类型和大小无关。
// //指针变量的大小取决于一个地址存放的时候需要多大的空间。
// // 32位系统下，指针变量的大小为4字节，64位系统下，指针变量的大小为8字节。
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	int a = 45;
//	int* pa = &a;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = (char*)(&a); // 强制类型转换，将地址强制转换为char*类型
//	printf("pa = %p\n", pa);
//	printf("pa + 1 = %p\n", pa + 1);
//
//	printf("pc = %p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);
//
//	//结论2
//	//指针的类型决定了指针+-1操作的时候，跳过了几个字节。
//	//决定了指针的步长。
//	return 0;
//}

//用1,2,3,4组成三位数，不能有重复数字，求出所有可能的三位数。并输出个数。
//int main()
//{
//	int count = 0;
//	for (int i = 1; i < 5; i++)
//	{
//		for (int j = 1; j < 5; j++)
//		{
//			for (int k = 1; k < 5; k++)
//			{
//				if (i != j && i != k && j != k)
//				{
//					printf("%d %d %d\n", i, j, k);
//					count++;
//				}
//
//			}
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//int main()
//{
//	
//	return 0;
//}

//辗转相除法求最大公约数
//int gcd(int a, int b) 
//{
//	int t;
//	while (b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//int main() 
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("gcd=%d\n", gcd(a, b));
//	return 0;
//}


// 定义一个函数，用于分解质因数并打印结果
//void fun(int n)
//{
//    int i = 2, k = 0;
//    while (n != 1)
//    {
//        if (n % i == 0)
//        {
//            if (k == 0)
//            {
//                printf("%d=", n);
//            }
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
//
//// 主函数
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1 && n > 1) // 输入 0 或 负数结束输入
//        fun(n);
//    return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//这个时候a已经被释放了，但是test()函数返回的指针依然指向a的地址，所以会导致程序崩溃。
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//初始化操作，
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
	//数组下标的写法：
	//for (i = 0; i < sz; i++)
	//{
	//	arr[i] = 1;  //赋值操作
	//	printf("%d ", arr[i]);
	//}

	//指针的写法：
	//int *p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*p = 1; //赋值操作
	//	printf("%d ", *p);
	//	p++; //指针移动
	//}

	//指针的另一种写法
//	int *p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1; //赋值操作
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int ret = 0;
	ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}
