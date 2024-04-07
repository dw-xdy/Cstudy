#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//long long prime(long long n)
//{
//    long long j;
//    for (j = 2; j < n; j++)
//    {
//        if (n % j == 0)
//        {
//            return 0;
//        }
//    }
//    if (j == n)
//    {
//        return n;
//    }
//}
//
//int main()
//{
//    long long n;
//    long long p = 0, q = 0;
//    scanf("%lld", &n);
//    n = p + q;
//    prime(p);
//    prime(q);
//    if (n > 0)
//    {
//        printf("%lld %lld", p, q);
//    }
//    return 0;
//}


//#include<math.h>
//int sushu(int x);               //声明判断是否是素数的函数
//int main() 
//{
//    int n, p;
//    scanf("%d", &n);
//    for (p = 2; p <= n; p++) 
//    {
//        if (sushu(p) && sushu(n - p)) 
//        {
//            printf("%d = %d + %d", n, p, n - p);
//            break;
//        }
//    }
//    return 0;
//}
//
//int sushu(int x)
//{
//    int flag = 1, i, m;
//    if ((x == 1) || (x != 2) && (x % 2 == 0))
//    {                  //排除1和除2之外的所有偶数
//        flag = 0;
//    }
//    else 
//    {
//        m = sqrt(x);
//        for (i = 2; i <= m; i++) 
//        {                          //判断所有奇数
//            if (x % i == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    return flag;
//}


//判断一个数字是否为素数，并打印素数。
//int prime(int n)
//{
//    int j;
//    for ( j = 2; j < n; j++)
//    {
//         if (n % j == 0)
//         {
//             return 0;
//         }
//    }
//    if (j == n)
//    {
//        return n;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", prime(n));
//    return 0;
//}


//int fun(float s[], int n)
//{
//
//}

//int main()
//{
//	int	a = 0;
//	float i[100];
//	scanf("%d", &i[100]);
//
//	printf("%d", a);
//	return 0;
//
//}
//
//int fun(float* s, int n);
//int main()
//{
//	float a, s[30];
//	int m = 0, i;
//	scanf("%f", &a);
//	while (a > 0) 
//	{
//		s[m] = a; m++; scanf("%f", &a);
//	}
//	printf("The number of students : %d\n", fun(s, m));
//	return 0;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	double sum = 0;
//	float arr[100];
//	scanf("%f", &arr);
//	int sz = sizeof(arr) / sizeof(arr[0]); //100
//	for (int i = 0; i < sz; i++)
//	{
//		sum += arr[i];
//		b = sum / sz;
//		if (arr[i] >= b)
//		{
//			a++;
//		}
//	}		
//	printf("%d", a);
//	return 0;
//}

//int ejz(int N)
//{
//	int a, b, c, d;
//	
//}


//编写一个函数，其参数是一个整数N，返回值也是一个整数（假设是R），规则是整数R写出来（输出出来）是N的二进制形式。
//例如：参数是15，返回值应是1111。主函数中输入若干组整数，依次输出其二进制形式。
//自己写的，什么也没写出来，有思路，但是没办法用编程语言写出来，还是要多学习
//int main()
//{
//	int a, b, c, d;
//	int m;
//	scanf("%d", &m);
//	a = m % 2;
//	b = a % 2;
//	c = b % 2;
//	return 0;
//}

//标准答案
//int main()
//{
//    int a, f, e, b[100], d, c;
//    while (scanf("%d", &a) != EOF)
//    {
//        f = a;
//        for (e = 0; a > 0; e++)
//        {
//            b[e] = a % 2;
//            a = a / 2;
//        }
//        if (f == 0) 
//        {
//            printf("0");
//        }
//        else
//        {
//            for (d = e - 1; d >= 0; d--) 
//            {
//                printf("%d", b[d]);//记得反过来输出。
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*编写一个函数，其参数是一个整数N（N中只有1和0两个数字），返回值也是一个整数（假设是R），
规则是整数N写出来是R的二进制形式。例如：参数是1111，返回值应是15。主函数中输入多组数据，每个数据是一个只由0和1构成的整数（二进制数），
输出它对应的十进制整数。所有数据都在int型范围内。*/
//自己写的
//#include<math.h>
//int main()
//{
//	int a[100], b[100], c = 0, d = 0, e, f;
//	while (scanf("%d", &b[100]) != EOF)
//	{
//		for (c = 0; ; c++)
//		{
//			a[d] = b[c] * pow(2, c);
//		}
//	}
//	return 0;
//}

//标准答案
//#include<math.h>
//int ten(long long int a);
//int main()
//{
//	long long int a;
//	int b;
//	while (scanf("%lld", &a) != EOF)
//	{
//		b = ten(a);
//		printf("%d\n", b);
//	}
//	return 0;
//}
//int ten(long long int a)
//{
//	int m = 0, c, k = 0;
//	while (a > 0)
//	{
//		c = a % 10;
//		if (c == 1)
//			m = m + pow(2, k);
//		k++;
//		a = a / 10;
//	}
//	return m;
//}

//二维数组的演示
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);  //对二位数组进行修改的方式方法
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//自己的答案
//void ejz(int a)
//{
//	int i = 0, j = 0, b[100], c;
//	for (c = 0; i > 0; i++)
//	{
//		a = j;
//		b[i] = j % 2;
//		j = j / 2;
//	}
//	if (a == 0)
//	{
//		printf("0");
//	}
//    else
//    {
//        for (i = c - 1; i >= 0; i--)
//        {
//            printf("%d", b[i]);
//        }
//    }
//
//}
//
//int main()
//{
//	int a, b = 0, c;
//	scanf("%d %d", &a, &b);
//	for (c = a; c <= b; c++)
//	{
//		ejz(a);
//	}
//	return 0;
//}

//void ejz(int a)
//{
//    int f, e, b[100], d;
//    while (1)
//    {
//        f = a;
//        for (e = 0; a > 0; e++)
//        {
//            b[e] = a % 2;
//            a = a / 2;
//            if (a == 0)
//            {
//                break;
//            }
//        }
//        if (f == 0)
//        {
//            printf("0");
//        }
//        else
//        {
//            for (d = e - 1; d >= 0; d--)
//            {
//                printf("%d", b[d]);//记得反过来输出。
//            }
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    for (c = a; c <= b; c++)
//    {
//        ejz(c);
//    }
//    return 0;
//}



//和自己下面的两个式子进行对比
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//编写函数，函数的参数是整数N，在函数中输出整数N的二进制形式。主函数中输入整数a和b,输出从a到b的所有整数的二进制形式。
//标准答案
//void ejz(int a)
//{
//	int b, c;
//	if (a == 0)       //这里使用a == 0而不是a > 0的原因是：a > 0会将最后一步的0进行输出。
//	{
//		return 0;    
//	}
//	ejz(a / 2);
//	c = a % 2;
//	printf("%d", c);
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		ejz(i);
//		printf("\n");
//	}
//	return 0;
//}


//编写函数，函数的参数是整数N，在函数中输出整数N的二进制形式。主函数中输入整数a和b,输出从a到b的所有整数的二进制形式。
//自己写的答案
//void ejz(int a)
//{
//	int b, c;
//	if (a > 0)
//	{
//		ejz(a / 2);
//	}
//	c = a % 2;
//	printf("%d", c);
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		ejz(i);
//		c++;
//		if (c = 4)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//void shi(int a)
//{
//	int b;
//	if (a == 0)
//	{
//		return 0;
//	}
//	shi(a / 16);
//	b = a % 16;
//	printf("%d", b);
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		shi(i);
//		printf(" ");
//	}
//	return 0;
//}


//void hexadecimal(int inte) 
//{                           //转换成十六进制输出
//    if (inte == 0)
//    {
//        //该十进制数为0时
//        return 0;
//    }
//    //在 “函数” 中，如果碰到return 语句，那么程序就会返回调用该函数的下一条语句执行，
//    //也就是说 跳出函数 的执行，回到原来的地方继续执行下去。
//    //但是如果是在 “主函数” 中碰到return语句，那么整个程序就会停止，退出程序的执行。
//
//    hexadecimal(inte / 16);    //调用自身
//
//    if (inte % 16 >= 10) 
//    {                         //余数 >= 10时对应的字母
//        switch (inte % 16) 
//        {
//        case 10:
//            printf("A");
//            break;
//        case 11:
//            printf("B");
//            break;
//        case 12:
//            printf("C");
//            break;
//        case 13:
//            printf("D");
//            break;
//        case 14:
//            printf("E");
//            break;
//        case 15:
//            printf("F");
//            break;
//        }
//    }
//    else 
//    {
//        printf("%d", inte % 16);
//    }
//}
//
//int main()
//{
//
//    int m, n;
//    scanf("%d %d", &m, &n);
//
//    for (int i = m; i <= n; i++)
//    {    //循环范围内的十进制整数
//        hexadecimal(i);    //调用函数
//        if (i == n)    //不输出空格的条件
//            printf("");
//        else    //输出空格
//            printf(" ");
//    }
//
//    return 0;
//}
