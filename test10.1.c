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

