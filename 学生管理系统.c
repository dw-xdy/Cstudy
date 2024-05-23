#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>



//定义一个学生 (使用结构体)
typedef struct Student {
	char name[20];   //姓名
	int age;         //年龄
	int num;		 //学号, 我觉得定义成“char”类型的比较好,因为如果有开头是“0”的数字用“int”类型的打印不出来!
	int score;       //成绩
}Student;

//节点 (使用链表这种数据结构)
typedef struct Node {
	Student stu;         //学生
	struct Node* pNext;  //指向下一个节点的指针
}Node;

//定义一个头结点
Node* pHead = NULL;




void Welcome(); //开始的界面信息
void IntputStudent();  //录入学生信息
void PrintStudent();   //打印学生信息
void SaveStudent();    //保存学生信息
void ReadStudent();    //读取学生信息
int CountStudent();    //统计学生人数
Node* FindStudent();   //查找学生信息
void ModifyStudent();  //修改学生信息
void DeleteStudent();  //删除学生信息



int main() {
	while (1) {
		Welcome();  //开始的界面信息

		char ch = getch();   //从键盘上输入字符  
		switch (ch) {
		case '1':  //录入学生信息
			IntputStudent();
			break;
		case '2':  //打印学生信息
			PrintStudent();
			break;
		case '3':  //保存学生信息
			SaveStudent();
			break;
		case '4':  //读取学生信息
			ReadStudent();
			break;
		case '5':  //统计所有学生人数
			printf("学生总人数：%d\n", CountStudent());

			system("pause");    //暂停操作
			system("cls");      //清屏操作
			break;
		case '6':  //查找学生信息 
		{
			Node* p = FindStudent();
			if (p != NULL) {
				printf("学号：%d\t姓名：%s\t年龄：%d\t成绩：%d\n", p->stu.num, p->stu.name, p->stu.age, p->stu.score);
			}
			else {
				printf("没有找到该学员\n");
			}

			system("pause");    //暂停操作
			system("cls");      //清屏操作
			break;
		}
		case '7':  //修改学生信息
			ModifyStudent();
			break;
		case '8':  //删除学生信息
			DeleteStudent();
			break;
		case '0':  //退出系统
			printf("bye bye!!!");
			return 0;
		default:
			printf("您的输入有误, 请重新输入.\n");
			system("pause");    //暂停操作
			system("cls");      //清屏操作
			break;
		}
	}


	return 0;
}



//开始的界面信息的函数
void Welcome() {
	printf("*****************************************\n");
	printf("*\t欢迎使用高校学生成绩管理系统\t*\n");
	printf("*****************************************\n");
	printf("*\t\t请选择功能列表\t\t*\n");
	printf("*****************************************\n");
	printf("*\t\t1.录入学生信息\t\t*\n");
	printf("*\t\t2.打印学生信息\t\t*\n");
	printf("*\t\t3.保存学生信息\t\t*\n");
	printf("*\t\t4.读取学生信息\t\t*\n");
	printf("*\t\t5.统计所有学生人数\t*\n");
	printf("*\t\t6.查找学生信息\t\t*\n");
	printf("*\t\t7.修改学生信息\t\t*\n");
	printf("*\t\t8.删除学生信息\t\t*\n");
	printf("*\t\t0.退出系统\t\t*\n");
	printf("*****************************************\n");
	printf("请输入数字：(0 ~ 8)\n\n");
}

//录入学生信息的函数
void IntputStudent() {
	//创建一个新的节点
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	//头插法
	if (pHead == NULL) {
		pHead = pNewNode;
	}
	else {
		pNewNode->pNext = pHead;
		pHead = pNewNode;
	}

	printf("请输入学生姓名：\n");
	scanf("%s", pNewNode->stu.name);
	printf("请输入学生年龄：\n");
	scanf("%d", &pNewNode->stu.age);	
	printf("请输入学生学号：\n");
	scanf("%d", &pNewNode->stu.num);
	printf("请输入学生成绩：\n");
	scanf("%d", &pNewNode->stu.score);

	printf("学生信息录入成功.\n");
	system("pause");    //暂停操作
	system("cls");      //清屏操作
}

//打印学生信息的函数
void PrintStudent() {
	system("cls");      //清屏操作
	printf("*****************************************\n");
	printf("*\t欢迎使用高校学生成绩管理系统\t*\n");
	printf("*****************************************\n");
	
	printf("*\t学号\t*\t姓名\t*\t年龄\t*\t成绩*\n");
	printf("*****************************************\n");

	//遍历链表
	Node* p = pHead;
	while (p != NULL) {
		printf("*\t%d\t*\t%s\t*\t%d\t*\t%d*\n",
			p->stu.num,
			p->stu.name,
			p->stu.age,
			p->stu.score);

		p = p->pNext;
	}

	system("pause");    //暂停操作
	system("cls");      //清屏操作
}

//保存学生信息的函数
void SaveStudent() {
	system("cls");      //清屏操作

	//打开文件
	FILE* fp = fopen("E:\\stuinfo,dat", "w");

	if (fp == NULL) {
		printf("打开文件失败");
		return;
	}


	//遍历链表
	Node* p = pHead;
	while (p != NULL) {
		fwrite(&p->stu, 1, sizeof(Student), fp);
		p = p->pNext;
	}
	//关闭文件
	fclose(fp);
	printf("\n数据保存成功\n");

	system("pause");    //暂停操作
	system("cls");      //清屏操作
}


//读取学生信息的函数
void ReadStudent() {
	FILE* fp = fopen("E:\\stuinfo,dat", "r");
	if (fp == NULL) {
		printf("打开文件失败");
		return;
	}

	//读文件
	Student stu;
	while (fread(&stu, 1, sizeof(Student), fp)) {
		//创建一个新节点
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		
		pNewNode->pNext = NULL;

		memcpy(pNewNode, &stu, sizeof(Student));

		//头插法
		if (pHead == NULL) {
			pHead = pNewNode;
		}
		else {
			pNewNode->pNext = pHead;
			pHead = pNewNode;
		}
	}

	//关闭文件
	fclose(fp);
	printf("加载数据成功.\n");

	system("pause");    //暂停操作
	system("cls");      //清屏操作
}

//统计所有学生人数的函数
int CountStudent() {
	int Count = 0;

	//遍历链表
	Node* p = pHead;
	while (p != NULL) {
		Count++;
		p = p->pNext;
	}

	return Count;

}



//查找学生信息的函数
Node* FindStudent() {
	int nStuNum;
	char szName[20];
	printf("请输入要查找的学生的学号：\n");
	scanf("%d", &nStuNum);

	printf("请输入要查找的学生的姓名：\n");
	scanf("%s", szName);

	Node* p = pHead;
	while (p != NULL) {
		//strcmp字符串比较函数
		if (p->stu.num == nStuNum || 0 == strcmp(p->stu.name, szName)) {
			return p;
		}
		p = p->pNext;
	}

	//没有找到
	return NULL;
}


//修改学生信息的函数
void ModifyStudent() {
	int nStuNum;
	printf("请输入需要修改的学生信息的学号：\n");
	scanf("%d", &nStuNum);

	Node* p = pHead;
	while (p != NULL) {
		//strcmp字符串比较函数
		if (p->stu.num == nStuNum) {
			printf("请输入需要修改的学生姓名 年龄 成绩：\n");
			scanf("%s %d %d", p->stu.name, &p->stu.age, &p->stu.score);
			printf("修改成功\n");
			break;
		}
		p = p->pNext;
	}

	if (p == NULL) {
		printf("没有找到该学生信息.\n");
	}
}

//删除学生信息的函数
void DeleteStudent() {
	int nStuNum;
	printf("请输入要删除的学生的学号：\n");
	scanf("%d", &nStuNum);

	Node* p1;

	//判断是不是头结点
	if (pHead->stu.num == nStuNum) {
		p1 = pHead;
		pHead = pHead->pNext;
		free(p1);

		system("pause");    //暂停操作
		system("cls");      //清屏操作
		return;
	}

	//不是头结点
	Node* p = pHead;
	Node* p2;
	while (p->pNext->stu.num == nStuNum) {
		p2 = p->pNext;
		p->pNext = p->pNext->pNext;
		free(p2);

		system("pause");    //暂停操作
		system("cls");      //清屏操作
		return;

		p = p->pNext;

		if (p->pNext == NULL) {
			break;
		}
	}

	if (p->pNext == NULL) {
		printf("没有找到该学员.\n");
	}

	system("pause");    //暂停操作
	system("cls");      //清屏操作
}