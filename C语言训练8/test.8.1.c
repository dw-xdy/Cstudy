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


//int main()
//{
//	int xuehao;
//	double a, b, c;
//
//	scanf("%d;%lf,%lf,%lf", &xuehao, &a, &b, &c);
//
//	printf("The each subject score of %d is %.2lf, %.2lf, %.2lf.\n", xuehao, a, b, c);
//	return 0;
//}

//int main()
//{
//	int year, month, day;
//
//	scanf("%4d%2d%2d", &year, &month, &day);
//
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%0d\n", day);
//	return 0;
//}


//typedef struct person
//{
//	char name[20];
//	double price;
//	int kg;
//}person;
//
//
//
//int main()
//{
//	int n;
//	person p[100];
//	int i, j;
//
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %lf %d", p[i].name, &p[i].price, &p[i].kg);
//	}
//
//	
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (p[j].kg < p[j + 1].kg)                //�ҵ�˼·�ǣ�����Щ��Ʒ���С����С�ֱ�������е���Ʒ���գ�
//				                                      //����������Ʒ,����ж����������Ʒ��������۸���ߵ���Ʒ��Ϣ
//			{										  //������������ʽ���С����С�Ҳ����˵,��Զ�����ʼ��p[0]�������������Ҫ��,�����Ϳ��Խ��������
//				person tmp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = tmp;
//			}
//			else if (p[j].kg == p[j + 1].kg && p[j].price < p[j + 1].price)
//			{
//				person tmp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = tmp;
//			}
//		}
//	}
//
//	
//
//		printf("%s %.2lf %d\n", p[0].name, p[0].price, p[0].kg);
//
//	return 0;
//}






//int main()
//{
//	double n = 0, m;
//	double x = 0;
//
//	scanf("%lf %d", &n, &m);
//
//	if (n > 5000)
//	{
//		if (n > 5000 && n <= 6500)
//		{
//			x = (n - 5000) * 0.03;
//		}
//		else if (n > 6500 && n <= 9500)
//		{
//			x = 45 + ((n - 6500) * 0.1);
//		}
//		else if (n > 9500 && n <= 14000)
//		{
//			x = 45 + 300 + ((n - 9500) * 0.2);
//		}
//		else if (n > 14000 && n <= 40000)
//		{
//			x = 45 + 300 + 900 + ((n - 14000) * 0.25);
//		}
//		else if (n > 40000 && n <= 60000)
//		{
//			x = 45 + 300 + 900 + 6500 + ((n - 40000) * 0.3);
//		}
//		else if (n > 60000 && n <= 85000)
//		{
//			x = 45 + 300 + 900 + 6500 + 6000 + ((n - 60000) * 0.35);
//		}
//		else if (n > 85000)
//		{
//			x = 45 + 300 + 900 + 6500 + 6000 + 8750 + ((n - 85000) * 0.45);
//		}
//	}
//	printf("%.2f", x);
//	return 0;
//}


//int main()
//{
//	float income, pay, begin, tax = 0;
//	scanf("%f %f", &income, &begin);
//	pay = income - begin;
//	if (pay >= 0 && pay <= 1500)
//		tax = pay * 0.03;
//	else if (pay > 1500 && pay <= 4500)
//		tax = 1500 * 0.03 + (pay - 1500) * 0.10;
//	else if (pay > 4500 && pay <= 9000)
//		tax = 1500 * 0.03 + 3000 * 0.10 + (pay - 4500) * 0.20;
//	else if (pay > 9000 && pay <= 35000)
//		tax = 1500 * 0.03 + 3000 * 0.10 + 4500 * 0.20 + (pay - 9000) * 0.25;
//	else if (pay > 35000 && pay <= 55000)
//		tax = 1500 * 0.03 + 3000 * 0.10 + 4500 * 0.20 + 26000 * 0.25 + (pay - 35000) * 0.30;
//	else if (pay > 55000 && pay <= 80000)
//		tax = 1500 * 0.03 + 3000 * 0.10 + 4500 * 0.20 + 26000 * 0.25 + 20000 * 0.30 + (pay - 55000) * 0.35;
//	else if (pay > 80000)
//		tax = 1500 * 0.03 + 3000 * 0.10 + 4500 * 0.20 + 26000 * 0.25 + 20000 * 0.30 + 25000 * 0.35 + (pay - 80000) * 0.45;
//	else
//		tax = 0;
//	printf("%.2f\n", tax);
//	return 0;
//}

//int jiecheng(int n)
//{
//	int sum = 1;
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else if (n > 0)
//	{
//		return n * jiecheng(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//
//	if (n < 0)
//	{
//		printf("��������<0��no value!no value!");
//	}
//
//	jiecheng(n);
//
//	printf("%d!=%d", n, jiecheng(n));
//	return 0;
//}

//int fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	fib(n);
//	printf("%d", fib(n));
//	return 0;
//}


//����ת��֮��Ȼ����Լ����!
//#define N 100
//
//int main()
//{
//	int n, i = 0, j = 0;
//	int a[N][N];
//	int b[N][N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			b[i][j] = a[i][j] + a[j][i];
//			printf("%4d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//// ���һ�������Ƿ�Ϊ����
//int isPrime(int num)
//{
//    if (num <= 1)
//    {
//        return 0; // ��������
//    }
//    for (int i = 2; i * i <= num; i++)
//    {
//        if (num % i == 0)
//        {
//            return 0; // ��������
//        }
//    }
//    return 1; // ������
//}
//
//// ���㲻���� n ������ k �������Լ����ǵĺ�
//void calcPrimesAndSum(int n, int k)
//{
//    int primes[100];  // ���ڴ������ k ������
//    int idx = 0;    // primes ������±�
//    int sum = 0;    // �����ĺ�
//
//    for (int i = n; i >= 2 && idx < k; i--)
//    {
//        if (isPrime(i) == 1)
//        {
//            primes[idx] = i;
//            sum += i;
//            idx++;
//        }
//    }
//
//    // ������
//    printf("%d", primes[0]);
//    for (int j = 1; j < idx; j++)
//    {
//        printf("+%d", primes[j]);
//    }
//    printf("=%d\n", sum);
//}
//
//int main()
//{
//    int n, k;
//    scanf("%d %d", &n, &k);
//    calcPrimesAndSum(n, k);
//    return 0;
//}

//int main()
//{
//	int n, k;
//	int i = 0, j = 0;
//	int count = 0;
//	int a[100];
//	int sum = 0;
//
//
//	scanf("%d %d", &n, &k);
//
//	for (i = n; i >= 2 && count < k; i--)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			a[count] = i;
//			count++;
//			sum += i;
//		}
//	}
//
//	for (i = 0; i < count - 1; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d+", a[i]);
//		}
//		else if (i % 2 == 0)
//		{
//			printf("%d+", a[i]);
//		}
//	}
//	printf("%d", a[count - 1]);
//	printf("=%d", sum);
//	return 0;
//}


//int main()
//{
//    char a[100];
//    int k, i;
//    while (gets(a))
//    {
//        k = 1;
//        for (i = 0; a[i] != '\0'; i++)
//        {
//            if (a[i] == ' ' && (a[i - 1] <= 'Z' && a[i - 1] >= 'A') || a[i] == ' ' && (a[i - 1] <= 'z' && a[i - 1] >= 'a'))
//                k++;
//        }
//        printf("%d\n", k);
//    }
//    return 0;
//}