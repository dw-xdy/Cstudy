#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	double aa = (int)1.564;
//	printf("%lf", aa);
//	return 0;
//}


//#define N 30
//
//typedef struct Student {
//	char id[6];
//	char name[11];
//	int pro[3];
//	int all;
//}Student;
//
//
//
//int main() {
//	int n;
//	int i, j;
//	int m = 0;
//	Student stu[N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].pro[0], &stu[i].pro[1], &stu[i].pro[2]);
//		stu[i].all = stu[i].pro[0] + stu[i].pro[1] + stu[i].pro[2];
//	}
//
//
//	for (i = 0; i < n; i++) {
//		if (stu[m].all < stu[i].all) {
//			m = i;
//		}
//	}
//
//	printf("%s %s %d", stu[m].name, stu[m].id, stu[m].all);
//	return 0;
//}
//
//#define N 40
//
//typedef struct Person {
//	char name[15];
//	int bir;
//	char num[20];
//}Person;
//
//int main() {
//	int n, m = 0; 
//	int i, j;
//	Person per[N];
//		
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%s %d %s", per[i].name, &per[i].bir, per[i].num);
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			if (per[j].bir > per[j + 1].bir) {
//				Person p = per[j];
//				per[j] = per[j + 1];
//				per[j + 1] = p;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%s %d %s", per[i].name, per[i].bir, per[i].num);
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//    int n, c, k, space;
//
//    printf("输入菱形的宽度: ");
//    scanf("%d", &n);
//
//    space = n - 1;
//
//    for (k = 1; k <= n; k++) {
//        for (c = 1; c <= space; c++)
//            printf(" ");
//
//        space--;
//
//        for (c = 1; c <= 2 * k - 1; c++)
//            printf("*");
//
//        printf("\n");
//    }
//
//    space = 1;
//
//    for (k = 1; k <= n - 1; k++) {
//        for (c = 1; c <= space; c++)
//            printf(" ");
//
//        space++;
//
//        for (c = 1; c <= 2 * (n - k) - 1; c++)
//            printf("*");
//
//        printf("\n");
//    }
//
//    return 0;
//}



//int main() 
//{
//    int i, j, n;
//    printf("输入菱形的宽度: ");
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= n - i; j++)
//            printf(" ");
//        for (j = 1; j <= 2 * i - 1; j++)
//            printf("*");
//        printf("\n");
//    }
//
//    for (i = n - 1; i >= 1; i--) 
//    {
//        for (j = 1; j <= n - i; j++)
//            printf(" ");
//        for (j = 1; j <= 2 * i - 1; j++)
//            printf("*");
//        printf("\n");
//    }
//
//    return 0;
//}

 
//int main()
//{
//    float fahr = 0, celsius;
//    while (fahr >= 0 && fahr <= 300)
//    {
//        celsius = (5.0 / 9.0) * (fahr - 32);
//        printf("%f\n", celsius);
//        fahr += 20;
//    }
//    return 0;
//}



//int main() {
//    int n;
//    scanf("%d", &n);
//
//    n %= 7;
//    if (n < 0) {
//        n += 7;
//    }
//
//    if (n == 0) {
//        printf("星期六");
//    }
//    else if (n == 1) {
//        printf("星期天");
//    }
//    else if (n == 2) {
//        printf("星期一");
//    }
//    else if (n == 3) {
//        printf("星期二");
//    }
//    else if (n == 4) {
//        printf("星期三");
//    }
//    else if (n == 5) {
//        printf("星期四");
//    }
//    else if (n == 6) {
//        printf("星期五");
//    }
//
//}


//int main() {
//	int n;
//	int a, b;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &a, &b);
//		printf("%d\n", a + b);
//	}
//	return 0;
//}

//
//int main() {
//	char a;
//	int m, n;
//	scanf("%d %c %d", &m, &a, &n);
//
//	if (a == '/' && n != 0) {
//		printf("%d", m / n);
//	}
//	else if (a == '%' && n != 0) {
//		printf("%d", m % n);
//	}
//
//	else if (a == '+') {
//		printf("%d", m + n);
//	}
//	else if (a == '-') {
//		printf("%d", m - n);
//	}
//	else if (a == '*') {
//		printf("%d", m * n);
//	}
//	else {
//		printf("ERROR");
//	}
//	return 0;
//}



//int main() {
//	int n;
//	scanf("%d", &n);
//
//	if (n == 1) {
//		printf("Monday");
//	}
//	else if (n == 2) {
//		printf("Tuesday");
//	}
//	else if (n == 3) {
//		printf("Wednesday");
//	}
//	else if (n == 4) {
//		printf("Thursday");
//	}
//	else if (n == 5) {
//		printf("Friday");
//	}
//	else if (n == 6) {
//		printf("Satarday");
//	}
//	else if (n == 7) {
//		printf("Sunday");
//	}
//	else {
//		printf("-1");
//	}
//	return 0;
//}



//int main() {
//	int arr[7];
//	int m = 0;
//	for (int i = 0; i < 7; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 1; i < 7; i++) {
//		if (arr[m] < arr[i]) {
//			m = i;
//		}
//	}
//
//	printf("选手最高得分：%d", arr[m]);
//	return 0;
//}








