#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//long long prime(long long n)
//{
//    long long j;
//    for (j = 2; j < n; j++)
//    {
//        if (n % j == 0)
//        {
//            return 0;
//        }
//    }
//    if (j == n)
//    {
//        return n;
//    }
//}
//
//int main()
//{
//    long long n;
//    long long p = 0, q = 0;
//    scanf("%lld", &n);
//    n = p + q;
//    prime(p);
//    prime(q);
//    if (n > 0)
//    {
//        printf("%lld %lld", p, q);
//    }
//    return 0;
//}


//#include<math.h>
//int sushu(int x);               //�����ж��Ƿ��������ĺ���
//int main() 
//{
//    int n, p;
//    scanf("%d", &n);
//    for (p = 2; p <= n; p++) 
//    {
//        if (sushu(p) && sushu(n - p)) 
//        {
//            printf("%d = %d + %d", n, p, n - p);
//            break;
//        }
//    }
//    return 0;
//}
//
//int sushu(int x)
//{
//    int flag = 1, i, m;
//    if ((x == 1) || (x != 2) && (x % 2 == 0))
//    {                  //�ų�1�ͳ�2֮�������ż��
//        flag = 0;
//    }
//    else 
//    {
//        m = sqrt(x);
//        for (i = 2; i <= m; i++) 
//        {                          //�ж���������
//            if (x % i == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    return flag;
//}


//�ж�һ�������Ƿ�Ϊ����������ӡ������
//int prime(int n)
//{
//    int j;
//    for ( j = 2; j < n; j++)
//    {
//         if (n % j == 0)
//         {
//             return 0;
//         }
//    }
//    if (j == n)
//    {
//        return n;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", prime(n));
//    return 0;
//}


//int fun(float s[], int n)
//{
//
//}

//int main()
//{
//	int	a = 0;
//	float i[100];
//	scanf("%d", &i[100]);
//
//	printf("%d", a);
//	return 0;
//
//}
//
//int fun(float* s, int n);
//int main()
//{
//	float a, s[30];
//	int m = 0, i;
//	scanf("%f", &a);
//	while (a > 0) 
//	{
//		s[m] = a; m++; scanf("%f", &a);
//	}
//	printf("The number of students : %d\n", fun(s, m));
//	return 0;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	double sum = 0;
//	float arr[100];
//	scanf("%f", &arr);
//	int sz = sizeof(arr) / sizeof(arr[0]); //100
//	for (int i = 0; i < sz; i++)
//	{
//		sum += arr[i];
//		b = sum / sz;
//		if (arr[i] >= b)
//		{
//			a++;
//		}
//	}		
//	printf("%d", a);
//	return 0;
//}

//int ejz(int N)
//{
//	int a, b, c, d;
//	
//}


//��дһ���������������һ������N������ֵҲ��һ��������������R��������������Rд�����������������N�Ķ�������ʽ��
//���磺������15������ֵӦ��1111������������������������������������������ʽ��
//�Լ�д�ģ�ʲôҲûд��������˼·������û�취�ñ������д����������Ҫ��ѧϰ
//int main()
//{
//	int a, b, c, d;
//	int m;
//	scanf("%d", &m);
//	a = m % 2;
//	b = a % 2;
//	c = b % 2;
//	return 0;
//}

//��׼��
//int main()
//{
//    int a, f, e, b[100], d, c;
//    while (scanf("%d", &a) != EOF)
//    {
//        f = a;
//        for (e = 0; a > 0; e++)
//        {
//            b[e] = a % 2;
//            a = a / 2;
//        }
//        if (f == 0) 
//        {
//            printf("0");
//        }
//        else
//        {
//            for (d = e - 1; d >= 0; d--) 
//            {
//                printf("%d", b[d]);//�ǵ÷����������
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*��дһ���������������һ������N��N��ֻ��1��0�������֣�������ֵҲ��һ��������������R����
����������Nд������R�Ķ�������ʽ�����磺������1111������ֵӦ��15��������������������ݣ�ÿ��������һ��ֻ��0��1���ɵ�������������������
�������Ӧ��ʮ�����������������ݶ���int�ͷ�Χ�ڡ�*/
//�Լ�д��
//#include<math.h>
//int main()
//{
//	int a[100], b[100], c = 0, d = 0, e, f;
//	while (scanf("%d", &b[100]) != EOF)
//	{
//		for (c = 0; ; c++)
//		{
//			a[d] = b[c] * pow(2, c);
//		}
//	}
//	return 0;
//}

//��׼��
//#include<math.h>
//int ten(long long int a);
//int main()
//{
//	long long int a;
//	int b;
//	while (scanf("%lld", &a) != EOF)
//	{
//		b = ten(a);
//		printf("%d\n", b);
//	}
//	return 0;
//}
//int ten(long long int a)
//{
//	int m = 0, c, k = 0;
//	while (a > 0)
//	{
//		c = a % 10;
//		if (c == 1)
//			m = m + pow(2, k);
//		k++;
//		a = a / 10;
//	}
//	return m;
//}

//��ά�������ʾ
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);  //�Զ�λ��������޸ĵķ�ʽ����
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�Լ��Ĵ�
//void ejz(int a)
//{
//	int i = 0, j = 0, b[100], c;
//	for (c = 0; i > 0; i++)
//	{
//		a = j;
//		b[i] = j % 2;
//		j = j / 2;
//	}
//	if (a == 0)
//	{
//		printf("0");
//	}
//    else
//    {
//        for (i = c - 1; i >= 0; i--)
//        {
//            printf("%d", b[i]);
//        }
//    }
//
//}
//
//int main()
//{
//	int a, b = 0, c;
//	scanf("%d %d", &a, &b);
//	for (c = a; c <= b; c++)
//	{
//		ejz(a);
//	}
//	return 0;
//}

//void ejz(int a)
//{
//    int f, e, b[100], d;
//    while (1)
//    {
//        f = a;
//        for (e = 0; a > 0; e++)
//        {
//            b[e] = a % 2;
//            a = a / 2;
//            if (a == 0)
//            {
//                break;
//            }
//        }
//        if (f == 0)
//        {
//            printf("0");
//        }
//        else
//        {
//            for (d = e - 1; d >= 0; d--)
//            {
//                printf("%d", b[d]);//�ǵ÷����������
//            }
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    for (c = a; c <= b; c++)
//    {
//        ejz(c);
//    }
//    return 0;
//}



//���Լ����������ʽ�ӽ��жԱ�
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��д�����������Ĳ���������N���ں������������N�Ķ�������ʽ������������������a��b,�����a��b�����������Ķ�������ʽ��
//��׼��
//void ejz(int a)
//{
//	int b, c;
//	if (a == 0)       //����ʹ��a == 0������a > 0��ԭ���ǣ�a > 0�Ὣ���һ����0���������
//	{
//		return 0;    
//	}
//	ejz(a / 2);
//	c = a % 2;
//	printf("%d", c);
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		ejz(i);
//		printf("\n");
//	}
//	return 0;
//}


//��д�����������Ĳ���������N���ں������������N�Ķ�������ʽ������������������a��b,�����a��b�����������Ķ�������ʽ��
//�Լ�д�Ĵ�
//void ejz(int a)
//{
//	int b, c;
//	if (a > 0)
//	{
//		ejz(a / 2);
//	}
//	c = a % 2;
//	printf("%d", c);
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		ejz(i);
//		c++;
//		if (c = 4)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//void shi(int a)
//{
//	int b;
//	if (a == 0)
//	{
//		return 0;
//	}
//	shi(a / 16);
//	b = a % 16;
//	printf("%d", b);
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		shi(i);
//		printf(" ");
//	}
//	return 0;
//}


//void hexadecimal(int inte) 
//{                           //ת����ʮ���������
//    if (inte == 0)
//    {
//        //��ʮ������Ϊ0ʱ
//        return 0;
//    }
//    //�� �������� �У��������return ��䣬��ô����ͻ᷵�ص��øú�������һ�����ִ�У�
//    //Ҳ����˵ �������� ��ִ�У��ص�ԭ���ĵط�����ִ����ȥ��
//    //����������� ���������� ������return��䣬��ô��������ͻ�ֹͣ���˳������ִ�С�
//
//    hexadecimal(inte / 16);    //��������
//
//    if (inte % 16 >= 10) 
//    {                         //���� >= 10ʱ��Ӧ����ĸ
//        switch (inte % 16) 
//        {
//        case 10:
//            printf("A");
//            break;
//        case 11:
//            printf("B");
//            break;
//        case 12:
//            printf("C");
//            break;
//        case 13:
//            printf("D");
//            break;
//        case 14:
//            printf("E");
//            break;
//        case 15:
//            printf("F");
//            break;
//        }
//    }
//    else 
//    {
//        printf("%d", inte % 16);
//    }
//}
//
//int main()
//{
//
//    int m, n;
//    scanf("%d %d", &m, &n);
//
//    for (int i = m; i <= n; i++)
//    {    //ѭ����Χ�ڵ�ʮ��������
//        hexadecimal(i);    //���ú���
//        if (i == n)    //������ո������
//            printf("");
//        else    //����ո�
//            printf(" ");
//    }
//
//    return 0;
//}
