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






//long long jc(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else if (n > 1) {
//		return n * jc(n - 1);
//	}
//}
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%lld", jc(n));
//	return 0;
//}


//int main() {
//	int n;
//	scanf("%d", &n);
//	n %= 7;
//
//	if (n < 0) {
//		n += 7;
//	}
//
//	if (n == 0) {
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
//    return 0;
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
//		sum += arr[i];
//	}
//	double average = (sum * 1.0) / n;
//
//	printf("average = %.1lf", average);
//	return 0;
//}




//int main() {
//    int score, max_score = -1;
//
//    while (1) {
//        scanf("%d", &score);
//        if (score < 0) {
//            break;
//        }
//        if (score > max_score) {
//            max_score = score;
//        }
//    }
//
//    printf("%d\n", max_score);
//
//    return 0;
//}


//int main() {
//	int n;
//	int m = 0;
//
//	while (1) {
//		scanf("%d", &n);
//		if (n < 0) {
//			break;
//		}
//		else if (n > m) {
//			m = n;
//		}
//	}
//
//	printf("%d", m);
//	return 0;
//}

//#define N 20;
//
//float max(float d1, float d2, float d3) {
//    float max = d1;
//    if (max < d2) {
//        max = d2;
//    }
//    else if (max < d3) {
//        max = d3;
//    }
//    return max;
//}
//
//
//int main() {
//	int n;
//    int m = 0;
//	scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        float d1, d2, d3;
//        scanf("%f %f %f", &d1, &d2, &d3);
//        float player_max = max(d1, d2, d3);
//        if (player_max > m) {
//            m = player_max;
//            m = i;
//        }
//    }
//
//    printf("%d %.2f\n", m, best_score);
//	return 0;
//}




//float max(float d1, float d2, float d3) {
//    float max = d1;
//    if (d2 > max) {
//        max = d2;
//    }
//    if (d3 > max) {
//        max = d3;
//    }
//    return max;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    float best_score = 0;
//    int best_player = 0;
//
//    for (int i = 1; i <= n; i++) {
//        float d1, d2, d3;
//        scanf("%f %f %f", &d1, &d2, &d3);
//        float player_max = max(d1, d2, d3);
//        if (player_max > best_score) {
//            best_score = player_max;
//            best_player = i;
//        }
//    }
//
//    printf("%d %.2f\n", best_player, best_score);
//
//    return 0;
//}



//int main() {
//	int a, b, c, d, e, f, g, h, i, j, k;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//	scanf("%d", &d);
//	scanf("%d", &e);
//	scanf("%d", &f);
//	scanf("%d", &g);
//	scanf("%d", &h);
//	scanf("%d", &i);
//	scanf("%d", &j);
//	double sum = 0;
//	sum = a * 28.9 + b * 32.7 + c * 45.6 + d * 78 + e * 35 + f * 86.2 + g * 27.8 + h * 43 + i * 56 + j * 65;
//	printf("%.1lf", sum);
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

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
//    if (flag == 0)
//        printf("Not Found");
//
//    return 0;
//}




//#define N 10  
//
//typedef struct Shangpin {
//    char name[11];
//    double price;
//    int kg;
//} Shangpin;
//
//int main() {
//    int n;
//    int m = 0;
//    int i = 0;
//    Shangpin sp[N];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%s %lf %d", sp[i].name, &sp[i].price, &sp[i].kg);
//    }
//
//    for (i = 0; i < n; i++) {
//        if (sp[m].kg < sp[i].kg) {
//            m = i;
//        }
//        else if (sp[m].kg == sp[i].kg && sp[m].price < sp[i].price) {
//            m = i;
//        }
//    }
//
//    printf("%s %.2lf %d", sp[m].name, sp[m].price, sp[m].kg);
//    return 0;
//}

//#include <stdio.h>
//
//#define N 20
//
//int main() {
//    int n, m;
//    int i, j;
//    int arr1[N][N];
//    int arr2[N][N];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d", arr1[i][j] + arr2[i][j]);
//            if (j < m - 1)
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//#define N 20
//
//typedef struct person {
//	char name[20];
//	int price1;
//	int price2;
//	int price3;
//	double zprice;
//}person;
//
//int main() {
//	int n;
//	person p[N];
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%s %d %d %d", p[i].name, &p[i].price1, &p[i].price2, &p[i].price3);
//		p[i].zprice = p[i].price1 + p[i].price2 - p[i].price3;
//	}
//
//	for (int i = 0; i < n; i++) {
//		printf("%s %.2lf\n", p[i].name, p[i].zprice);
//	}
//	return 0;
//}




//int main() {
//	int n;
//	int m;
//	scanf("%d", &n);
//
//	if (n <= 3500) {
//		m = 0;
//	}
//	else if (n > 3500 && n <= 5000) {
//		m = 1500 * 0.05;
//	}
//	else if (n > 5000 && n <= 12000) {
//		m = (n - 5000) * 0.1 + 1500 * 0.05;
//	}
//	else if (n > 12000) {
//		m = (n - 12000) * 0.15 + 7000 * 0.1 + 1500 * 0.05;
//	}
//
//	printf("%d", m);
//	return 0;
//}


//int main() {
//	int n;
//	int i;
//	int m = 0;
//	int arr[7];
//
//	for (i = 0; i < 7; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 7; i++) {
//		if (arr[m] < arr[i]) {
//			m = i;
//		}
//	}
//
//	printf("选手最高得分：%d", arr[m]);
//	return 0;
//}

//void swap(int* a, int* b) {
//	int c = *a;
//	*a = *b;
//	*b = c;
//}
//
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}


//int CapitalStatistics(char* p);
//int main()
//{
//    char str[1001];
//    gets(str);
//    printf("Capital = %d\n", CapitalStatistics(str));
//    return 0;
//}
//int CapitalStatistics(char* p) {
//    //p是指向字符串的指针。函数的返回值是统计结果。
//    //请将函数代码补充完整
//    int c = 0;
//    while (*p != '\0') {
//        if (*p <= 'Z' && *p >= 'A') {
//            c++;
//        }
//        p++;
//    }
//    return c;
//}


//int CapitalStatistics(char* p) {
//    int count = 0;
//
//    while (*p != '\0') {
//        if (*p >= 'A' && *p <= 'Z') {
//            count++;
//        }
//        p++; // move to the next character
//    }
//
//    return count;
//}
//
//int main() {
//    char str[1001];
//    gets(str);
//    printf("Capital = %d\n", CapitalStatistics(str));
//    return 0;
//}

//#define N 20
//
//int main() {
//	int n;
//	int i;
//	double sum = 0;
//	double aver;
//	double arr[N];
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%lf", &arr[i]);
//		sum += arr[i];
//	}
//	aver = sum / n;
//
//	for (i = 0; i < n - 1; i++) {
//		if (aver < arr[i]) {
//			printf("%.1lf ", arr[i] * 0.9);
//		}
//		else {
//			printf("%.1lf ", arr[i]);
//		}
//	}
//
//	if (aver < arr[n - 1]) {
//		printf("%.1lf", arr[n - 1] * 0.9);
//	}
//	else {
//		printf("%.1lf", arr[n - 1]);
//	}
//	return 0;
//}

#include <stdio.h>

//int find666(int* nums, int n) {
//    for (int i = 0; i < n; i++) {
//        if (nums[i] == 666) {
//            return i + 1; 
//        }
//    }
//    return -1; 
//}
//
//int main() {
//    int nums[1000];
//    int n = 0;
//    int num;
//
//    while (scanf("%d", &num) == 1) {
//        nums[n] = num;
//        n++;
//        if (getchar() == '\n') {
//            break;
//        }
//    }
//
//    printf("%d\n", find666(nums, n));
//    return 0;
//}

//
//#define N 100
//
//
//int main() {
//	int n;
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	scanf("%d", &n);
//
//	int arr[N];
//
//	while (1) {
//		scanf("%d", &arr[x]);
//		x++;
//		if (getchar() == '\n') {
//			break;
//		}
//	}
//	for (i = 0; i < x; i++) {
//		if (arr[i] == 666) {
//			j++;
//		}
//	}
//	printf("%d", j); 
//	return 0;
//}

//double yuanzhu(double h, double r) {
//	double V = 3.14 * r * r * h;
//	return V;
//}
//
//
//int main() {
//	double h = 0;
//	double r = 0;
//	double V;
//	scanf("%lf %lf", &h, &r);
//	V = yuanzhu(h, r);
//
//	printf("%.2lf", V);
//	return 0;
//}





//int main() {
//	int n;
//	scanf("%d", &n);
//
//	n %= 7;
//
//	if (n < 0) {
//		n += 7;
//	}
//
//	if (n == 0) {
//		printf("星期四");
//	}
//	else if (n == 1) {
//		printf("星期五");
//	}
//	else if (n == 2) {
//		printf("星期六");
//	}
//	else if (n == 3) {
//		printf("星期日");
//	}
//	else if (n == 4) {
//		printf("星期一");
//	}
//	else if (n == 5) {
//		printf("星期二");
//	}
//	else if (n == 6) {
//		printf("星期三");
//	}
//
//	return 0;
//}

//#define N 20
//
//int main() {
//	int n;
//	int count = 0;
//	int sum = 0;
//	int arr[N];
//	double average = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n; i++) {
//		if (arr[i] % 2 == 0) {
//			sum += arr[i];
//			count++;
//		}
//	}
//
//	if (count == 0) {
//		printf("average=0.00");
//	}
//	else {
//		average = sum * 1.0 / count;
//		printf("average=%.2lf", average);
//	}
//
//	return 0;
//}


//int main() {
//	int t = 0, s = 0, i;
//	for(i = 1; i <= 4; i++) {
//		t = i + t * 10;
//		s = s + t;
//	}
//	printf("s=%d\n", s);
//	return 0;
//}


//int main() {
//	int n = 1;
//	printf("%d", !n);
//	return 0;
//}





// 判断一个整数是否是素数
//int isPrime(int a) {
//    if (a <= 1) {
//        return 0; // 0 和 1 不是素数
//    }
//    for (int i = 2; i * i <= a; i++) {
//        if (a % i == 0) {
//            return 0; // 如果能整除，说明不是素数
//        }
//    }
//    return 1; // 其他情况为素数
//}
//
//int main() {
//    int num;
//    printf("请输入一个整数：");
//    scanf("%d", &num);
//
//    if (isPrime(num)) {
//        printf("%d 是素数\n", num);
//    }
//    else {
//        printf("%d 不是素数\n", num);
//    }
//
//    return 0;
//}

//int main() {
//	int flag = 0;
//	int arr[11];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] % 7 == 0) {
//			printf("%d", arr[i]);
//			flag = 1;
//			break;
//		}
//	}
//
//	if (flag == 0) {
//		printf("not exist");
//	}
//	return 0;
//}


//#define N 20
//
//int main() {
//	int arr[N][N];
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	printf("%d", arr[0][0] + arr[2][2]);
//	return 0;
//}



//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 12 != 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}