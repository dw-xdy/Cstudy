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

int main()
{
	int a = 0, b = 0;
	double sum = 0;
	float arr[100];
	scanf("%f", &arr);
	int sz = sizeof(arr) / sizeof(arr[0]); //100
	for (int i = 0; i < sz; i++)
	{
		sum += arr[i];
		b = sum / sz;
		if (arr[i] >= b)
		{
			a++;
		}
	}		
	printf("%d", a);
	return 0;
}

