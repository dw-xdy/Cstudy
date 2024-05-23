#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>



//����һ��ѧ�� (ʹ�ýṹ��)
typedef struct Student {
	char name[20];   //����
	int age;         //����
	int num;		 //ѧ��, �Ҿ��ö���ɡ�char�����͵ıȽϺ�,��Ϊ����п�ͷ�ǡ�0���������á�int�����͵Ĵ�ӡ������!
	int score;       //�ɼ�
}Student;

//�ڵ� (ʹ�������������ݽṹ)
typedef struct Node {
	Student stu;         //ѧ��
	struct Node* pNext;  //ָ����һ���ڵ��ָ��
}Node;

//����һ��ͷ���
Node* pHead = NULL;




void Welcome(); //��ʼ�Ľ�����Ϣ
void IntputStudent();  //¼��ѧ����Ϣ
void PrintStudent();   //��ӡѧ����Ϣ
void SaveStudent();    //����ѧ����Ϣ
void ReadStudent();    //��ȡѧ����Ϣ
int CountStudent();    //ͳ��ѧ������
Node* FindStudent();   //����ѧ����Ϣ
void ModifyStudent();  //�޸�ѧ����Ϣ
void DeleteStudent();  //ɾ��ѧ����Ϣ



int main() {
	while (1) {
		Welcome();  //��ʼ�Ľ�����Ϣ

		char ch = getch();   //�Ӽ����������ַ�  
		switch (ch) {
		case '1':  //¼��ѧ����Ϣ
			IntputStudent();
			break;
		case '2':  //��ӡѧ����Ϣ
			PrintStudent();
			break;
		case '3':  //����ѧ����Ϣ
			SaveStudent();
			break;
		case '4':  //��ȡѧ����Ϣ
			ReadStudent();
			break;
		case '5':  //ͳ������ѧ������
			printf("ѧ����������%d\n", CountStudent());

			system("pause");    //��ͣ����
			system("cls");      //��������
			break;
		case '6':  //����ѧ����Ϣ 
		{
			Node* p = FindStudent();
			if (p != NULL) {
				printf("ѧ�ţ�%d\t������%s\t���䣺%d\t�ɼ���%d\n", p->stu.num, p->stu.name, p->stu.age, p->stu.score);
			}
			else {
				printf("û���ҵ���ѧԱ\n");
			}

			system("pause");    //��ͣ����
			system("cls");      //��������
			break;
		}
		case '7':  //�޸�ѧ����Ϣ
			ModifyStudent();
			break;
		case '8':  //ɾ��ѧ����Ϣ
			DeleteStudent();
			break;
		case '0':  //�˳�ϵͳ
			printf("bye bye!!!");
			return 0;
		default:
			printf("������������, ����������.\n");
			system("pause");    //��ͣ����
			system("cls");      //��������
			break;
		}
	}


	return 0;
}



//��ʼ�Ľ�����Ϣ�ĺ���
void Welcome() {
	printf("*****************************************\n");
	printf("*\t��ӭʹ�ø�Уѧ���ɼ�����ϵͳ\t*\n");
	printf("*****************************************\n");
	printf("*\t\t��ѡ�����б�\t\t*\n");
	printf("*****************************************\n");
	printf("*\t\t1.¼��ѧ����Ϣ\t\t*\n");
	printf("*\t\t2.��ӡѧ����Ϣ\t\t*\n");
	printf("*\t\t3.����ѧ����Ϣ\t\t*\n");
	printf("*\t\t4.��ȡѧ����Ϣ\t\t*\n");
	printf("*\t\t5.ͳ������ѧ������\t*\n");
	printf("*\t\t6.����ѧ����Ϣ\t\t*\n");
	printf("*\t\t7.�޸�ѧ����Ϣ\t\t*\n");
	printf("*\t\t8.ɾ��ѧ����Ϣ\t\t*\n");
	printf("*\t\t0.�˳�ϵͳ\t\t*\n");
	printf("*****************************************\n");
	printf("���������֣�(0 ~ 8)\n\n");
}

//¼��ѧ����Ϣ�ĺ���
void IntputStudent() {
	//����һ���µĽڵ�
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	//ͷ�巨
	if (pHead == NULL) {
		pHead = pNewNode;
	}
	else {
		pNewNode->pNext = pHead;
		pHead = pNewNode;
	}

	printf("������ѧ��������\n");
	scanf("%s", pNewNode->stu.name);
	printf("������ѧ�����䣺\n");
	scanf("%d", &pNewNode->stu.age);	
	printf("������ѧ��ѧ�ţ�\n");
	scanf("%d", &pNewNode->stu.num);
	printf("������ѧ���ɼ���\n");
	scanf("%d", &pNewNode->stu.score);

	printf("ѧ����Ϣ¼��ɹ�.\n");
	system("pause");    //��ͣ����
	system("cls");      //��������
}

//��ӡѧ����Ϣ�ĺ���
void PrintStudent() {
	system("cls");      //��������
	printf("*****************************************\n");
	printf("*\t��ӭʹ�ø�Уѧ���ɼ�����ϵͳ\t*\n");
	printf("*****************************************\n");
	
	printf("*\tѧ��\t*\t����\t*\t����\t*\t�ɼ�*\n");
	printf("*****************************************\n");

	//��������
	Node* p = pHead;
	while (p != NULL) {
		printf("*\t%d\t*\t%s\t*\t%d\t*\t%d*\n",
			p->stu.num,
			p->stu.name,
			p->stu.age,
			p->stu.score);

		p = p->pNext;
	}

	system("pause");    //��ͣ����
	system("cls");      //��������
}

//����ѧ����Ϣ�ĺ���
void SaveStudent() {
	system("cls");      //��������

	//���ļ�
	FILE* fp = fopen("E:\\stuinfo,dat", "w");

	if (fp == NULL) {
		printf("���ļ�ʧ��");
		return;
	}


	//��������
	Node* p = pHead;
	while (p != NULL) {
		fwrite(&p->stu, 1, sizeof(Student), fp);
		p = p->pNext;
	}
	//�ر��ļ�
	fclose(fp);
	printf("\n���ݱ���ɹ�\n");

	system("pause");    //��ͣ����
	system("cls");      //��������
}


//��ȡѧ����Ϣ�ĺ���
void ReadStudent() {
	FILE* fp = fopen("E:\\stuinfo,dat", "r");
	if (fp == NULL) {
		printf("���ļ�ʧ��");
		return;
	}

	//���ļ�
	Student stu;
	while (fread(&stu, 1, sizeof(Student), fp)) {
		//����һ���½ڵ�
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		
		pNewNode->pNext = NULL;

		memcpy(pNewNode, &stu, sizeof(Student));

		//ͷ�巨
		if (pHead == NULL) {
			pHead = pNewNode;
		}
		else {
			pNewNode->pNext = pHead;
			pHead = pNewNode;
		}
	}

	//�ر��ļ�
	fclose(fp);
	printf("�������ݳɹ�.\n");

	system("pause");    //��ͣ����
	system("cls");      //��������
}

//ͳ������ѧ�������ĺ���
int CountStudent() {
	int Count = 0;

	//��������
	Node* p = pHead;
	while (p != NULL) {
		Count++;
		p = p->pNext;
	}

	return Count;

}



//����ѧ����Ϣ�ĺ���
Node* FindStudent() {
	int nStuNum;
	char szName[20];
	printf("������Ҫ���ҵ�ѧ����ѧ�ţ�\n");
	scanf("%d", &nStuNum);

	printf("������Ҫ���ҵ�ѧ����������\n");
	scanf("%s", szName);

	Node* p = pHead;
	while (p != NULL) {
		//strcmp�ַ����ȽϺ���
		if (p->stu.num == nStuNum || 0 == strcmp(p->stu.name, szName)) {
			return p;
		}
		p = p->pNext;
	}

	//û���ҵ�
	return NULL;
}


//�޸�ѧ����Ϣ�ĺ���
void ModifyStudent() {
	int nStuNum;
	printf("��������Ҫ�޸ĵ�ѧ����Ϣ��ѧ�ţ�\n");
	scanf("%d", &nStuNum);

	Node* p = pHead;
	while (p != NULL) {
		//strcmp�ַ����ȽϺ���
		if (p->stu.num == nStuNum) {
			printf("��������Ҫ�޸ĵ�ѧ������ ���� �ɼ���\n");
			scanf("%s %d %d", p->stu.name, &p->stu.age, &p->stu.score);
			printf("�޸ĳɹ�\n");
			break;
		}
		p = p->pNext;
	}

	if (p == NULL) {
		printf("û���ҵ���ѧ����Ϣ.\n");
	}
}

//ɾ��ѧ����Ϣ�ĺ���
void DeleteStudent() {
	int nStuNum;
	printf("������Ҫɾ����ѧ����ѧ�ţ�\n");
	scanf("%d", &nStuNum);

	Node* p1;

	//�ж��ǲ���ͷ���
	if (pHead->stu.num == nStuNum) {
		p1 = pHead;
		pHead = pHead->pNext;
		free(p1);

		system("pause");    //��ͣ����
		system("cls");      //��������
		return;
	}

	//����ͷ���
	Node* p = pHead;
	Node* p2;
	while (p->pNext->stu.num == nStuNum) {
		p2 = p->pNext;
		p->pNext = p->pNext->pNext;
		free(p2);

		system("pause");    //��ͣ����
		system("cls");      //��������
		return;

		p = p->pNext;

		if (p->pNext == NULL) {
			break;
		}
	}

	if (p->pNext == NULL) {
		printf("û���ҵ���ѧԱ.\n");
	}

	system("pause");    //��ͣ����
	system("cls");      //��������
}