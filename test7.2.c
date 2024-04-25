#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 20;
//	int b = -10;
//
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}


//判断系统字节序（小端或大端）
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//-128的原码：10000000000000000000000010000000
//-128的反码：11111111111111111111111101111111
//-128的补码：11111111111111111111111110000000 ———— 截断
//截断之后的：10000000  ————提升之前的补码
//提升的时候的补码是：11111111111111111111111110000000 ————提升
// （提升的依据是：本身的整型存储的类型，若是char类型符号位：就是“1”，要是unsigned char符号位：就是“0”）


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
/* 128的原码：00000000000000000000000010000000，反码和补码都相同，不用管
   截断之后的：10000000
   提升：（原来的是char，有符号：需要补1：11111111111111111111111110000000
   最后看是%u，所以不用管符号：直接输出：11111111111111111111111110000000*/
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//int main()
//{
//	float f = 5.5;
//	//转换为“二进制”，101.1 = 1.001 * 2^2；
//	//此时：s = 0; m = 1.011; e = 2；
//	//0100 0000 1011 0000 0000 0000 0000 0000 
//	// 40 b0 00 00
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//    //0 00000000 00000000000000000001001
//    //(-1)^0,  -126, 0.00000000000000000001001
//    //最后的结果是：(-1)^0 * 0.00000000000000000001001 * 2^(-126) 这个数值无限接近于0。
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);//所以这里输出的结果是：0.000000；
//
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}


//#define MAX 10
//int main()
//{
//	int m, n, i = 0, j = 0;
//	int a[MAX][MAX];
//	int b[MAX][MAX];
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
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", a[i][j] + b[i][j]);
//			if (j < n - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//矩阵乘法的实现
//#define max 20
//int main()
//{
//	int m, n, p;
//	int i = 0, j = 0;
//
//	int a[max][max];
//	int b[max][max];
//	int c[max][max];
//
//	scanf("%d %d %d", &m, &n, &p);
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			c[i][j] = 0;
//            for (int k = 0; k < n; k++)
//            {
//                c[i][j] += a[i][k] * b[k][j];
//            }
//		}
//	}
//
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < p; j++)
//        {
//            printf("%d", c[i][j]);
//            if (j < p - 1)
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//	return 0;
//}


//int main()
//{
//	int i = 0, j = 0;
//	int count = 1;
//	int a[1001] = { 2 };
//
//	for (i = 3; count < 1001; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			a[count] = i;
//			count++;
//		}
//	}
//
//	while (scanf("%d", &i) == 1)
//	{
//		if (count == 0)
//			printf("%d", a[i - 1]);
//		else
//			printf("%d,", a[i - 1]);
//	}
//	return 0;
//}


//#define N 1001
//
////这个函数是用来储存1000以内的素数的
//void InitPrimeArray(int* primeArray, int n)
//{
//	int j = 0;
//	int num, i, isPrime;
//	for (num = 2, i = 0; i < n; num++)
//	{
//		for (isPrime = 1, j = 2; j * j <= num; j++)
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
////然后主函数这里可以直接拿函数用就行。
//int main()
//{
//	int primeArray[N];
//	int input, count = 0;
//
//	InitPrimeArray(primeArray, N);  // 函数
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
//			}//这里先进行第一个数字的输出：1————》2
//			else
//			{
//				printf(",%d", primeArray[input - 1]);
//			}//这里进行后面数字的输出，可以保证后面没有“，”
//			//相当于用“后面一个数字”对“前面一个数字进行“，”的补充，
//			//要是“输出最后一个数字，就直接不用输出“，”了，因为是输出最后一个数字。
//			count++;
//		}
//	}
//	printf("\n");
//	return 0;
//}


//int getmin(int a, int b, int c)
//{
//	if (a < b && a < c)
//	{
//		return a;
//	}
//	else if (b < a && b < c)
//	{
//		return b;
//	}
//	else
//	{
//		return c;
//	}
//}
//
//
//int main()
//{
//	int m, n, k;
//
//	scanf("%d %d %d", &m, &n, &k);
//
//	int i = getmin(m, n, k);
//
//	printf("Min = %d", i);
//	return 0;
//}

//int X(int x, int y, int z)
//{
//    int min = x;
//    if (y < min)
//    {
//        min = y;
//        if (z < min)
//        {
//            min = z;
//        }
//    }
//
//}
//int main()
//{
//    int m, n, k;
//
//    scanf("%d %d %d", &m, &n, &k);
//
//    int i = X(m, n, k);
//
//    printf("Min = %d", i);
//    return 0;
//}


//int main()
//{
//	char c;
//	int x = 0, y = 0, z = 0, s = 0, k = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if (c <= 'z' && c >= 'a')
//		{
//			x++;
//		}
//		else if (c <= 'Z' && c >= 'A')
//		{
//			y++;
//		}
//		else if (c <= '9' && c >= '0')
//		{
//			s++;
//		}
//		else if (c == ' ')
//		{
//			k++;
//		}
//		else
//		{
//			z++;
//		}
//	}
//	printf("英文小写字母有x = %d个, 英文大写字母有y = %d个, 数字有s = %d个, 空格有k = %d个, 其他字符有z = %d\n", x, y, s, k, z);
//	return 0;
//}


//int main()
//{
//	int i, j, k = 0, n = 0;
//
//	for (i = 1; i <= 101; i += 4)
//	{
//		k += i;
//	}
//	for (i = 3; i <= 99; i += 4)
//	{
//		n += i;
//	}
//	j = -n + k;
//	printf("j = %d\n", j);
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0, k = 0, s = 0, z = 0, x = 0, y = 0;
//
//	scanf("%d %d", &m, &n);
//
//	for (int i = m; i < n; i++)
//	{
//		if (i % 3 == 1 && i % 5 == 2 && i % 7 == 3)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0, n = 0;
//	float t = 1.0, m = 0.0;
//
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		 t -= 1.0 / i;
//	}
//	printf("%f", t);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int a = 0, b = 0;
//	float c = 0.0, n = 0.0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		a += i;
//	}
//
//	for (i = 1; i <= 50; i++)
//	{
//		b += i * i;
//	}
//
//	for (i = 1; i <= 10; i++)
//	{
//		c += 1.0 / i;
//	}
//
//	n = a + b + c;
//	printf("%f", n);
//	return 0;
//}




//int main()
//{
//	int a[20];
//	int i = 0, j, n;
//	char c;
//
//	while (scanf("%d", &n) == 1 && (c = getchar()) != '\n')
//	{
//		a[i] = n;
//		i++;
//	}
//
//	for (i; i > 0; i--)
//	{
//		printf("%d ", a[i - 1]);
//	}
//
//	return 0;
//}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//这个题目对于我是很重要的一个难题，解决了困扰我很长时间的问题！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//这个问题就是：如何才能解决任意输入数字。这个问题我相信的通解的。
int main()
{
    int a[20];
    int n = 0, x;

    while (scanf("%d", &x) != EOF)
    {
        a[n] = x;
        n++;

        if (getchar() == '\n')
        {
            break;
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("%d", a[0]);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////