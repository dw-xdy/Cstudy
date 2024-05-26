#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// 找到1 ~ 100之间的素数
//int main() {
//	int i;
//	int j;
//
//	for (i = 1; i <= 100; i++) {
//		int flag = 1;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%4d", i);
//		}
//	}
//	return 0;
//}


//int main() {
//	int n;
//	int sum = 0;
//
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		if (i % 3 == 0 && i % 5 == 0) {
//			sum += i;
//		}
//	}
//
//	printf("%d", sum);
//	return 0;
//}


//int main() {
//	int n;
//	int sum = 0;
//	
//
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		int jc = 1;
//		for (int j = 1; j <= i; j++) {
//			jc *= j;
//		}
//		sum += jc;
//	}
//
//	printf("%d", sum);
//	return 0;
//}




//int main() {
//	int m, n;
//	int count = 0;
//	int sum = 0;
//
//	scanf("%d %d", &m, &n);
//
//	for (int i = m; i <= n; i++) {
//		int flag = 1;
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			count++;
//			sum += i;
//		}
//	}
//
//	if (m == 1) {
//		count -= 1;
//		sum -= 1;
//	}
//
//	printf("%d ", count);
//	printf("%d", sum);
//	return 0;
//}


#include <stdio.h>

//long long jc(int n) {
//    if (n == 1) {
//        return 1;
//    }
//    else {
//        return n * jc(n - 1);
//    }
//}
//
//int main() {
//    int n;
//
//    printf("请输入一个整数：\n");
//    scanf("%d", &n);
//
//    while (1) {
//        if (n < 0) {
//            printf("请输入一个非负整数！\n");
//            scanf("%d", &n);
//        }
//        else {
//            break;
//        }
//    }
//   
//
//    printf("%d的阶乘为%lld\n", n, jc(n));
//    return 0;
//}



//平均成绩和及格人数
//#define N 20
//
//int main() {
//	int n;
//	int count = 0;
//	int sum = 0;
//	int arr[N];
//	double average;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//		if (arr[i] >= 60) {
//			count++;
//		}
//	}
//	average = sum * 1.0 / n;
//
//	printf("average = %.1lf\n", average);
//	printf("count = %d", count);
//
//	return 0;
//}



//判断闰年
//int main() {
//	int n;
//	int flag = 1;
//
//	scanf("%d", &n);
//
//	if (n <= 2000 || n >= 2100) {
//		printf("Inavlid year!");
//		flag = 0;
//	}
//
//	for (int i = 2001; i <= n; i++) {
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
//			printf("%d\n", i);
//			flag = 0;
//		}
//	}
//
//	if (flag == 1) {
//		printf("None");
//	}
//
//	return 0;
//}


//int main() {
//	int m, n;
//	int count = 0;
//	int sum = 0;
//
//	scanf("%d %d", &m, &n);
//
//	for (int i = m; i <= n; i++) {
//		int flag = 1;
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			sum += i;
//			count++;
//		}
//	}
//
//	printf("%d ", count);
//	printf("%d", sum);
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
////欧几里德算法
int gcd(int x, int y)
{
    int maxn, minn;
    maxn = x > y ? x : y;
    minn = x > y ? y : x;
    while (minn != 0)
    {
        int r = maxn % minn;
        maxn = minn;
        minn = r;
    }
    return maxn;
}
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int ans = gcd(x, y);
    printf("%d", ans);
    return 0;
}




//韩信点兵问题
//int main() {
//	int i;
//	int N;
//
//	for (i = 0; ; i++) {
//		if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10) {
//			N = i;
//			break;
//		}
//	}
//
//	printf("%d", N);
//	
//	return 0;
//}

