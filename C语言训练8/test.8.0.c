#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char a = -128;
//	//原码：00000000000000000000000010000001
//	//截断：10000001
//	//整型提升：11111111111111111111111110000001 -- 补码
//	//反码：10000000000000000000000001111110
//	//补码：10000000000000000000000001111111 --> -127
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//原码：10000000000000000000000010000000
//	//反码：11111111111111111111111101111111
//	//补码：11111111111111111111111110000000
//	//截断：10000000
//	//整型提升：11111111111111111111111110000000 --> 补码(原码), 在计算机中,这个就是无符号的,所以会直接输出
//
//
//	printf("%u\n", a);
//	return 0;
//}

//void func(int a)
//{
//	a = -128;
//	printf("%d\n", a);
//}
//
//
//int main()
//{
//	int a  = 127;
//	func(a);
//	printf("%d", a);
//	return 0;
//}



//任意输入数字,排序然后进行输出
//int main()
//{
//	int n = 0;
//	int i = 0, j = 0;
//	int a[100];
//
//	while (scanf("%d", &a[n]) == 1)   //注意这里不能用while(scanf("%d", &a[i]) == 1)总之是不能用和“i”有关的变量作为循环条件
//	{                                 //因为这里的“i”在之后还会用到,要是现在用了,在之后会有问题：比如会导致数组越界.
//		n++;                          //最好还是用“n”,这样在之后的循环中,就不用担心“i”变量了.
//		if (getchar() == '\n')
//		{
//			break;
//		}
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
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//实现矩阵乘法
//#define max 20
//
//int main()
//{
//	int a, b, c;
//	int p1[max][max];
//	int p2[max][max];
//	int p3[max][max];
//	int i, j, k;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &p1[i][j]);
//		}
//	}
//
//	for (i = 0; i < b; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			scanf("%d", &p2[i][j]);
//		}
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			p3[i][j] = 0;
//			for (k = 0; k < b; k++)
//			{
//				p3[i][j] += p1[i][k] * p2[k][j];
//			}
//		}
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", p3[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a, b;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//	//scanf("%d %d", &a, &b);
//
//	char zimu[100];
//
//	for (i = 65; i <= 90; i++)
//	{
//		for (j = 97; j <= 122; j++)
//		{
//			zimu[k] = i;
//			zimu[k + 1] = j;
//			k += 2;
//		}
//	}
//
//	for (i = 0; i < 52; i++)
//	{
//		printf("%c", zimu[k]);
//	}
//	return 0;
//}




//void printAlphabetRange(int a, int b)
//{
//	if (a > b)
//	{
//		for (int i = a; i >= b; i--)
//		{
//			char upper = 'A' + i - 1;
//			char lower = 'a' + i - 1;
//			printf("%c%c", upper, lower);   //这里没有必要用数组,用了数组反而会不好操作!
//		}
//	}
//	else if (a < b)
//	{
//		for (int i = a; i <= b; i++)
//		{
//			char upper = 'A' + i - 1;
//			char lower = 'a' + i - 1;
//			printf("%c%c", upper, lower);   //这里没有必要用数组,用了数组反而会不好操作!
//		}
//	}
//}
//
//int main() 
//{
//	int a, b;
//
//	// 读取输入
//	scanf("%d %d", &a, &b);
//
//	// 输出字母表范围
//	printAlphabetRange(a, b);
//
//	return 0;
//}
