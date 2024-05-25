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




