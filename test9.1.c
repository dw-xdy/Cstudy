#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int (*p)[5];//����������ǣ�����p��ָ��һ������Ϊ��5��������!
//	return 0;
//}

//ָ���Ǻ��ѵ�һ���½�,����Ҳ���ұ���Ҫѧ���һ���½�,��������Ҫ��C���������CSDN�ϵ����¿����˲���


//int main()
//{
//	int (*p)[10];//p��һ��ָ��int���͵Ĵ�СΪ10��int���͵�ָ��.
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int (*pf)(int, int) = &Add;  //pf�д�ŵ��Ǻ���Add�ĵ�ַ
//	
//	int ret = Add(2, 3); //������д������һ����!
//
//	int ret = pf(2, 3);
//
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	printf("%d\n", p);
//	printf("%p", p);
//	return 0;
//}

//����ָ��
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int (*pa)[5] = &arr;   //����������ָ��,pa�д�ŵ�������arr�ĵ�ַ,ֻ�������ֳ����������������Ԫ�صĵ�ַ.
//						   //Ȼ��*pa�����������ĵ�ַ,Ȼ������������*����,���ܷ��������Ԫ��!
//	
//	printf("%p\n", pa);
//
//	return 0;
//}

//int main()
//{
//	char* arr2[6];
//	char* (*p3)[6] = &arr2; //����p3�������ĵ�ַ,Ȼ����ȷ�������м���Ԫ��,���ȷ����ŵ���ʲô����.
//		                    //������,p3��һ��ָ��char*���͵������ָ��,�����Ԫ�ظ���Ϊ6.
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pf[4])(int, int) = { &Add, &Sub, &Mul, &Div }; //pf��һ������ָ������,������ĸ������ĵ�ַ.
//	return 0;
//}

//void bubbleSort(int arr[], int sz)
//{
//	int i, j, temp;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 5, 2, 8, 3, 9, 1, 7, 4, 6, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //����Ĵ�С
//	int i;
//
//	bubbleSort(arr, sz); //����������
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";//���еĿո�Ҳ��һ���ַ�!
//	char arr[] = { 'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd' };
//
//	int len = strlen(arr);
//	printf("%d\n", len);  //��ӡ������11.
//	return 0;
//}




//ģ��ʵ��strlen����
//1. ��һ�ַ�ʽ����������ʽ
//size_t my_strlen(const char* str)  //��ָ��������ܵ�һ������Ԫ�صĵ�ַ,Ȼ����ָ�������++�����������ַ���.
//{                       
//	int count = 0;
//	while (*str++ != '\0') //�����������һ��ָ��,
//	{
//		count++;
//	}
//	return count;
//}

//2. �ڶ��ַ�ʽ�����ܴ�����ʱ����������,�ݹ鷽ʽ
//size_t my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}


//3. �����ַ�ʽ������sizeof()����(������sizeof(str)�������ַ����ĳ���)
//size_t my_strlen(const char* str)
//{
//	return sizeof(str) - 1; //ע�⣺�����ǲ��Ե�,��Ϊsizeof�Ǽ�����ָ��Ĵ�С,�����ַ����Ĵ�С.ָ��Ĵ�С�ǹ̶���!
//}


//size_t my_strlen(char* s) //s�д�ŵ����ַ�����Ԫ�صĵ�ַ,
//{
//	char* p = s; //p�д��ŵ����ַ�����Ԫ�صĵ�ַ,  �����������˻���,ע����!
//	while (*p != '\0')
//		p++;
//	//printf("%p\n", s); //�����s��һ��ָ��,ָ���ַ�������Ԫ�صĵ�ַ.
//	//printf("%p\n", p); //�����p��һ��ָ��,ָ���ַ��������һ��Ԫ�صĵ�ַ.
//	return p - s; //�����ַ����ĳ���,Ҳ����ָ��pָ��ĵ�ַ���ַ�����Ԫ�صĵ�ַ�Ĳ�ֵ. s�ĵ�ַû�иı�.
//}
//int main()
//{
//	char arr[] = "hello world";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	//printf("%d\n", sizeof(arr));  //sizeof ��������Ľ����12,��Ϊ��������һ��Ԫ���ǿո�,����sizeof��������Ľ����ʵ�ʵ��ַ�������1.
//	return 0;
//}




/*�ܵ���˵��ָ�뷽��Ķ�������Ҫ�����ϰ, �������һЩ���º���ص���Ŀ������ϰ
* Ȼ���������һЩ�鼮���Ķ�, Ȼ���Ǹ�����ʦд����,����ÿ�����붼Ҫ�Լ�д����
* ����һ��Ҫ�ú����˼��,���������AI,�������������Ǻܺõ�!�����Һܴ�İ���!
* ����!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/












