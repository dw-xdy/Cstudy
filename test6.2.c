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

//int main()
//{
//	int a[1000] = { 2 }, count = 1;
//	int i = 0;
//	for (i = 3; count < 1000; i += 2)
//	{
//		int flag = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			a[count] = i;
//			count++;
//		}
//	}
//	while (scanf("%d", &i) == 1)
//	{
//		printf("%d", a[i - 1]);
//		if (getchar() == '\n')
//		{
//			putchar('\n');
//		}
//		else
//		{
//			putchar(',');
//		}
//	}
//
//	return 0;
//}


////���������ȵ��ٿ���
//void fun(int n)
//{
//    int i = 2, k = 0;  // ��ʼ��i��kΪ2��0
//    while (n != 1)  // ��n������1ʱѭ��ִ�����²���������һ����ѭ�������������ڡ��ݹ顱
//    {
//        if (n % i == 0)  // ���n�ܹ�����i
//        {
//            if (k == 0)  // ���kΪ0����ʾ�ǵ�һ������
//                printf("%d=", n);  // ��ӡn�ĵȺ�
//            printf(k++ == 0 ? "%d" : "*%d", i);  // ��ӡ����i����һ�����Ӳ��ӳ˺ţ���������Ӽӳ˺ţ�
//            n /= i;  // ����n��ֵΪn����i����
//        }
//        else  // ���n��������i
//        {
//            i++;  // i����1
//        }
//    }
//    printf("\n");  // ���д�ӡ
//}
//
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1 && n > 1) // ���� 0 �� ������������
//        fun(n);
//    return 0;
//}



//#define N 1001
//void Init(int* a, int n)
//{
//	int i, j, k, flg;
//	for (i = 1, k = 0; k < n; i++)
//	{
//		for (j = 2, flg = 1; flg && j * j <= i; j++)
//		{
//			if (i % j == 0)  
//				flg = 0;
//		}
//		if (flg)
//		{
//			a[k++] = i;
//		}
//	}
//}
//
//
//int main()
//{
//	int a[N], n, k = 0;
//	Init(a, N);
//	while (scanf("%d", &n) == 1) 
//	{              //���� 0 �� ctrl + z �س� ��������
//		if (n <= 0) 
//		{
//			break;
//		}
//		else
//		{
//			printf(k++ == 0 ? "%d" : ",%d", a[n]);
//		}
//	}
//	return 0;
//}



//��������е㿴���������ǻ���Ҫ����������������ʱ���˿��������Ȱ��������֪ʶ���˰ɡ�
//#define N 1001
//
//// ��ʼ����������
//void InitPrimeArray(int* primeArray, int n)
//{
//	int j = 0;
//	int num, i, isPrime;
//	for (num = 2, i = 0; i < n; num++)
//	{
//		for (isPrime = 1,  j = 2; j * j <= num; j++)
//		{
//			if (num % j == 0)
//			{
//				isPrime = 0;
//				break;
//			}
//		}
//		if (isPrime)
//		{
//			primeArray[i++] = num;
//		}
//	}
//}
//
//int main()
//{
//	int primeArray[N];  // �洢����������
//	int input, count = 0;  // ��������֣�������
//
//	InitPrimeArray(primeArray, N);  // ��ʼ����������
//
//	while (scanf("%d", &input) == 1)
//	{
//		if (input <= 0)
//		{
//			break;
//		}
//		else
//		{
//			if (count == 0)
//			{
//				printf("%d", primeArray[input - 1]);
//			}
//			else
//			{
//				printf(",%d", primeArray[input - 1]);
//			}
//			count++;
//		}
//	}
//	printf("\n");
//	return 0;
//}

//ˮ�ɻ���������
//int main()
//{
//	int i = 0, j = 0, k = 0;
//	
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			for (k = 0; k < 10; k++)
//			{
//				if (i * 100 + j * 10 + k == i * i * i + j * j * j + k * k * k)
//				{
//					printf("%d%d%d\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int m = 10;
//	int n = 100;
//
//	const int* p = &m;
//	printf("%d\n", *p);
//	return 0;
//}


//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//unsigned long long fibonacci(long long a, long long b, int count)
//{
//	if (count == 0)
//		return b;
//	else
//		return fibonacci(a + b, a, count - 1);
//}
//
//int main()
//{
//	int i, n;
//	printf("������Ҫ�����쳲��������е�������");
//	scanf("%d", &n);
//
//	if (n < 0)
//	{
//		return 1;
//	}
//	for (i = 0; i <= n; ++i)
//	{
//		printf("쳲��������еĵ� %d ���� %llu\n", i, fibonacci(1, 0, i));
//	}
//	return 0;
//}



//int main() 
//{
//	char t[200] = "ThE arrAy dimensions must be pOsitive constant Integer expressions.";
//	int i, j, s = 0;
//	//���ڴ˴��������
//
//	for (i = 0; i < strlen(t); i++)
//	{
//		if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u' || t[i] == 'A' || t[i] == 'E' || t[i] == 'I' || t[i] == 'O' || t[i] == 'U')
//		{
//			s++;
//		}
//	}
//	printf("%d", s);//����ַ���t��Ԫ����ĸ�ĸ��� 
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    char s[26];
//    char t[100] = "The People\'s Republic of China";
//    int i, j;
//
//    for (i = 0; i < 26; i++)  //�����������鸳ֵ 
//    {
//        s[i] = 'A' + i;
//    }
//
//    for (i = 0; i < 26; i++)  //���������������
//    {
//        printf("%c%c", s[i], s[i] + 32);
//    }
//    printf("\n");
//
//    for (i = 0; t[i] != '\0'; i++)  //ֻ�����ַ����������������飩
//    {
//        printf("%c_", t[i]);
//    }
//    return 0;
//}


//������ά���鲢���
//#define MAX_SIZE 20
//
//int main() 
//{
//    int N, i, j;
//    printf("������һ��������N��N<20��");
//    scanf("%d", &N);
//
//    if (N >= MAX_SIZE)
//    {
//        printf("�������ӦС��20");
//        return 1;
//    }
//
//    int matrix[MAX_SIZE][MAX_SIZE];
//
//    for (i = 0; i < N; i++) 
//    {
//        for (j = 0; j < N; j++) 
//        {
//            matrix[i][j] = (i + 1) * 100 + (j + 1);
//        }
//    }
//
//    for (i = 0; i < N; i++) 
//    {
//        for (j = 0; j < N; j++)
//        {
//            printf("%04d", matrix[i][j]);
//            if (j < N - 1)
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//����ʵ�ֺ���һ��������ͬ�Ĺ��ܣ�����ʹ���˸��Ӽ��Ĵ��롣
//#include <stdio.h>
//
//int main() {
//    int N;
//    printf("������һ��������N��N<20��");
//    scanf("%d", &N);
//
//    if (N >= 20) {
//        printf("�������ӦС��20");
//        return 1;
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            printf("%02d%02d ", i + 1, j + 1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


/*�����һ�и���һ��������n��1��n��6�������n�У�ÿ�и���n������������Կո�ָ�
�����ʽ:
���ת�ú��n��n�о���ÿ����ռ4λ��*/
//��ȫ���Լ�д�ġ�
//#define MAX 6
//int main()
//{
//	int shuzu[MAX][MAX];
//	int i = 0, n = 0;
//	int j = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &shuzu[i][j]);
//		}
//	}
//
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%4d ", shuzu[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n;
//
//	scanf("%d", &n);
//
//	if (n < 1 || n > 10)
//	{
//		printf("not found");
//	}
//	else
//	{
//		printf("weizhi:%d", n - 1);
//	}
//	return 0;
//}

//��������쳲��������еĺ�
//int main()
//{
//	unsigned long long a[100] = { 1,1 };
//	int i = 0, j = 0, k = 0;
//	int c = 0, b = 0;
//
//	for (i = 2; i < 100; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//
//	scanf("%d %d", &c, &b);
//
//	printf("%llu", a[c - 1] + a[b - 1]);
//	return 0;
//}



/* ѡ������ */
//void selectionSort(int nums[], int n)
//{
//    // ��ѭ����δ��������Ϊ [i, n-1]
//    for (int i = 0; i < n - 1; i++)
//    {
//        // ��ѭ�����ҵ�δ���������ڵ���СԪ��
//        int k = i;
//        for (int j = i + 1; j < n; j++)
//        {
//            if (nums[j] < nums[k])
//                k = j; // ��¼��СԪ�ص�����
//        }
//        // ������СԪ����δ����������׸�Ԫ�ؽ���
//        int temp = nums[i];
//        nums[i] = nums[k];
//        nums[k] = temp;
//    }
//}
//
//#define MAX 100
//int main()
//{
//	int n;
//	int num[MAX];
//	int i, j, k;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//
//    selectionSort(num, n);
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	int n = 0;
//	int i = 0, j = 0, k = 0;
//	int a[MAX][MAX];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			a[i][j] = ((i + 1) * 100) + (j + 1);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%04d", a[i][j]);
//			if (j < n - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//���������ֵ����Сֵ֮��,��Ҫ�ǽ��б������ҳ����ֵ����Сֵ��Ȼ������ά����ı���Ҳ����һ�����ѵĵط�����Ҫ��Ҫע���ܽᡣ
//��ͬ�������С���������ÿ��ԡ�������һ���ܴ�����֣�Ȼ��������룬�Ϳ����������ò�ͬ�������ˡ�
//#define MAX 100
//int main()
//{
//	int a[MAX][MAX];
//	int n = 0, i = 0, j = 0, k = 0, m = 0;
//	int x, y;
//
//	scanf("%d %d", &m, &n);
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	//���ֵ�������
//	x = a[0][0];
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] > x)
//			{
//				x = a[i][j];
//			}
//		}
//	}
//	//��Сֵ�������
//	y = a[0][0];
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] < y)
//			{
//				y = a[i][j];
//			}
//		}
//	}
//
//	printf("%d", x - y);
//	return 0;
//}


//int main()
//{
//	int Sum = 0;
//	float Average = 0;
//	int i = 0, j = 0, k = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &j);
//		Sum += j;
//	}
//
//	Average = Sum * 1.0 / n;
//
//	printf("Sum = %d\nAverage = %.2f", Sum, Average);
//	return 0;
//}



/*�����������һ�������ת�ã����ǲ���һ��N*N�ľ��󣬶���һ��N*M�ľ���������Ҫ����һЩ�޸ġ�
�����ڡ�i���͡�j�����л�����ʱ��Ҫע�⡰n���͡�m��Ҳ���л���*/
//#define MAX 100
//int main()
//{
//	int a[MAX][MAX];
//	int n = 0, i = 0, j = 0, k = 0, m = 0;
//
//	scanf("%d %d", &m, &n);
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < m; i++)
//		{
//			printf("%d", a[i][j]);
//			if (i < m - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0, j = 0, k = 0, m = 0;
//
//	scanf("%d", &m);
//
//	for (i = 1; i <= m; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (j = 0; j < m; j++)
//			{
//				printf("%03d", i * m - j);
//				if (j < m - 1)
//				{
//					printf(" ");
//				}
//			}
//		}
//		if (i % 2 == 1)
//		{
//			for (j = 1; j <= m; j++)
//			{
//				printf("%03d", (i - 1) * m + j);
//				if (j < m)
//				{
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ѭ�����е�����
// �������е㿴������
//#define MAX 30
//int main() 
//{
//    int n, i = 0, j, c = 0;
//    int a[MAX][MAX];
//    scanf("%d", &n);
//    int k = 0, l = n - 1;     //k��l��ʾ��ǰ���������
//    while (k <= l)
//    {       //��һ�Ρ�Բ�ܡ�Ϊһ��ѭ��
//        for (j = k; j <= l; j++) a[k][j] = ++c;//����
//        for (i = k + 1; i <= l; i++) a[i][l] = ++c;//����
//        for (j = l - 1; j >= k; j--) a[l][j] = ++c;//����
//        for (i = l - 1; i > k; i--) a[i][k] = ++c;//����
//        k++; l--;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++)
//            printf("%03d ", a[i][j]);
//        printf("\n");
//    }
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//int main()
//{
//	int a = 3;
//	//int b = ++a;//������ȼ��ٸ�ֵ������a��ֵ��4
//	//++������������������У��ȶԡ�a���Լ����м�1��Ȼ��ʹ�ã����Ǹ�ֵ����b����
//
//	int b = a++;//������ȸ�ֵ�ټӣ�����a��ֵ��4��Ȼ���ٸ�ֵ����b����
//	//++��--�������������������Ƕ��Լ�ʹ��
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	return 0;
//}



//��һ��void����˼�ǲ���Ҫ����ֵ
//�ڶ���void����˼�ǲ���Ҫ����
//void test(void)

//int main()
//{
//	int a = 20;
//	//ԭ�룺00000000000000000000000000010100
//	//���룺00000000000000000000000000010100
//	//���룺00000000000000000000000000010100
//	int b = -10;
//	//ԭ�룺10000000000000000000000000001010
//	//���룺11111111111111111111111111110101
//	//���룺11111111111111111111111111110110
//	int c = 0;
//	return 0;
//}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//���������ۺ�Ӧ��

int a[201], size = 0;   //ȫ�ֱ��� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int menu();      //�������� 
int print();
int init();
void sort();
int max();
void min();
int sum();
int average();
int append();
int get_index(int n);
int find();
void del();

int main() {     //������ 
    char c = '#';
    while (c != 'X') {
        c = menu();
        switch (c) {
        case 'P': print();  break;
        case 'I': init();   break;
        case 'S': sort();   break;
        case 'D': del();    break;
        case 'M': max();    break;
        case 'N': min();    break;
        case 'U': sum();    break;
        case 'G': average(); break;
        case 'A': append(); break;
        case 'F': find();   break;
        case 'X':           break;
        default:printf("\n���������...");
        }
        if (c != 'X') {
            printf("\n����������� ...");
            getch();
        }
    }
}



int menu() {
    printf("\n*********** �����ۺ�Ӧ�� *************");
    printf("\n*   I.��ʼ��      U.����Ԫ�غ�       *");
    printf("\n*   P.���        G.����Ԫ��ƽ��ֵ   *");
    printf("\n*   S.����        A.ĩβ���Ԫ��     *");
    printf("\n*   M.���ֵ      F.����Ԫ��         *");
    printf("\n*   N.��Сֵ      D.ɾ��Ԫ��         *");
    printf("\n*          X.�˳�����                *");
    printf("\n**************************************");
    printf("\n����������ѡ��:");
    char c;
    c = getche();
    if (c >= 'a' && c <= 'z')c = c - 32;
    return c;
}
int print() {
    int i; printf("\n���鹲��%d��Ԫ��:", size);
    for (i = 0; i < size; i++)printf("%d ", a[i]);
}
int init() {
    printf("\nϵͳ��ʼ������Ϊ5��1��1000���������.");
    int i;
    size = 5;
    srand(time(NULL));
    for (i = 0; i < size; i++) a[i] = rand() % 1000 + 1;
    print();
}

void sort() {
    int i, j, t;
    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (a[i] < a[j]) {
                t = a[i]; a[i] = a[j]; a[j] = t;
            }
    printf("\n�������....");
    print();
}

int max() {
    int m, i;
    if (size == 0) printf("\nû��Ԫ��!");
    else {
        m = a[0];
        for (i = 1; i < size; i++)if (m < a[i])m = a[i];
        printf("\n���Ԫ��: %d", m);
    }
}
void min() {
    int m, i;
    if (size == 0) printf("\nû��Ԫ��!");
    else {
        m = a[0];
        for (i = 1; i < size; i++)if (m > a[i])m = a[i];
        printf("\n��СԪ��: %d", m);
    }
}
int sum() {
    int s = 0, i;
    if (size == 0) printf("\nû��Ԫ��!");
    else {
        for (i = 0; i < size; i++)s += a[i];
        printf("\n����Ԫ��֮��: %d", s);
    }
}
int average() {
    int s = 0, i;
    if (size == 0) printf("\nû��Ԫ��!");
    else {
        for (i = 0; i < size; i++)s += a[i];
        printf("\n����Ԫ��ƽ��ֵ: %lf", (double)s / size);
    }
}
int append() {
    int i, p = 0, n;
    printf("\n������Ҫ��ӵ�Ԫ��:");
    scanf("%d", &n);
    a[size++] = n;
    print();
}
int get_index(int n) {
    int i;
    for (i = 0; i < size; i++)
        if (a[i] == n)  return i;
    return -1;
}
int find() {
    int i, n, index;
    printf("\n������Ҫ���ҵ�Ԫ��:");
    scanf("%d", &n);
    index = get_index(n);
    if (index != -1)
        printf("\n�ҵ��ˣ�����Ϊ: %d.", index);
    else
        printf("\nû�ҵ�.");
}

void del() {
    int n, i, index;
    printf("\n������Ҫ���ҵ�Ԫ��:");
    scanf("%d", &n);
    index = get_index(n);
    if (index == -1) {
        printf("û�ҵ�ֵΪ%d��Ԫ��.", n);
        return;
    }
    for (i = index; i < size - 1; i++)a[i] = a[i + 1];
    size--;
    print();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////