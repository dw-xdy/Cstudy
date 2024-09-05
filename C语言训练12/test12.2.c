#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"


//鸡兔同笼问题的求解方法
//1. 不用for循环, 直接进行求解
//int main() {
//    int a, b;
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//
//    a = (n - (m * 4)) / 2;  // 先计算并赋值给 a
//    b = m - a;
//
//    printf("%d %d", a, b);
//
//    return 0;
//}


//直接使用for循环, 找到对应的数字
//int main() {
//    int m, n;
//    int i = 0;
//
//    scanf("%d %d", &m, &n);
//    for (i = 0; i <= m; i++) {
//        if (i * 2 + (m - i) * 4 == n) {
//            break;
//        }
//    }
//
//    printf("%d %d", i, m - i);
//
//    return 0;
//}




//int main() {
//	int n;
//	int a, b;
//	scanf("%d", &n);
//
//	a + b == n;   //一定要好好理解这个“=”的意义, 或者说不同符号的意义和作用, 还有使用方法, 毕竟使用错误是一个很麻烦的事情, 加油啊!!!!
//	              //实在不行可以再去看一下鹏哥的课程! 
//	return 0;
//}



//int main() {
//	int n;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	return 0;
//}



//int main() {
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	printf("sizeof(arr) = %lu\n", sizeof(arr));
//	return 0;
//}

//阶乘!
//int main() {
//	int n;
//	int sum = 1;
//	scanf("%d", &n);
//
//	if (n == 0 || n == 1) {
//		printf("%d", sum);
//	}
//	else if (n > 1) {
//		for (int i = 1; i <= n; i++) {
//			sum *= i;
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}


//
//int main() {
//	int arr[5] = { 12, 13, 14, 78, 99 };
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	double aver = 0;
//	int sum = 0;
//
//	for (i = 0; i < 5; i++) {
//		sum += arr[i];
//	}
//
//	aver = sum * 1.0 / 5;
//
//	for (i = 0; i < 5; i++) {
//		if (arr[i] > aver) {
//			m = i;
//			break;
//		}
//	}
//
//	for (i = m; i < 5; i++) {
//		if (arr[i] > aver) {
//			n = i;
//		}
//	}
//
//
//	printf("%d %d", arr[m], arr[n]);
//	return 0;
//}


//上面那道程序的改进, 这样可以使得代码更加简洁, 只用一次遍历就完成了任务!
//#include <stdio.h>
//
//int main() {
//    int arr[5] = { 12, 13, 14, 78, 99 };
//    int i = 0;
//    int m = 0;
//    int n = 0;
//    double aver = 0;
//    int sum = 0;
//
//    // 计算数组元素的总和
//    for (i = 0; i < 5; i++) {
//        sum += arr[i];
//    }
//
//    // 计算平均值
//    aver = sum * 1.0 / 5;
//
//    // 一次遍历找到第一个和最后一个大于平均值的元素
//    for (i = 0; i < 5; i++) {
//        if (arr[i] > aver) {
//            if (m == 0) {
//                m = i; 
//            }                    
//            n = i;
//        }
//    }
//
//    // 输出结果
//    if (m != 0 && n != 0) {
//        printf("%d %d", arr[m], arr[n]);
//    } else {
//        printf("No elements greater than average found.");
//    }
//
//    return 0;
//}




//int main() {
//	int a = 100;
//	int b = 890;
//
//	printf("之前的a = %d b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("现在的a = %d b = %d", a, b);
//	return 0;
//}


//int main() {
//
//	printf("What's your name?");
//	char answer[100];
//	scanf("%s", answer);
//
//	printf("hello, %s", answer);
//	return 0;
//}



//int main() {
//	int x;
//	int y;
//
//	scanf("%d %d", &x, &y);
//
//	printf("%f", x / (double)y);
//	return 0;
//}

//int main() {
//	for (int i = 0; i < 4; i++) {
//		printf("i is %d\n", i);
//		printf("#\n");
//	}
//	return 0;
//}

//int main() {
//	char name[100] = "John";
//
//	for (int i = 0; i < 4; i++) {
//		printf("%c", name[i]);
//	}
//
//	return 0;
//}

//int main() {
//	char* name = "John";
//
//	printf("%s", name);
//	return 0;
//}


//int main() {
//	char* name[] = { "John", "fengxiaowei", "liuhuiqian" };
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s ", name[i]);
//	}
//	return 0;
//}


//int main() {
//	char s[100];
//
//	printf("Before: ");
//	scanf("%s", s);
//	printf("After:  ");
//
//	for (int i = 0, n = strlen(s); i < n; i++) {
//		if (s[i] >= 'a' && s[i] <= 'z') {
//			printf("%c", s[i] - 32);
//		}
//		else {
//			printf("%c", s[i]);
//		}
//	}
//	return 0;
//}

//
//int main() {
//	char s[100];
//
//	printf("Before: ");
//	scanf("%s", s);
//	printf("After:  ");
//
//	for (int i = 0, n = strlen(s); i < n; i++) {
//		printf("%c", toupper(s[i]));
//	}
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//// 比较函数，用于qsort
//int compare(const void* a, const void* b) {
//    return (*(int*)a - *(int*)b);
//}
//
//// 求解中位数的函数
//double findMedian(int arr[], int n) {
//    // 先对数组进行排序
//    qsort(arr, n, sizeof(int), compare);
//
//    // 如果数组长度是偶数，返回中间两个数的平均值
//    if (n % 2 == 0) {
//        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
//    }
//    else {
//        // 如果数组长度是奇数，返回中间的数
//        return arr[n / 2];
//    }
//}
//
//int main() {
//    int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    double median = findMedian(arr, n);
//    printf("中位数是: %f\n", median);
//
//    return 0;
//}



//int main() {
//	int numbers[] = { 20, 500, 10, 5, 100, 1, 50 };
//
//	int n = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < 7; i++) {
//		if (numbers[i] == n) {
//			printf("Found");
//			return 0;
//		}
//	}
//
//	printf("NOT FOUND");
//	return 1;
//}


//进行字符串的查询, 这里要注意scanf函数的使用, 
//int main() {
//	char* name[6] = { "battleship", "boot", "cannon", "iron", "thimble", "top hat" };
//	char string[20];
//
//	scanf("%[^\n]", string);
//
//	for (int i = 0; i < 6; i++) {
//		if (strcmp(name[i], string) == 0) {
//			printf("Found\n");
//			return 0;
//		}
//	}
//
//	printf("Not Found\n");
//	return 0;
//}

//写一个“电话簿”
//int main() {
//	string names[] = { "Carter", "David", "John" };
//	string numbers[] = { "+1-617-498-1000", "+1-898-893-1000", "+1-939-854-1000" };
//
//	string name = get_string("Name: ");
//
//	for (int i = 0; i < 3; i++) {
//		if (strcmp(names[i], name) == 0) {
//			printf("%s", numbers[i]);
//			return 0;
//		}
//	}
//
//	printf("Not Found");
//	return 1;
//}


#define MAX 100

//typedef struct person {
//	string name;
//	string number;
//}person;
//
//
//
//
//int main() {
//	person people[MAX];
//
//	people[0].name = "Carter";
//	people[0].number = "+1-617-498-1000";
//
//	people[0].name = "David";
//	people[0].number = "+1-898-893-1000";
//
//	people[0].name = "John";
//	people[0].number = "+1-939-854-1000";
//	
//	string name = get_string("Name: ");
//	
//	for (int i = 0; i < 3; i++) {
//		if (strcmp(people[i].name, name) == 0) {
//			printf("%s", people[i].number);
//			return 0;
//		}
//	}
//	
//	printf("Not Found");
//	return 1;
//}


//void selectionSort(int arr[], int n) {
//    int i, j, minIndex, temp;
//    for (i = 0; i < n - 1; i++) {
//        minIndex = i;
//        for (j = i + 1; j < n; j++) {
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;
//            }
//        }
//        // 交换 arr[i] 和 arr[minIndex]
//        temp = arr[i];
//        arr[i] = arr[minIndex];
//        arr[minIndex] = temp;
//    }
//}
//
//void printArray(int arr[], int size) {
//    int i;
//    for (i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[] = { 64, 25, 12, 22, 11 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    selectionSort(arr, n);
//    printf("排序后的数组: \n");
//    printArray(arr, n);
//    return 0;
//}
//


//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//
//int main() {
//	int arr[10] = { 23, 443, 543, 78, 432, 4242, 56, 654, 55, 765 };
//
//	for (int i = 0; i < 10 - 1; i++) {
//		for (int j = 0; j < 10 - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//// 函数声明
//void bubbleSort(int arr[], int n);
//void printArray(int arr[], int size);
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    bubbleSort(arr, n);
//    printf("排序后的数组: \n");
//    printArray(arr, n);
//    return 0;
//}
//
//// 冒泡排序函数
//void bubbleSort(int arr[], int n) {
//    int i, j;
//    for (i = 0; i < n - 1; i++) {
//        // 最后i个元素已经是有序的
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                // 交换arr[j]和arr[j+1]
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//// 打印数组函数
//void printArray(int arr[], int size) {
//    int i;
//    for (i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}



//int main() {
//	int height = get_int("Height: ");
//
//	//迭代形式的超级马里奥石块打印
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("#");
//		}
//		printf("\n");
//	}
//	return 0;
//}





//int main() {
//	int n = 90;
//	int m = 90;
//
//	printf("%p\n", &n);
//	printf("%p", &m);
//	return 0;
//}

//int main() {
//	string s = "HI!";
//
//	printf("%p\n", s);
//	printf("%p\n", &s[0]);
//	printf("%p\n", &s[1]);
//	printf("%p\n", &s[2]);
//	printf("%p", &s[3]);
//
//
//	return 0;
//} 


//int main() {
//	string s = get_string("");
//	string t = get_string("");
//
//	if (strcmp(s, t) == 0) {
//		printf("Same");
//	}
//	else {
//		printf("Different");
//	}
//
//}



//int main() {
//	char* s = get_string("s: ");
//	char* t = malloc(strlen(s) + 1);
//
//	if (t == NULL) {
//		return 1;
//	}
//
//	strcpy(t, s);
//
//	if (strlen(t) > 0) {
//		t[0] = toupper(t[0]);
//	}
//
//	printf("%s\n", s);
//	printf("%s\n", t);
//
//
//	return 0;
//}


//int main() {
//	int* x = malloc(3 * sizeof(int));
//	x[0] = 72;
//	x[1] = 22;
//	x[2] = 33;
//	printf("%d", x[0]);
//	free(x);
//
//	
//	return 0;
//}


//int main() {
//	int* x;
//	int* y;
//
//	x = malloc(sizeof(int));
//
//	*x = 42;
//
//	y = x;
//
//	*y = 13;
//	return 0;
//}


//int main() {
//	char* s;
//
//	printf("s: ");
//
//	scanf("%s", s);
//
//	printf("%s", s);
//	return 0;
//}




//#define CAPACITY 50 //capacity 容量
//
//typedef struct queue {
//	person people[CAPACITY];
//	int size;
//}queue;



//将一个数组进行复制, 然后进行一个插入, 这个方案的工作量很大, 而且会浪费时间.
//int main() {
//	int* list = malloc(3 * sizeof(int));
//	if (list == NULL) {
//		return 1;
//	}
//
//	list[0] = 1;
//	list[1] = 2;
//	list[2] = 3;
//
//	int* tmp = malloc(4 * sizeof(int));
//	if (tmp == NULL) {
//		free(list);
//		return 1;
//	}
//
//	for (int i = 0; i < 3; i++) {
//		tmp[i] = list[i];
//	}
//	tmp[3] = 4;
//	free(list);
//
//	list = tmp;
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", list[i]);
//	}
//
//	free(list);
//
//
//	return 0;
//}



//链表
// -> 和.是用于访问结构体成员的两种不同操作符。它们的使用取决于你是通过结构体变量还是通过指向结构体的指针来访问成员。

// 以后使用“结构体和指针”的时候要注意定义和使用方式.
// “指针”以后要先读一遍：(struct node* next)：next是一个指向“结构体node”的“指针变量”.
// 结构体：我创建一个名为：“node的结构体类型”, 是和“int”一样的类型.
//typedef struct node {
//	int number;
//	struct node* next;  // 其实也不用对这个有什么疑问, “next是指向一个'数据结构': 结构体node'的指针变量”,  
//}node;                  // node是一个“数据类型”, 不是一个特定的什么东西(整个程序中只能有一个什么的”, node和int是一样的东西, 都是数据结构
//                        // 就比如：int n; 我当然也可以进行一个 node n;  int 和 node是一样的!
//                        // 我可以 int a, b, c; 当然也可以 node(struct node) a, b, c!
//
//
//int main() {//这里要搞清楚指针的定义, 指针就是指针, 指针使用来存放“内存位置”的, int类型的指针是“指向int类型的指针”.
//    node* list = NULL;  //这里创建了一个指向节点的指针, 这个指针指向的内存是空的(不是什么垃圾数)
//    node* n = malloc(sizeof(node));
//	
//	n->number = 1;  //(*n).number = 1 这种表示方式也是正确的, 但是总是有点不太方便,所以还是用箭头吧, 也更加直观一点
//	n->next = NULL;  //要确保指向的内存是空的, 若是不进行约束的话, next指针就会指向一个“垃圾值”.
//
//	list = n;
//
//	return 0;
//}


// 将秒转化为对应的小时, 分钟, 秒
//int main() {
//	int seconds;
//
//	scanf("%d", &seconds);
//
//	int hour = 0;
//	int minute = 0;
//	int second = 0;
//
//	hour = seconds / 60 / 60;
//	minute = seconds / 60 % 60;
//	second = seconds % 60;
//
//	printf("%d %d %d", hour, minute, second);
//	return 0;
//}


//typedef struct node {
//	int number;
//	struct node* next;
//}node;


//int main() {
//	node* list = NULL;  
//	node* n = malloc(sizeof(node));
//
//	n->number = 1;    // 这里用“n”对结构体“node”中的元素进行访问, 只要进行访问了, 能对应的功能就是“结构体“node”中的元素”的功能,
//	n->next = NULL;   // 比如这里的 number 就是int类型的, 所以发挥的是int类型的作用, 
//						  // next是 指向“结构体“node”的指针”, 所以发挥的作用是指针类型的作用
//						  // 所以这里并不是将“n”指向了NULL, 而是将next指向了NULL
//
//	list = n;
//
//	return 0;
//}

//typedef struct node {
//	int number;
//	struct node* next;
//}node;
//
//int main() {
//	node* list = NULL;
//	node* n = malloc(sizeof(node));  //这是一个将创建的“node结构体”放置的临时位置
//
//	n->number = 1;
//	n->next = NULL;
//
//	list = n;
//
//	node* n = malloc(sizeof(node)); //这行代码再次使用 malloc 函数为一个新的 node 结构体分配内存，
//	                                //并将指向这块内存的指针赋值给 n。注意，这里的 n 是一个新的指针，与之前指向第一个节点的 n 不同。
//
//	n->number = 2;
//	n->next = list;
//
//	list = n;
//
//
//	return 0;
//}



//
//typedef struct node {
//	int val;  //值
//	struct node* next
//}node;
//
//int main() {
//	node* head = NULL;
//	node* list = malloc(sizeof(node));
//
//    list->val = 1;
//    list->next = NULL;
//
//	return 0;
//}


//int main() {
//	double n = 0.1;
//
//	printf("%.90lf", n);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// 计算基尼系数
//double calculateGini(double* wealth, int n) {
//    double sumOfAbsoluteDifferences = 0;
//    double sumOfWealth = 0;
//    for (int i = 0; i < n; i++) {
//        sumOfWealth += wealth[i];
//        for (int j = 0; j < n; j++) {
//            sumOfAbsoluteDifferences += fabs(wealth[i] - wealth[j]);
//        }
//    }
//    return sumOfAbsoluteDifferences / (2 * n * sumOfWealth);
//}
//
//// 完全按照说的来实验
//void experiment(int n, int t) {
//    double* wealth = (double*)malloc(n * sizeof(double));
//    int* hasMoney = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        wealth[i] = 100;
//    }
//    for (int i = 0; i < t; i++) {
//        for (int j = 0; j < n; j++) {
//            hasMoney[j] = (wealth[j] > 0) ? 1 : 0;
//        }
//        for (int j = 0; j < n; j++) {
//            if (hasMoney[j]) {
//                int other = j;
//                do {
//                    other = rand() % n;
//                } while (other == j);
//                wealth[j]--;
//                wealth[other]++;
//            }
//        }
//    }
//    // 排序
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (wealth[i] > wealth[j]) {
//                double temp = wealth[i];
//                wealth[i] = wealth[j];
//                wealth[j] = temp;
//            }
//        }
//    }
//    printf("列出每个人的财富(贫穷到富有) : \n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", (int)wealth[i]);
//        if (i % 10 == 9) {
//            printf("\n");
//        }
//    }
//    printf("\n");
//    printf("这个社会的基尼系数为 : %f\n", calculateGini(wealth, n));
//    free(wealth);
//    free(hasMoney);
//}
//
//int main() {
//    srand(time(0)); // 初始化随机数种子
//
//    printf("一个社会的基尼系数是一个在0~1之间的小数\n");
//    printf("基尼系数为0代表所有人的财富完全一样\n");
//    printf("基尼系数为1代表有1个人掌握了全社会的财富\n");
//    printf("基尼系数越小，代表社会财富分布越均衡；越大则代表财富分布越不均衡\n");
//    printf("在2022年，世界各国的平均基尼系数为0.44\n");
//    printf("目前普遍认为，当基尼系数到达 0.5 时\n");
//    printf("就意味着社会贫富差距非常大，分布非常不均匀\n");
//    printf("社会可能会因此陷入危机，比如大量的犯罪或者经历社会动荡\n");
//    printf("测试开始\n");
//    int n = 100;
//    int t = 1000000;
//    printf("人数 : %d\n", n);
//    printf("轮数 : %d\n", t);
//    experiment(n, t);
//    printf("测试结束\n");
//
//    return 0;
//}


//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	printf("交换之前");
//	printf("%d, %d\n", a, b);
//	swap(&a, &b);
//
//	printf("交换之后");
//	printf("%d, %d", a, b);
//
//	return 0;
//}



//链表进行实现  C语言中链表实现还是有点麻烦的, 毕竟也是一个有高度自由的语言, 比起Java有点难了
typedef struct ListNode {
	int val;
	struct ListNode* next;
} ListNode;

void printList(ListNode* head) {
	ListNode* currrent = head;
	while (currrent != NULL) {
		printf("%d -> ", currrent->val);
		currrent = currrent->next;
	}
	printf("NULL");
}

ListNode* resver(ListNode* head) {
	ListNode* pre = NULL;
	ListNode* next = NULL;

	while (head != NULL) {
		next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}

	return pre;
}

// 合并两个有序链表, 这个是我用C语言写的, 虽然最开始使用Java语言学习的,但是我还是用C语言进行实现了, 还是很有成就感的.
ListNode* mergeDoubleList(ListNode* head1, ListNode* head2) {
	if (head1 == NULL || head2 == NULL) {
		return (head1 == NULL) ? head2 : head1;
	}

	ListNode* head = (head1->val <= head2->val) ? head1 : head2;
	ListNode* cur1 = head->next;
	ListNode* cur2 = (head == head1) ? head2 : head->next;
	ListNode* pre = head;

	while (cur1 != NULL && cur2 != NULL) {
		if (cur1->val <= cur2->val) {
			pre->next = cur1;
			cur1 = cur1->next;
		} else {
			pre->next = cur2;
			cur2 = cur2->next;
		}
		pre = pre->next;
	}
	pre->next = (cur1 == NULL) ? cur2 : cur1;
	return head;
}


// 创建链表节点的辅助函数
ListNode* createNode(int val) {
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->val = val;
	newNode->next = NULL;
	return newNode;
}

// 释放链表内存的辅助函数
void freeList(ListNode* head) {
	ListNode* current = head;
	while (current != NULL) {
		ListNode* temp = current;
		current = current->next;
		free(temp);
	}
}

// 用C语言实现两个链表的相加, 利用链表对两个比较大的数字相加.
ListNode* addTwoList(ListNode* h1, ListNode* h2) {
	ListNode* ans = NULL;
	ListNode* pre = NULL;

	int carry = 0;
	while (h1 != NULL || h2 != NULL) {
		int sum = 0;

		sum = ((h1 == NULL) ? 0 : h1->val) +
			  ((h2 == NULL) ? 0 : h2->val) +
			  carry;

		int val = sum % 10;
		carry = sum / 10;

		if (ans == NULL) {
			ans = createNode(val);
			pre = ans;
		} else {
			pre->next = createNode(val);
			pre = pre->next;
		}

		h1 = (h1 == NULL) ? NULL : h1->next;
		h2 = (h2 == NULL) ? NULL : h2->next;
	}

	if (carry == 1) {
		pre->next = createNode(1);
	}

	return ans;
}


//int main() {
//	ListNode node1 = { 1, NULL };
//	ListNode node2 = { 2, NULL };
//	ListNode node3 = { 3, NULL };
//	ListNode node4 = { 4, NULL };
//	ListNode node5 = { 5, NULL };
//
//	node1.next = &node2;
//	node2.next = &node3;
//	node3.next = &node4;
//	node4.next = &node5;
//
//
//	ListNode node6 = { 6, NULL };
//	ListNode node7 = { 7, NULL };
//	ListNode node8 = { 8, NULL };
//	ListNode node9 = { 9, NULL };
//	ListNode node10 = { 8, NULL };
//
//	node6.next = &node7;
//	node7.next = &node8;
//	node8.next = &node9;
//	node9.next = &node10;
//
//
//	printList(addTwoList(&node1, &node6));
////printList(mergeDoubleList(&node1, &node6));
//// 
//// 
//// 
//// 
//// 
////	//printList(&node1);
////	//printf("\n");
////
////	//ListNode* pre = resver(&node1);
////	//printList(pre);
////
////	return 0;
//}
