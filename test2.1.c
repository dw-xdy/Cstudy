#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

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

//��ӡ���� ����ʹ�ú�����
//int main()
//{
//    int i, j, n;
//    for (i = 1; i <= 100; i += 2)   //����flag����������1�ӽ�����Ҫ��û��flag�Ļ����Ͳ����ӡ��1���ˡ�
//    {                               //��Ϊ1���������������ǲ��ᱻ��ӡ�ģ���������Ҫ���ϡ�flag���жϡ�
//        int flag = 1;               //��Ϊ1 % �κ����ֶ� == 1���������ǡ���if ��i == j���ж��������Ļ���1�Ͳ��ᱻ��ӡ��
//        for (j = 2; j < i; j++)     //����Ҫ��flag�������Ϳ��Ա�֤1���Ա���ӡ��
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

//��ӡ���� ��ʹ�ú�����
//int isPrime(int n)
//{
//    int i;
//    if (n == 1)
//        return 0;
//    for (i = 2; i <= n / 2; i++)
//    {
//        if (n % i == 0)
//            return 0;        //�������������򷵻�0
//    }
//    return 1;               //���������򷵻�1�����Ҷ�Ӧ�ĵ��ú�����ʱ��ҲҪ�жϷ���ֵ�Ƿ�Ϊ1������1�����ӡ��
//}
//int main()
//{
//    int i, j, n;
//    for (i = 1; i <= 100; i += 2)
//    {
//        if (isPrime(i))     //���ú��������жϣ�����������Ϊ�棩�����ӡ�� ������������Ϊ�٣����򲻴�ӡ��
//            printf("%d ", i);
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
//int add (int a, int b)
//{
//    return a + b;
//    printf("\n");
//}
//int bdd (int a, int b)
//{
//    return a - b;
//    printf("\n");
//}
//int cdd (int a, int b)
//{
//    return a * b;
//    printf("\n");
//}
//int ddd (int a, int b)
//{
//    return a / b;
//    if (b == 0)
//    {
//        printf("error");
//    }
//    printf("\n");
//}
//int edd (int a)
//{
//    return a * edd (a - 1);
//    printf("\n");
//}
//int fdd(int a, int b)
//{
//    return a % b;
//    if (b == 0)
//    {
//        printf("error");
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int a, b;
//    scanf("%d + %d", &a, &b);
//    printf("\n");
//    printf("%d", add(a, b));
//
//    scanf("%d - %d", &a, &b);
//    printf("\n");
//    printf("%d", bdd(a, b));
//
//    scanf("%d * %d", &a, &b);
//    printf("\n");
//    printf("%d", cdd(a, b));
//
//    scanf("%d / %d", &a, &b);
//    printf("\n");
//    printf("%d", ddd(a, b));
//
//    scanf("%d !", &a);
//    printf("\n");
//    printf("%d", edd(a));
//
//    scanf("%d % %d", &a, &b);
//    printf("\n");
//    printf("%d", fdd(a, b));
//
//    scanf("%d    /%d", &a, &b);
//    printf("\n");
//    printf("%d", ddd(a, b));
//
//    scanf("%d/%d", &a, &b);
//    printf("\n");
//    printf("%d", ddd(a, b));
//    return 0;
//}


// ������Ƕ�׵���:
//void new_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}

//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    //�����ɶ��
//    //ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//    return 0;
//}

//#include "add.h"
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int sum = Add(a, b);
//    printf("%d", sum);
//
//    return 0;
//}
//�������Ҫ��һ�����ǽ��С�ģ��Ļ��֡������������һ�������ֽ�ɶ��Сģ�飬Ȼ���ٽ���Щģ��������������һ�������ĳ���
//�������ĺô��ǣ�
//1. ����ά�����޸ģ��޸�ĳ��ģ��ֻ��Ҫ�޸ĸ�ģ��Ĵ��뼴�ɣ�������Ҫ�޸�����ģ��Ĵ��롣 

//2. ���㸴�ã����ĳ��ģ���Ѿ���д��ɣ�����ֱ�Ӹ��ã�������Ҫ���±�д��

//3. ������ԣ������Ȳ���ĳ��ģ�飬Ȼ���ٲ����������򣬿��Է��ֳ����д��ڵĴ���

//4. ������ֲ�����Խ�������ֲ����ͬ��ƽ̨�ϣ�ֻ��Ҫ�޸������Ĵ��뼴�ɡ�

//5. ������չ�����Է��������µĹ��ܣ�ֻ��Ҫ��д�µ�ģ�鼴�ɡ�

//6. ������⣬���Խ�һ�����ӵĳ���ֽ�ɶ��Сģ�飬ÿ��ģ�鶼�ܼ򵥣�������⡣

//7. �������ã����Խ�һЩ����ʹ�õĴ���ģ�黯��Ȼ���ڲ�ͬ�ĳ����и��á�

//8. ����ά�������Խ�����ֽ�ɶ��ģ�飬ÿ��ģ�鶼����ȷ�Ĺ��ܣ����Ը��õؽ���ά����



//�ݹ��ʵ��
//void print(unsigned int n)
//{
//    // �ݹ麯�������ڴ�ӡ����������ÿһλ����
//    if (n > 9)
//    {
//        print(n / 10);  
//                                      /*�ٸ����ӣ���ӡ1234��1234�Ƚ�ȥ�ˣ����Ǳȡ�9���󣬽�ȥ��if���У���ʱ��ĺ�����
//                                        1234 / 10 = 123��123 / 10 = 12��12 / 10 = 1��
//                                        1 % 10 = 1����1���Ͳ����ȥ�ˣ����Դ�ӡ1��
//                                        234 / 10 = 23��23 / 10 = 2��2 / 10 = 0��
//                                        2 % 10 = 2����2���Ͳ����ȥ�ˣ����Դ�ӡ2��
//                                        ���մ�ӡ1��2��3��4*/
//    }
//    // ��ӡ���һλ����
//    printf("%d ", n % 10);
//} 
//
//int main()
//{
//    unsigned int n;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}





//��д��������ʽ����Ϊ���������յ�����������
//�����Ĺ���Ϊ���ظ������Ƿ�Ϊ�Ϸ����ڡ�������������һ�����ڵ�������������������Ϊ�Ϸ����ڣ����YES���������NO��
//�Լ�д��
//void rq(int x, int y, int z)
//{
//    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//    {
//        if (y == 2)
//        {
//            if (z >= 1 && y <= 29)
//            {
//                printf("YES");
//            }
//        }
//    }
//    else if (1)
//    {
//        if (y == 2)
//        {
//            if (z >= 1 && y <= 28)
//            {
//                printf("YES");
//            }
//        }
//    }
//    else if (1)
//    {
//        if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
//        {
//            if (z >= 1 && y <= 31)
//            {
//                printf("YES");
//            }
//        }
//    }
//    else if (1)
//    {
//        if (y == 2 || y == 4 || y == 6 || y == 9 || y == 11)
//        {
//            if (z >= 1 && y <= 30)
//            {
//                printf("YES");
//            }
//        }
//    }
//    else
//    {
//        printf("NO");
//    }
//}
//int main()
//{
//    int x, y, z;
//    scanf("%d %d %d", &x, &y, &z);
//    rq(x, y, z);
//    return 0;
//}
//
////��׼��
//int day(int y,int m,int d)
//{
//if (m > 0 && m < 13 && d>0 && d < 32) 
//{
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) 
//    {
//        if (m == 2 && d >= 30) 
//        {
//            printf("NO");
//        }
//        if (m == 2 && d < 30) 
//        {
//            printf("YES");
//        }
//        if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30) 
//        {
//            printf("YES");
//        }
//        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) 
//        {
//            printf("NO");
//        }
//        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31) 
//        {
//            printf("YES");
//        }
//        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) 
//        {
//            printf("NO");
//        }
//    }
//    else 
//    {
//        if (m == 2 && d >= 29)
//        {
//            printf("NO");
//        }
//        if (m == 2 && d < 29) 
//        {
//            printf("YES");
//        }
//        if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30) 
//        {
//            printf("YES");
//        }
//        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) 
//        {
//            printf("NO");
//        }
//        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31)
//        {
//            printf("YES");
//        }
//        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) 
//        {
//            printf("NO");
//        }
//    }
//}
//    else
//    {
//    printf("NO");
//    }return 0;
//}
//int main(void)
//{
//    int y, m, d;
//    scanf("%d%d%d", &y, &m, &d);
//    day(y, m, d);
//    return 0;
//}
//��׼�𰸺��ҵĴ𰸵Ľ���˼·��һ���ģ����Ǳ�׼�𰸵Ĵ������ʵ�֣��ҵĲ��У�Ӧ�����ҿ������ⲻ��ȫ���ԭ��


//��׼�𰸵�˼·�ǣ�
//int hanoi_num(int n)5
//{
//	if (n > 1)
//	{
//		return 2 * hanoi_num(n - 1) + 1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("����Ϊ��%d", hanoi_num(n));
//	return 0;
//}

int main()
{
	int n, a = 1;
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		a = 2 * a + 1;
	}
	printf("%d", a);
	return 0;	
}


//int hanoi_num_iterative(int n) 
//{
//	int moves = 1;
//	for (int i = 1; i < n; i++) 
//	{
//		moves = 2 * moves + 1;
//	}
//	return moves;
//}
//
//int main() 
// {
//	int n;
//	printf("���������ӵ�������");
//	scanf("%d", &n);
//	printf("�ƶ�����Ϊ��%d\n", hanoi_num_iterative(n));
//	return 0;
//}



