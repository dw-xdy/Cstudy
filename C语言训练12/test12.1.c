#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"


//����ͬ���������ⷽ��
//1. ����forѭ��, ֱ�ӽ������
//int main() {
//    int a, b;
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//
//    a = (n - (m * 4)) / 2;  // �ȼ��㲢��ֵ�� a
//    b = m - a;
//
//    printf("%d %d", a, b);
//
//    return 0;
//}


//ֱ��ʹ��forѭ��, �ҵ���Ӧ������
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
//	a + b == n;   //һ��Ҫ�ú���������=��������, ����˵��ͬ���ŵ����������, ����ʹ�÷���, �Ͼ�ʹ�ô�����һ�����鷳������, ���Ͱ�!!!!
//	              //ʵ�ڲ��п�����ȥ��һ������Ŀγ�! 
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

//�׳�!
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


//�����ǵ�����ĸĽ�, ��������ʹ�ô�����Ӽ��, ֻ��һ�α��������������!
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
//    // ��������Ԫ�ص��ܺ�
//    for (i = 0; i < 5; i++) {
//        sum += arr[i];
//    }
//
//    // ����ƽ��ֵ
//    aver = sum * 1.0 / 5;
//
//    // һ�α����ҵ���һ�������һ������ƽ��ֵ��Ԫ��
//    for (i = 0; i < 5; i++) {
//        if (arr[i] > aver) {
//            if (m == 0) {
//                m = i; 
//            }                    
//            n = i;
//        }
//    }
//
//    // ������
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
//	printf("֮ǰ��a = %d b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("���ڵ�a = %d b = %d", a, b);
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
//// �ȽϺ���������qsort
//int compare(const void* a, const void* b) {
//    return (*(int*)a - *(int*)b);
//}
//
//// �����λ���ĺ���
//double findMedian(int arr[], int n) {
//    // �ȶ������������
//    qsort(arr, n, sizeof(int), compare);
//
//    // ������鳤����ż���������м���������ƽ��ֵ
//    if (n % 2 == 0) {
//        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
//    }
//    else {
//        // ������鳤���������������м����
//        return arr[n / 2];
//    }
//}
//
//int main() {
//    int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    double median = findMedian(arr, n);
//    printf("��λ����: %f\n", median);
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


//�����ַ����Ĳ�ѯ, ����Ҫע��scanf������ʹ��, 
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

//дһ�����绰����
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
//        // ���� arr[i] �� arr[minIndex]
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
//    printf("����������: \n");
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
//// ��������
//void bubbleSort(int arr[], int n);
//void printArray(int arr[], int size);
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    bubbleSort(arr, n);
//    printf("����������: \n");
//    printArray(arr, n);
//    return 0;
//}
//
//// ð��������
//void bubbleSort(int arr[], int n) {
//    int i, j;
//    for (i = 0; i < n - 1; i++) {
//        // ���i��Ԫ���Ѿ��������
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                // ����arr[j]��arr[j+1]
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//// ��ӡ���麯��
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
//	//������ʽ�ĳ��������ʯ���ӡ
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




//#define CAPACITY 50 //capacity ����
//
//typedef struct queue {
//	person people[CAPACITY];
//	int size;
//}queue;



//��һ��������и���, Ȼ�����һ������, ��������Ĺ������ܴ�, ���һ��˷�ʱ��.
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



//����
// -> ��.�����ڷ��ʽṹ���Ա�����ֲ�ͬ�����������ǵ�ʹ��ȡ��������ͨ���ṹ���������ͨ��ָ��ṹ���ָ�������ʳ�Ա��

// �Ժ�ʹ�á��ṹ���ָ�롱��ʱ��Ҫע�ⶨ���ʹ�÷�ʽ.
// ��ָ�롱�Ժ�Ҫ�ȶ�һ�飺(struct node* next)��next��һ��ָ�򡰽ṹ��node���ġ�ָ�������.
// �ṹ�壺�Ҵ���һ����Ϊ����node�Ľṹ�����͡�, �Ǻ͡�int��һ��������.
typedef struct node {
	int number;
	struct node* next;  // ��ʵҲ���ö������ʲô����, ��next��ָ��һ��'���ݽṹ': �ṹ��node'��ָ�������,  
}node;                  // node��һ�����������͡�, ����һ���ض���ʲô����(����������ֻ����һ��ʲô�ġ�, node��int��һ���Ķ���, �������ݽṹ
                        // �ͱ��磺int n; �ҵ�ȻҲ���Խ���һ�� node n;  int �� node��һ����!
                        // �ҿ��� int a, b, c; ��ȻҲ���� node(struct node) a, b, c!


int main() {//����Ҫ�����ָ��Ķ���, ָ�����ָ��, ָ��ʹ������š��ڴ�λ�á���, int���͵�ָ���ǡ�ָ��int���͵�ָ�롱.
    node* list = NULL;  //���ﴴ����һ��ָ��ڵ��ָ��, ���ָ��ָ����ڴ��ǿյ�(����ʲô������)
    node* n = malloc(sizeof(node));

	n->number = 1;  //(*n).number = 1 ���ֱ�ʾ��ʽҲ����ȷ��, ���������е㲻̫����,���Ի����ü�ͷ��, Ҳ����ֱ��һ��
	n->next = NULL;  //Ҫȷ��ָ����ڴ��ǿյ�, ���ǲ�����Լ���Ļ�, nextָ��ͻ�ָ��һ��������ֵ��.
	return 0;
}





/* ����ڵ�ṹ�� */
//typedef struct ListNode {
//    int val;               // �ڵ�ֵ
//    struct ListNode* next; // ָ����һ�ڵ��ָ��
//} ListNode;
//
///* ���캯�� */
//ListNode* newListNode(int val) {
//    ListNode* node;
//    node = (ListNode*)malloc(sizeof(ListNode));
//    node->val = val;
//    node->next = NULL;
//    return node;
//}



