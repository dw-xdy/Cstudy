#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef unsigned int uint;
//
//int main()
//{
//	 uint a = 10;
//	 uint b = 20;
//	 uint c = a + b;  //����������͡�һ���µ����֣�Ȼ�����ʹ�þ��У������᷽��ܶ�
//	return 0;
//}


//���ξֲ�������ʱ��static ���η���������ʹ�ֲ��������������ںͳ������������һ������
//void test()
//{
//	static int a = 1;            //1.static ���ξֲ�������ʱ�򣬾ֲ����������������ǲ����ٵġ�
//	                             //�����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�ã�
//	                             //Ӱ���˱������������ڣ��������ڱ䳤���ͳ������������һ����
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0; 
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//������Ϣ�ṹ��
//struct Person
//{
//	//��Ա
//	char name[20];
//	int age;
//	float height;
//	char telephone[20];
//};
//
//
//int main()
//{
//	struct Person p1 = {"Tom", 20, 1.8, "1234567890"};
//	
//	//�ṹ�����. ��Ա��
//	printf("%s %d %.2f %s\n", p1.name, p1.age, p1.height, p1.telephone);
//	return 0;
//}




//#define max 100
//int main()
//{
//	int a[max];
//	int i;
//	int n;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
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


//struct peo
//{
//	char name[20];
//	char telephone[12];
//	char sex[5];
//	int high;
//};
//
//int main()
//{
//	struct peo p1, p2;  //�ṹ������Ĵ���
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int a[10];
//
//	//��ʼ������
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	//�������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	test();
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//ʵ�ֿ����ַ����ĺ���
//#include <string.h>
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);	
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	//����
//	assert(dest != NULL && src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int a = 10;  //�����������޸�
//	//a = 20;
//	//int* p = &a;
//	//*p = 20;  //ָ������޸���ָ���������,�൱���ƹ�ȥ�˳�������
//	const int* p = &a;  //ָ�볣����ָ������ָ�룬�����޸���ָ����
//	int** pb = &p;
//	**pb = 20;  //ָ���ָ������޸���ָ���������,Ҳ���ǡ�����ָ�롱Ҳ�����޸���ָ����
//	printf("%d\n", a);
//	return 0;
//}


