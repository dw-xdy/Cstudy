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


int main()
{
	int a[1001] = { 2 };
	int i = 0, j = 0, k = 0;
	int count = 1;

	for (i = 0; count <= 1000; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			a[count] = i;
			printf("%d ", a[count]);
			count++;
		}
	}

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

	return 0;
}

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