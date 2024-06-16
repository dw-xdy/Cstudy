#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h> 


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
//int gcd(int x, int y)
//{
//    int maxn, minn;
//    maxn = x > y ? x : y;
//    minn = x > y ? y : x;
//    while (minn != 0)
//    {
//        int r = maxn % minn;
//        maxn = minn;
//        minn = r;
//    }
//    return maxn;
//}
//int main()
//{
//    int x, y;
//    scanf("%d%d", &x, &y);
//    int ans = gcd(x, y);
//    printf("%d", ans);
//    return 0;
//}




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




//计算三角形面积和周长
//int main() {
//	int a, b, c;
//	double s = 0;
//	double perimeter = 0;;
//	double area = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a + b > c && a + c > b && b + c > a) {
//		s = (a + b + c) * 1.0 / 2;
//		perimeter = a + b + c;
//		area = sqrt(s * (s - a) * (s - b) * (s - c));
//
//		printf("area = %.2lf; perimeter = %.2lf", area, perimeter);
//	}
//	
//	else {
//		printf("These sides do not correspond to a vaild triangle");
//	}
//	return 0;
//}


//三天打鱼两天晒网
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	n %= 5;
//
//	if (n < 0) {
//		n += 5;
//	}
//
//	if (n == 1 || n == 2 || n == 3) {
//		printf("Fishing");
//	}
//	else {
//		printf("Not Fishing");
//	}
//	return 0;
//}




//打印九九乘法表
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%-4d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//double Pn(int n, double x) {
//	if (n == 0) {
//		return 1;
//	}
//	else if (n == 1) {
//		return x;
//	}
//	else if (n > 1) {
//		return ((2 * n - 1) * Pn(n - 1, x) - (n - 1) * Pn(n - 2, x)) / n;
//	}
//	else {
//		return 0;
//	}
//}
//
//
//int main() {
//	int n;
//	double m;
//	scanf("%d,%lf", &n, &m);
//
//	printf("%.2lf", Pn(n, m));
//	return 0;
//}



//int main() {
//	int arr[10];
//	int sum = 0;
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] > 0) {
//			sum += arr[i];
//		}
//	}
//
//	printf("%d", sum);
//	return 0;
//}




//int main() {
//	char a;
//
//	scanf("%c", &a);
//
//	if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
//		printf("It is an English character.\n");
//	}
//	else if (a >= '0' && a <= '9') {
//		printf("It is a digit character.\n");
//	}
//	else {
//		printf("It is other character.\n");
//	}
//	return 0;
//}

//int main() {
//	int n;
//	int count = 0;
//
//	scanf("%d", &n);
//
//	for (int i = n; i <= 2024; i++) {
//		if (i % 5 == 0 && i % 6 == 0) {
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	return 0;
//}


//typedef struct Student {
//	int id;
//	char name[10];
//	double score;
//}Student;
//
//int main() {
//	Student s1;
//
//	scanf("%d %s %lf", &s1.id, s1.name, &s1.score);
//
//	printf("学号：%d，姓名：%s，平均分：%.2lf", s1.id, s1.name, s1.score);
//	return 0;
//}


//#include  <stdio.h> 
//int main()
//{
//    int  i, n, sum = 0, count = 0;
//    double average;
//    scanf("%d", &n);
//    int arr[10]; //初始化
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//        if (arr[i] % 2 == 0) {
//            sum += arr[i]; //求和
//        }
//    }
//
//    average = sum * 1.0 / n;
//    if (count != 0)
//        printf("average=%.2f", average);
//    else
//        printf("average=0.00");
//}


//int main() {
//	int n;
//	int arr[10];
//	int sum = 0;
//	int count = 0;
//	double average = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] % 2 == 0) {
//			sum += arr[i];
//			count++;
//		}
//	}
//	average = sum * 1.0 / count;
//
//    if (count != 0)
//        printf("average=%.2f", average);
//    else
//        printf("average=0.00");
//	return 0;
//}


//double calculateAverage(int arr[], int size) {
//    double sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//    double average = sum / size; // 补全：计算平均值
//    return average;
//}
//
//int main() {
//    int numbers[] = { 1, 2, 3, 4, 5 };
//    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
//    printf("%.2f\n", calculateAverage(numbers, arraySize));
//    return 0;
//}




//void incrementCounter() {
//    static int counter = 0;
//    counter++; // 补全：将counter自增
//    printf("Counter:%d\n", counter);
//}
//
//int main() {
//
//    incrementCounter();
//    incrementCounter();
//    return 0;
//}



//int main() {
//	int m, n;
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
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//int main() {
//	float a;
//	float b;
//	float c;
//
//	scanf("%f,%f", &a, &b);
//
//	c = b - a;
//
//	printf("balance=%.2f", c);
//	return 0;
//}

//#define N 20
//
//int main() {
//	int n;
//	int arr[N];
//	int sum = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] >= 0) {
//			sum += arr[i];
//		}
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}








//#include<stdio.h>
//#include<math.h>
//
//float root1(int a, int b, int c)
//{
//    float i;
//    i = sqrt(b * b - 4 * a * c);
//    return (-b + i) / (2.0 * a);
//}
//
//float root2(int a, int b, int c)
//{
//    float i;
//    i = sqrt(b * b - 4 * a * c);
//    return (-b - i) / (2.0 * a);
//}
//
//int main()
//{
//    int a, b, c;
//    float x1, x2;
//    scanf("%d,%d,%d", &a, &b, &c);
//    if (b * b - 4 * a * c < 0)
//    {
//        printf("此方程无实根\n");
//    }
//    else
//    {
//        root1(a, b, c);
//        root2(a, b, c);
//        x1 = root1(a, b, c);
//        x2 = root2(a, b, c);
//        printf("x1=%.2f\n", x1);
//        printf("x2=%.2f", x2);
//    }
//    return 0;
//}

//#include<math.h>
//
//double root1(int a, int b, int c) {
//	double i;
//	i = sqrt(b * b - 4 * a * c);
//	return (-b + i) / (2.0 * a);
//}
//
//double root2(int a, int b, int c)
//{
//	double i;
//	i = sqrt(b * b - 4 * a * c);
//	return (-b - i) / (2.0 * a);
//}
//
//int main() {
//	int a, b, c;
//
//	scanf("%d,%d,%d", &a, &b, &c);
//
//	if (b * b - 4 * a * c < 0) {
//		printf("此方程无实根");
//	}
//	else {
//		printf("%.2lf\n", root1(a, b, c));
//		printf("%.2lf", root2(a, b, c));
//	}
//	return 0;
//}




//#include <stdio.h>
//#include <math.h> 
//
//int main() {
//	int a, b, c;
//	double root1, root2;
//
//	scanf("%d,%d,%d", &a, &b, &c);
//
//	if (b * b - 4 * a * c < 0) {
//		printf("此方程无实根\n");
//	}
//	else {
//		root1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
//		root2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
//		printf("%.2lf\n", root1);
//		printf("%.2lf\n", root2);
//	}
//	return 0;
//}




//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int count = 0;
//	for (int i = n; i < i + 11; i++) {
//		if (i % 2 == 1) {
//			printf("%d", i);
//			count++;
//			if (count < 5) {
//				printf(" ");
//			}
//			if (count == 5) {
//				break;
//			}
//		}
//	}
//	return 0;
//}





//int main() {
//	char ch[50];
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	scanf("%[^\n]", ch);  //[^\n]的作用是读取回车之前的符号! 无论有没有空格, 有几个空格!
//
//	for (int i = 0; ch[i] != '\0'; i++) {
//		if (ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z') {
//			count1++;
//		}
//		else if (ch[i] >= '0' && ch[i] <= '9') {
//			count2++;
//		}
//		else {
//			count3++;
//		}
//	}
//
//	printf("character=%d,digit=%d,other=%d", count1, count2, count3);
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//    char ch[50];
//    int count1 = 0;
//    int count2 = 0;
//    int count3 = 0;
//    fgets(ch, sizeof(ch), stdin); // 读取包含空格的字符串
//
//    for (int i = 0; ch[i] != '\0'; i++) {
//        if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) {
//            count1++;
//        }
//        else if (ch[i] >= '0' && ch[i] <= '9') {
//            count2++;
//        }
//        else {
//            count3++;
//        }
//    }
//
//    printf("character=%d, digit=%d, other=%d\n", count1, count2, count3);
//    return 0;
//}




//int main() {
//	char arr1[30];
//	char arr2[30];
//	int j = 0;
//
//	scanf("%s", arr1);
//
//	for (int i = 0; arr1[i] != '\0'; i++) {
//		if (i % 2 == 1) {
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//
//	arr2[j] = '\0';    //在最后添加一个终止符!!!!!!!
//
//	printf("%s", arr2);
//
//	return 0;
//}




//int main() {
//	int arr[10];
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10 - 1; i++) {
//		for (int j = 0; j < 10 - i - 1; j++) {
//            if (arr[j] < arr[j + 1]) {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//		}
//	}
//
//	for (int i = 0; i < 9; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("%d", arr[9]);
//	return 0;
//}


//int countDigits(int n) {
//	int count = 0;
//
//	while (n != 0) {
//		n = n / 10;
//		count++;
//	}
//
//	return count;
//}
//
//
//
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	printf("您输入的是一个%d位数", countDigits(n));
//	return 0;
//}



//long long factorial(int n) {
//	int sum = 1;
//
//	if (n == 1 || n == 0) {
//		return 1;
//	}
//
//	else if (n > 1) {
//		return n * factorial(n - 1);
//	}
//}
//
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	printf("%lld", factorial(n));
//	return 0;
//}




//int main() {
//	int n;
//	int count = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	return 0;
//}


//int main() {
//	int arr[6];
//	int max = arr[0];
//	
//
//	for (int i = 0; i < 6; i++) {
//		scanf("%d", &arr[i]);
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//
//	int min = arr[0];
//	for (int i = 0; i < 6; i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//
//	printf("max=%d,min=%d", max, min);
//
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char* color[5] = { "red", "blue", "yellow", "green", "black" };
//    int i;
//    char c[20];
//    int flag = 0;
//    gets(c);
//
//    for (i = 0; i < 5; i++)
//    {
//        if (strcmp(c, color[i]) == 0)
//        {
//            printf("%d", i + 1);
//            flag = 1;
//            break;
//        }
//    }
//    if (!flag)
//        printf("Not Found");
//
//    return 0;
//}



//int main() {
//	int j = 0;
//	for (int i = 100; i <= 200; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}






//
//int main() {
//	int j = 0;
//	for (int i = 100; i <= 200; i++) {
//		for (j = 2; j < i; j++) {  
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int fib(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//
//	else if (n > 2) {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//
//
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	printf("%d", fib(n));
//
//	return 0;
//}


//int main() {
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	double aver = 0;
//	int arr[5] = { 23, 43, 55, 78, 99 };
//
//	for (int i = 0; i < 5; i++) {
//		sum += arr[i];
//	}
//
//	aver = sum * 1.0 / 5;
//	
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] > aver) {
//			m = i;
//			break;
//		}
//	}
//
//	for (int i = m; i < 5; i++) {
//		if (arr[i] > aver) {  
//			n = i;     //我刚刚开始的时候还是理解不了这里,因为我想的是“m”不也是一个“大于aver”的数字吗, 但是只要仔细看一下就知道了
//					   //这个到了m之后不会跳出循环, 而是继续进行遍历, 直到遍历完数组中所有的元素就行.
//		}
//	}
//
//	printf("%d %d", arr[m], arr[n]);
//	return 0;
//}
//



