#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Fibionacci ���еĵ�n�� (ʹ�õݹ�)
//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//	return 0;
//}

//������������ʵ���ĺ� (ʹ�ú���������
//float add(float a, float b)
//{
//	return a + b;
//}
//int main()
//{
//	float a, b, c;
//	scanf("%f %f", &a, &b);
//	c = add(a, b);
//	printf("%f", c);
//	return 0;
//}

//�������������ҳ����ֵ (ʹ�ú�������)
//int add(int a, int b, int c)
//{
//	return a + b + c;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	d = add(a, b, c);
//	printf("%d", d);
//	return 0;
//}

//���������������ֵ (ʹ�ú�������)
//int max(int a, int b)
//{
//    if (a > b)
//        return a;
//    else
//        return b;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    c = max(a, b);
//    printf("The max is:%d.", c);
//    return 0;
//}

//����������������������ֵ (ʹ�ú�������)
//��һ�ַ���
//int max(int a, int b, int c)
//{
//	if (a > b && a > c)
//	{
//		return a;
//	}
//	if (b > a && b > c)
//	{
//		return b;
//	}
//	if (c > a && c > b)
//	{
//		return c;
//	}
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	d = max(a, b, c);
//	printf("%d", d);
//	return 0;
//}

//�ڶ��ַ���
//int max(int x, int y, int z)
//{
//	// ��������m������x��ֵ����m
//	int m = x;                    //������С���������˼�����Ҫ���һ���Ҫע��һ�£��б�Ҫ�������ϰһ�¡�
//	// ���y����m����y��ֵ����m
//	if (y > m) m = y;             //m�������Ǿֲ�������ֻ�Ժ����ڲ���Ч��
//	// ���z����m����z��ֵ����m     //m��һ���м������������Ϊ��ʱ����ʹ��
//	if (z > m) m = z;
//	// ����m�������������е����ֵ
//	return m;
//}
//int main()
//{
//	// ����������������a, b, c
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d\n", max(a, b, c));
//	return 0;
//}
    //������д�����й��ں��������ⶼ�ǲ��ý��е�ַ�Ĵ��ݵģ���������ʵ����û�����ʲôʱ����Ҫ��ʲôʱ����Ҫ�����ѧϰ��
    //������д�ĺ������ǡ���ֵ������������ֻ�ý���ֵ���ݣ����ý��е�ַ�Ĵ��ݡ�
    //Ȼ���С���ַ�����������һ�û��ѧ��ָ�룬��������ȷ�һ�š�

//��ӡ����
//int main()
//{
//    int i, j, n;
//    for (i = 1; i <= 100; i += 2)   //����flag����������1�ӽ�����Ҫ��û��flag�Ļ����Ͳ����ӡ��1���ˡ�
//    {                               //��Ϊ1���������������ǲ��ᱻ��ӡ�ģ���������Ҫ���ϡ�flag���жϡ�
//        int flag = 1;             
//        for (j = 2; j < i; j++)   
//        {
//            if (i % j == 0)           //���ӣ�i = 101��j = 3����ʱ������if�����������Ը����Ͳ������ѭ����
//            {                         //����i = 101��j = 2����ʱ������if�����������Ի����ѭ����Ȼ��break�������ڲ��forѭ��
//                flag = 0;             //��ʱflag = 0��˵��i�������������Բ����ӡ��
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



//ʵ������������
//float add(float a, float b)
//{
//    return a + b;
//}
//float sub(float a, float b)
//{
//    return a - b;
//}
//float mul(float a, float b)
//{
//    return a * b;
//}
//float div(float a, float b)
//{
//    return a / b;
//}
//int main()
//{
//    float a, b, c, d, e, f;
//    scanf("%f %f", &a, &b);
//    c = add(a, b);
//    d = sub(a, b);
//    e = mul(a, b);
//    f = div(a, b);
//    printf("%f %f %f %f", c, d, e, f);
//    return 0;
//}

//��ƺ���long next(long n){}������3n+1��������ʽ����n����һ��ֵ�����磺next(5)��ֵΪ16��next(16)��ֵΪ8�ȵȡ�
//�������Ĺ���Ϊ����һ������n������任��1�Ĺ���
//long next (long n)
//{
//    if (n % 2 == 0)
//    {
//        return  n / 2;
//    }
//    else if (n % 2 == 1)
//    {
//        return 3 * n + 1;
//    }
//}
//int main() 
//{
//    long n, count = 0;
//    scanf("%ld", &n);
//    while (n != 1) 
//    {
//        count++;
//        n = next(n);
//        printf("Times of %ld is %ld.\n", count, n);
//    }
//    return 0;
//}



//����������Ĺ���Ϊ����һ��100���Ƶķ��������5���Ƴɼ�
//int get(int n)
//{
//    if (n >= 0 && n < 10)
//        return 0;
//    else if (n >= 10 && n < 40)
//        return 1;
//    else if (n >= 40 && n < 60)
//        return 2;
//    else if (n >= 60 && n < 70)
//        return 3;
//    else if (n >= 70 && n < 80)
//        return 4;
//    else if (n >= 80 && n <= 100)
//        return 5;
//    else
//        return -1;
//}
//int main()
//{
//    int i, a;
//    scanf("%d", &i);
//    a = get(i);
//    printf("%d", a);
//    return 0;
//}

//��д����������ʽ������һ�����������Ƿ�Ϊ������
// ����һ���������ҳ�ָ����Χ�ڵ����л���������ӡ
//int palindromic(int n, int m)
//{
//	int i, j, k, count = 0;
//	for (i = n; i <= m; i++)
//	{
//		// ��ʼ������
//		k = 0; j = i;     //k ���ڴ洢��ת�����ֵ��
//		// ��ת��ǰ��ֵ
//		while (j)
//		{
//			k = k * 10 + j % 10;    
//			j /= 10;
//		}
//		// �ж��Ƿ�Ϊ������������ǣ��������һ
//		if (k == i) count++;
//		// ����������ӡ������
//		if (k == i && count == 1)
//			printf("%d", k);
//		if (k == i && count != 1)
//			printf(",%d", k);
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	palindromic(n, m);
//	return 0;
//}

//��д��������������ʽ����Ϊ��������a��b(0<a<=b),��������a��b֮�����������ĺ͡�
//Ҫ��ֱ��÷ǵݹ�͵ݹ����ַ�ʽ�ֱ�ʵ�֣����볢�Բ�ͬ�ĵݹ���ԡ���������������������m��n�������m��n֮�����������ĺ�
// �ǵݹ�ʵ��
//int main()
//{
//    int a, b, i, sum = 0;
//    scanf("%d %d", &a, &b);
//    for (i = a; i <= b; i++)
//    {
//        sum += i;
//    }
//    printf("%d", sum);
//    return 0;
//}

// �ݹ�ʵ��
//int SUM(int a, int b)
//{
//    if (a == b)  // ���ֻ��һ������ֱ�ӷ��ظ���
//        return a;
//    else  // ���򷵻ص�ǰ�����Ϻ������������֮��
//        return a + SUM(a + 1, b);
//}
//
//int main()
//{
//    int m, n;
//    scanf("%d%d", &m, &n);
//    printf("%d", SUM(m, n));
//    return 0;
//}



/*������[a,b]���������������������ʽΪ10������һ�У���������һ���ո�ָ�������ƺ���void prime(int a,int b)����������ܡ�
���������������������ԣ���ʾ�����������ݣ�ÿ��������������䣬���������������������ÿ���������һ�����С�*/
//���Լ���˼·�ʹ𰸡����ҵĴ𰸿϶���û������ģ���Ϊ�ҵ�����ͱ�׼����һ���ġ���
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
//                    printf("%d ", i);
//                }
//                if (count == 10)
//                {
//                    printf("\n");
//                    count = 0;
//                }
//            }
//            printf("\n\n");
//            count = 0;
//        }
//    return 0;
//}

//��׼��˼·�ʹ�
//#include<math.h>
//
//void prime(int a, int b)
//{
//    static int k = 0; // ����ͳ�� prime ���������õĴ�������̬���������ڶ�ε����б���ֵ���䡣
//    if (k++ == 0) 
//    { // ����ǵ�һ�α����ã��������������Ϣ��һ�����з���
//        printf("[%d,%d]\n", a, b);
//    }
//    else 
//    { // �������һ���µı�������Ϣ��һ�����з���
//        printf("\n[%d,%d]\n", a, b);
//    }
//
//    int i, j, count = 0, flag = 1;
//    for (i = a; i <= b; i++) // �����������ڵ�ÿ�����֡�
//    {
//        flag = 1; // ÿ�ε�������ʼ�� flag ���Ϊ 1��
//        if (i < 2)
//            flag = 0;
//        for (j = 2; j <= sqrt(i); j++) // �ڷ�Χ�ڼ��ÿ�����Ƿ�Ϊ������
//        {
//            if (i % j == 0) // ����������� j ��������������ֲ���������
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1) // ����ÿ���ҵ��������������ͳ����������ʽ����������
//        {
//            if (count % 10 == 9)  // ÿ�ҵ�ʮ����������
//            {
//                printf(" %d\n", i);
//            }
//            else if (count % 10 == 0)  // ÿ�ҵ�ʮ�����������������
//            {
//                printf("%d", i);
//            }
//            else
//            {
//                printf(" %d", i); // ������������Կո�ָ�
//            }
//            count++;
//        }
//    }
//    if (count % 10 != 0) // ���������ֶ������ɺ�������һ��û���� 10 �����֣�����������һ�����з���
//        printf("\n");
//
//    return;
//}
//
//int main()
//{
//    int m, n;
//    while (scanf("%d%d", &m, &n) != EOF)
//    {
//        prime(m, n);
//    }
//    return 0;
//}

//��ʱ�Ȳ��������Ŀ���Ƚ������ϵ�ʱ��������
//int main()
//{
//    int a, b;
//    for (int i = 1;; i++)
//    {
//        scnaf("%d %d", &a, &b);
//
//    }
//}


/*���������ʽ���м򵥵����㣬�����ʽ����������ֻ���Ǽ�+����-����*����/������%���׳ˣ�֮һ��
�������Ľ����������ֳ���Ϊ�㣬�������error��,�����������ĵڶ���������Ϊ0��Ҳ�����error����*/
//�Լ�д��
int add (int a, int b)
{
    return a + b;
    printf("\n");
}
int bdd (int a, int b)
{
    return a - b;
    printf("\n");
}
int cdd (int a, int b)
{
    return a * b;
    printf("\n");
}
int ddd (int a, int b)
{
    return a / b;
    if (b == 0)
    {
        printf("error");
    }
    printf("\n");
}
int edd (int a)
{
    return a * edd (a - 1);
    printf("\n");
}
int fdd(int a, int b)
{
    return a % b;
    if (b == 0)
    {
        printf("error");
    }
    printf("\n");
}

int main()
{
    int a, b;
    scanf("%d + %d", &a, &b);
    printf("\n");
    printf("%d", add(a, b));

    scanf("%d - %d", &a, &b);
    printf("\n");
    printf("%d", bdd(a, b));

    scanf("%d * %d", &a, &b);
    printf("\n");
    printf("%d", cdd(a, b));

    scanf("%d / %d", &a, &b);
    printf("\n");
    printf("%d", ddd(a, b));

    scanf("%d !", &a);
    printf("\n");
    printf("%d", edd(a));

    scanf("%d % %d", &a, &b);
    printf("\n");
    printf("%d", fdd(a, b));

    scanf("%d    /%d", &a, &b);
    printf("\n");
    printf("%d", ddd(a, b));

    scanf("%d/%d", &a, &b);
    printf("\n");
    printf("%d", ddd(a, b));
    return 0;
}