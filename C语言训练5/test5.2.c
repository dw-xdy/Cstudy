#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*쳲�����(Fibonacci)����������һ�����У�1��1��2��3��5��8��13��21������, �������ǰ������1���ӵ����ʼ��ÿһ�����ǰ����֮�͡�

��̶�������������A��B�����Fibonacci���еĵ�A���B�

�����ʽ :
һ���и���2��������90��������A��B��A <= B����

�����ʽ :
���Fibonacci���еĵ�A���B�5����һ�У�����������һ���ո�ָ�*/

//�����Լ�һ��һ�����������ģ�����û�н����κ��ֳɵĺ������Լ�д�ġ�
//#define MAX 90
//int main()
//{
//	unsigned long long a[MAX] = { 1,1 };
//	int m, n;
//	int i;
//	int count = 0;
//	for (i = 3; i <= MAX - 1; i++)      //���е㲻��������max�Ĺ�ϵ���Ȼ��о�һ��
//	{
//		a[i] = a[i - 1] + a[i - 2];        //һ�ж�����������±���ʽ���������ģ�Ҫ��������Ϊ100���ͻᳬ������ķ�Χ��
//		printf("%llu ", a[i]);			//����Ҫ���ó�MAX-1  ���������ͽ�����Ϊʲô����������Ϊ100��90��ʱ��Ĳ����ˣ�
//		                                //�κ�MAX��ֵ������ֻҪ����������ķ�Χ���ɣ�
//		 		count++;			 // ��������ֻ���������87�������֣���Ϊ���Ǵ�3��ʼ�ģ������Ҽ����˴ӡ���3λ������MAX-1����
//	}                                //�����ʱ��Ҳ�Ǵӡ�����λ����ʼ��
										//Ҫ���Ժ�������ֱ���á����ӡ����У�����ǳ����á�
//	scanf("%d %d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//		count++;
//		if (count == 5)
//		{
//			printf(" %llu", a[i + 2]);
//			printf("\n");
//			count = 0;
//		}
//		else if (count == 1)
//		{
//			printf("%llu", a[i + 2]);
//		}
//		else
//		{
//			printf(" %llu", a[i + 2]);    //ÿ�н�β�ո�
//		}
//	}
//	return 0;
//}
//
//

//void prime(int a, int b)
//{
//
//    int flag;    //����Ƿ�������
//    int count = 0;    //��¼����������ÿ10������
//    static int k;    //��̬�ֲ�����k����ʼֵĬ��Ϊ0
//
//    printf(k++ == 0 ? "[%d,%d]" : "\n\n[%d,%d]", a, b);
//
//    for (int i = a; i <= b; i++)
//    {
//        flag = 0;    //Ĭ��������
//
//        if (i == 2)
//        {    //�������
//            printf("\n%d", i);    //����
//            count++;
//            continue;
//        }
//
//        for (int j = 2; j < i; j++)
//        {    //�ж�ÿ�����Ƿ�����
//            if (i % j == 0)
//            {
//                flag = 1;    //��������
//            }
//        }
//        if (flag == 0)
//        {    //���������
//            count++;    //��������+1
//            if (count % 10 == 1)
//            {               //����Ϊ1����ÿ�п�ʼǰ����
//                printf("\n%d", i);
//            }
//            else
//            {
//                printf(" %d", i);    //ÿ�н�β���ո�
//            }
//        }
//
//    }
//}
//
//
//int main()
//{
//
//    int start, end;
//
//    while (scanf("%d %d ", &start, &end))
//    {    //�����ļ�β
//        prime(start, end);
//    }
//
//    return 0;
//}

//int main()
//{
//    int a, b, count = 0, d, e = 1, i, j;
//        while (scanf("%d %d", &a, &b) == 2)
//        {
//            printf("[%d,%d]\n", a, b);
//            for (i = a; i <= b; i++)
//            {
//                for (j = 2; j < i; j++)
//                {
//                    if (i % j == 0)
//                    {
//                        break;
//                    }
//                }
//                if (i == j)
//                {
//                    count++;
//                    if (count == 10)
//                    {
//                        printf(" %d", i);
//                        printf("\n");
//
//                        count = 0;
//                    }
//                    else if (count == 1)
//                    {
//                        printf("%d", i);
//                    }
//                    else
//                    {
//                        printf(" %d", i);
//                    }
//                }
//            }
//
//            count = 0;
//        }
//    return 0;
//}

//#define MAX 23
//int main()
//{
//	int a[MAX] = { 1,1 };
//	int count = 0;
//	int	i = 0;
//	for (i = 3; i <= MAX - 1; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		count++;
//		if (count == 5)
//		{
//			printf(" %d\n", a[i]);
//			count = 0;
//		}
//		else if (count == 1)                                       //�����ʽ���Ժ���Ч�ؽ�ÿһ�еĿո�ɾ��
//		{                                                          //�����Խ����һ�еĿո�ɾ������ȫ�����Լ�д�ģ�Ҳ��֪�����ǲ���
//			printf("%d", a[i]);
//		}
//		else
//		{
//			printf(" %d", a[i]);    //ÿ�н�β�ո�
//		}
//	}
///////////////////////////////////////////////////////////////////////// //////////// //////////// //////////// //////////
//	return 0;
//}

//#define MAX 50
//int main()
//{
//	int a[MAX] = { 1,3 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= MAX - 1; i++)
//	{
//		if (i == 0)
//		{
//			printf("%d", a[i]);
//			count++;
//		}
//		else if (i == 1)
//		{
//			printf(" %d", a[i]);
//			count++;
//		}
//		else
//		{
//			a[i] = a[i - 1] + (i + 1);
//			count++;
//			if (count == 10)
//			{
//				printf(" %d\n", a[i]);
//				count = 0;
//			}
//			else if (count == 1)                                  //�����ʽ���Ժ���Ч�ؽ�ÿһ�еĿո�ɾ��
//			{                                                     //�����Խ����һ�еĿո�ɾ������ȫ�����Լ�д�ģ�Ҳ��֪�����ǲ���
//				printf("%d", a[i]);                               //�Ҿ��û��Ǻ���Ч�ģ����Ǿ��ǲ�֪���û��ǲ���
//			}
//			else
//			{
//				printf(" %d", a[i]);    //ÿ�н�β�ո�
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//    char  c[26], i;
//    for (i = 0; i < 26; i++)
//    {
//        c[i] = 'A' + i;;
//    }
//
//    for (i = 0; i < 26; i++)           //��Ҫ���ǿ�����ĳ��ȣ���Ϊ������±��зǳ����е���ϵ
//    {
//        if (i > 0)
//        {
//            printf(" ");
//        }
//        printf("%c%c", c[i], c[i] + 32);
//    }
//    return 0;
//}

//int main()
//{
//	int a[1001] = { 2 };
//	int i = 0, j = 0, k = 0;
//	int count = 1;
//
//	for (i = 0; count <= 1000; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			a[count] = i;
//			printf("%d ", a[count]);
//			count++;
//		}
//	}

	//while (scanf("%d", &i) == 1)
	//{
	//	if (count == 1)
	//	{
	//		printf("%d", a[i]);
	//	}
	//	else
	//	{
	//		printf(",%d", a[i]);
	//	}
	//}
//
//	return 0;
//}

//#define N 1001
//void Init(int* a, int n)
//{
//	int i, j, k, flg;
//	for (i = 1, k = 0; k < n; i++)
//	{
//		for (j = 2, flg = 1; flg && j * j <= i; j++)
//			if (i % j == 0)  flg = 0;
//		if (flg)
//			a[k++] = i;
//	}
//}
//int main()
//{
//	int a[N], n, k = 0;
//	Init(a, N);
//
//	while (scanf("%d", &n) == 1)
//	{
//		if (n <= 0)
//		{
//			break;
//		}
//		else
//			printf(k++ == 0 ? "%d" : ",%d", a[n]);
//	}
//	return 0;
//}

//ð�����򣨲�ʹ�ú�����
//
//int main()
//{
//	int n, i = 0;
//	int j = 0, t = 0;
//	scanf("%d", &n);
//	int N[100];
//	for (i = 0; i <= n - 1; i++)
//	{
//		scanf("%d", &N[i]);
//	}
//
//	for (i = 0; i <= n - 2; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (N[j] < N[j + 1]);
//		}
//			{
//				t = N[j];
//				N[j] = N[j + 1];
//				N[j + 1] = t;
//			}
//	}
//
//	for (i = 0; i <= n - 2; i++)
//	{
//		printf("%d ", N[i]);
//	}
//	printf("%d", N[n - 1]);
//
//	return 0;
//}

//ʹ�ú�������ʵ��ð������

//void bubbleSort(int arr[], int sz)
//{
//	int i, j, temp;
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
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubbleSort(arr, sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void bubbleSort(float arr[], int N)
//{
//	int i, j;
//	float temp;
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - i - 1; j++)
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
//
//int main()
//{
//	float arr[100];
//	int N = 0;
//	float m = 0;
//	int i = 0;
//
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%f", &m);
//		arr[i] = m;
//	}
//
//	bubbleSort(arr, N);
//
//	for (i = 0; i < N - 1; i++)
//	{
//		printf("%.4f ", arr[i]);
//	}
//	printf("%.4f", arr[N - 1]);
//	return 0;
//}

//void bianhuan(int a[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			a[i] = 2 * a[i];
//		}
//		if (i % 2 == 1)
//		{
//			a[i] = a[i] + 33;
//		}
//	}
//}
//
//int main()
//{
//	int a[100];
//	int i = 0, j = 0;
//	int n = 0;
//	int M = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &M);
//		a[i] = M;
//	}
//
//	bianhuan(a, n);
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", a[i]);                 //ÿ�н�β�ո�
//	}
//	printf("%d", a[n - 1]);                  //����������������һ�����ֺ���Ҳû�пո�
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	return 0;
//}

//#define ten 10
//
//int max(int a[], int sz)
//{
//	int i = 0;
//	int max = a[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (max < a[i])      //�Ҿ��������ʽ������˼��ֱ�ӽ������ֵ����ͬ��a[0],Ȼ��������飬���������max������������max
//		{                    //��max����Ϊ��ǰ�ȡ�max�������
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int a[ten];
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		a[i] = n;
//	}
//
//	max(a, 10);
//
//	printf("%d", max(a, 10));
//	return 0;
//}

//���黻λ������
//int main()
//{
//	int a[10];
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d  ", &j);
//		a[i] = j;
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d,", a[i]);
//	}
//	printf("%d\n", a[9]);
//
//	for (i = 9; i > 0; i--)
//	{
//		printf("%d,", a[i]);
//	}
//	printf("%d", a[0]);
//	return 0;
//}

//��̶���10���������������У�����ǰ��κͺ���λ�û����������
//int main()
//{
//	int a[10];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &j);
//		a[i] = j;
//	}
//
//	for (i = 5; i < 10; i++)
//	{
//		printf("%d,", a[i]);
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d,", a[i]);
//	}
//	printf("%d\n", a[4]);
//	return 0;
//}

//int main()
//{
//	int a[20];
//	int i = 0;
//	int n = 0;
//	int max;             //ֵ��ע����ǣ�����ġ�max���͡�min����ȫ�ֱ���
//	int min;             //��max���͡�min������ͬʱ��ֵΪ��a[0]�� �磺int max = a[0], min = a[0]
//	int sum = 0;         //�����ᵼ�¡�max���͡�min����ֵ��ͬ
//	float avg = 0;
//
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d", &n);
//		a[i] = n;
//		sum += n;
//	}
//
//	max = a[0];                             //Ӧ����������и�ֵ����
//	for (i = 1; i < 20; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//
//	min = a[0];
//	for (i = 1; i < 20; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	sum = sum - max - min;
//	avg = sum * 1.0 / 18;
//
//	printf("ȥ��һ����߷�:%d��\n", max);
//	printf("ȥ��һ����ͷ�:%d��\n", min);
//	printf("8��ѡ�����÷�:%.3f��", avg);
//	return 0;
//}

//�����������ֵ����ʹ�ú�����
//int main()
//{
//	int a[100];
//	int i = 0, k = 0;
//	int max = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		a[i] = k;
//	}
//
//	max = a[0];
//	for (i = 0; i < n; i++)
//	{
//		if (max < a[i]) 
//		{
//			max = a[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//�����������ֵ��ʹ�ú�����
//int max(int a[], int sz)
//{
//	int i = 0;
//	int max = a[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int a[100];
//	int i = 0, k = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		a[i] = k;
//	}
//
//	printf("%d", max(a, n));
//	return 0;
//}

//ð�����򣨲�ʹ�ú�����
//int main()
//{
//	int a[10];
//	int i = 0, j = 0;
//	int n = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		a[i] = n;
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 10 - i - 1; j++)
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
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", a[9]);
//	return 0;
//}

//ð������(������һ��ԭ������Ҫ��
//int main()
//{
//	int a[10];
//	int i = 0, j = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &j);
//		a[i] = j;
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
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", a[n - 1]);
//	return 0;
//}