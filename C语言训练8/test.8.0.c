#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char a = -128;
//	//ԭ�룺00000000000000000000000010000001
//	//�ضϣ�10000001
//	//����������11111111111111111111111110000001 -- ����
//	//���룺10000000000000000000000001111110
//	//���룺10000000000000000000000001111111 --> -127
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//ԭ�룺10000000000000000000000010000000
//	//���룺11111111111111111111111101111111
//	//���룺11111111111111111111111110000000
//	//�ضϣ�10000000
//	//����������11111111111111111111111110000000 --> ����(ԭ��), �ڼ������,��������޷��ŵ�,���Ի�ֱ�����
//
//
//	printf("%u\n", a);
//	return 0;
//}

//void func(int a)
//{
//	a = -128;
//	printf("%d\n", a);
//}
//
//
//int main()
//{
//	int a  = 127;
//	func(a);
//	printf("%d", a);
//	return 0;
//}



//������������,����Ȼ��������
//int main()
//{
//	int n = 0;
//	int i = 0, j = 0;
//	int a[100];
//
//	while (scanf("%d", &a[n]) == 1)   //ע�����ﲻ����while(scanf("%d", &a[i]) == 1)��֮�ǲ����ú͡�i���йصı�����Ϊѭ������
//	{                                 //��Ϊ����ġ�i����֮�󻹻��õ�,Ҫ����������,��֮��������⣺����ᵼ������Խ��.
//		n++;                          //��û����á�n��,������֮���ѭ����,�Ͳ��õ��ġ�i��������.
//		if (getchar() == '\n')
//		{
//			break;
//		}
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//ʵ�־���˷�
//#define max 20
//
//int main()
//{
//	int a, b, c;
//	int p1[max][max];
//	int p2[max][max];
//	int p3[max][max];
//	int i, j, k;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &p1[i][j]);
//		}
//	}
//
//	for (i = 0; i < b; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			scanf("%d", &p2[i][j]);
//		}
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			p3[i][j] = 0;
//			for (k = 0; k < b; k++)
//			{
//				p3[i][j] += p1[i][k] * p2[k][j];
//			}
//		}
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", p3[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a, b;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//	//scanf("%d %d", &a, &b);
//
//	char zimu[100];
//
//	for (i = 65; i <= 90; i++)
//	{
//		for (j = 97; j <= 122; j++)
//		{
//			zimu[k] = i;
//			zimu[k + 1] = j;
//			k += 2;
//		}
//	}
//
//	for (i = 0; i < 52; i++)
//	{
//		printf("%c", zimu[k]);
//	}
//	return 0;
//}




//void printAlphabetRange(int a, int b)
//{
//	if (a > b)
//	{
//		for (int i = a; i >= b; i--)
//		{
//			char upper = 'A' + i - 1;
//			char lower = 'a' + i - 1;
//			printf("%c%c", upper, lower);   //����û�б�Ҫ������,�������鷴���᲻�ò���!
//		}
//	}
//	else if (a < b)
//	{
//		for (int i = a; i <= b; i++)
//		{
//			char upper = 'A' + i - 1;
//			char lower = 'a' + i - 1;
//			printf("%c%c", upper, lower);   //����û�б�Ҫ������,�������鷴���᲻�ò���!
//		}
//	}
//}
//
//int main() 
//{
//	int a, b;
//
//	// ��ȡ����
//	scanf("%d %d", &a, &b);
//
//	// �����ĸ��Χ
//	printAlphabetRange(a, b);
//
//	return 0;
//}
