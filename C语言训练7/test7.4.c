#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 20;
//	int b = -10;
//
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}


//�ж�ϵͳ�ֽ���С�˻��ˣ�
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//-128��ԭ�룺10000000000000000000000010000000
//-128�ķ��룺11111111111111111111111101111111
//-128�Ĳ��룺11111111111111111111111110000000 �������� �ض�
//�ض�֮��ģ�10000000  ������������֮ǰ�Ĳ���
//������ʱ��Ĳ����ǣ�11111111111111111111111110000000 ������������
// �������������ǣ���������ʹ洢�����ͣ�����char���ͷ���λ�����ǡ�1����Ҫ��unsigned char����λ�����ǡ�0����


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
/* 128��ԭ�룺00000000000000000000000010000000������Ͳ��붼��ͬ�����ù�
   �ض�֮��ģ�10000000
   ��������ԭ������char���з��ţ���Ҫ��1��11111111111111111111111110000000
   �����%u�����Բ��ùܷ��ţ�ֱ�������11111111111111111111111110000000*/
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//int main()
//{
//	float f = 5.5;
//	//ת��Ϊ�������ơ���101.1 = 1.001 * 2^2��
//	//��ʱ��s = 0; m = 1.011; e = 2��
//	//0100 0000 1011 0000 0000 0000 0000 0000 
//	// 40 b0 00 00
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//    //0 00000000 00000000000000000001001
//    //(-1)^0,  -126, 0.00000000000000000001001
//    //���Ľ���ǣ�(-1)^0 * 0.00000000000000000001001 * 2^(-126) �����ֵ���޽ӽ���0��
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//������������Ľ���ǣ�0.000000��
//
//	*pFloat = 9.0;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}


//#define MAX 10
//int main()
//{
//	int m, n, i = 0, j = 0;
//	int a[MAX][MAX];
//	int b[MAX][MAX];
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
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", a[i][j] + b[i][j]);
//			if (j < n - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����˷���ʵ��
//#define max 20
//int main()
//{
//	int m, n, p;
//	int i = 0, j = 0;
//
//	int a[max][max];
//	int b[max][max];
//	int c[max][max];
//
//	scanf("%d %d %d", &m, &n, &p);
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			c[i][j] = 0;
//            for (int k = 0; k < n; k++)
//            {
//                c[i][j] += a[i][k] * b[k][j];
//            }
//		}
//	}
//
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < p; j++)
//        {
//            printf("%d", c[i][j]);
//            if (j < p - 1)
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//	return 0;
//}


//int main()
//{
//	int i = 0, j = 0;
//	int count = 1;
//	int a[1001] = { 2 };
//
//	for (i = 3; count < 1001; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			a[count] = i;
//			count++;
//		}
//	}
//
//	while (scanf("%d", &i) == 1)
//	{
//		if (count == 0)
//			printf("%d", a[i - 1]);
//		else
//			printf("%d,", a[i - 1]);
//	}
//	return 0;
//}


//#define N 1001
//
////�����������������1000���ڵ�������
//void InitPrimeArray(int* primeArray, int n)
//{
//	int j = 0;
//	int num, i, isPrime;
//	for (num = 2, i = 0; i < n; num++)
//	{
//		for (isPrime = 1, j = 2; j * j <= num; j++)
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
////Ȼ���������������ֱ���ú����þ��С�
//int main()
//{
//	int primeArray[N];
//	int input, count = 0;
//
//	InitPrimeArray(primeArray, N);  // ����
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
//			}//�����Ƚ��е�һ�����ֵ������1����������2
//			else
//			{
//				printf(",%d", primeArray[input - 1]);
//			}//������к������ֵ���������Ա�֤����û�С�����
//			//�൱���á�����һ�����֡��ԡ�ǰ��һ�����ֽ��С������Ĳ��䣬
//			//Ҫ�ǡ�������һ�����֣���ֱ�Ӳ�������������ˣ���Ϊ��������һ�����֡�
//			count++;
//		}
//	}
//	printf("\n");
//	return 0;
//}


//int getmin(int a, int b, int c)
//{
//	if (a < b && a < c)
//	{
//		return a;
//	}
//	else if (b < a && b < c)
//	{
//		return b;
//	}
//	else
//	{
//		return c;
//	}
//}
//
//
//int main()
//{
//	int m, n, k;
//
//	scanf("%d %d %d", &m, &n, &k);
//
//	int i = getmin(m, n, k);
//
//	printf("Min = %d", i);
//	return 0;
//}

//int X(int x, int y, int z)
//{
//    int min = x;
//    if (y < min)
//    {
//        min = y;
//        if (z < min)
//        {
//            min = z;
//        }
//    }
//
//}
//int main()
//{
//    int m, n, k;
//
//    scanf("%d %d %d", &m, &n, &k);
//
//    int i = X(m, n, k);
//
//    printf("Min = %d", i);
//    return 0;
//}


//int main()
//{
//	char c;
//	int x = 0, y = 0, z = 0, s = 0, k = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if (c <= 'z' && c >= 'a')
//		{
//			x++;
//		}
//		else if (c <= 'Z' && c >= 'A')
//		{
//			y++;
//		}
//		else if (c <= '9' && c >= '0')
//		{
//			s++;
//		}
//		else if (c == ' ')
//		{
//			k++;
//		}
//		else
//		{
//			z++;
//		}
//	}
//	printf("Ӣ��Сд��ĸ��x = %d��, Ӣ�Ĵ�д��ĸ��y = %d��, ������s = %d��, �ո���k = %d��, �����ַ���z = %d\n", x, y, s, k, z);
//	return 0;
//}


//int main()
//{
//	int i, j, k = 0, n = 0;
//
//	for (i = 1; i <= 101; i += 4)
//	{
//		k += i;
//	}
//	for (i = 3; i <= 99; i += 4)
//	{
//		n += i;
//	}
//	j = -n + k;
//	printf("j = %d\n", j);
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0, k = 0, s = 0, z = 0, x = 0, y = 0;
//
//	scanf("%d %d", &m, &n);
//
//	for (int i = m; i < n; i++)
//	{
//		if (i % 3 == 1 && i % 5 == 2 && i % 7 == 3)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0, n = 0;
//	float t = 1.0, m = 0.0;
//
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		 t -= 1.0 / i;
//	}
//	printf("%f", t);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int a = 0, b = 0;
//	float c = 0.0, n = 0.0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		a += i;
//	}
//
//	for (i = 1; i <= 50; i++)
//	{
//		b += i * i;
//	}
//
//	for (i = 1; i <= 10; i++)
//	{
//		c += 1.0 / i;
//	}
//
//	n = a + b + c;
//	printf("%f", n);
//	return 0;
//}




//int main()
//{
//	int a[20];
//	int i = 0, j, n;
//	char c;
//
//	while (scanf("%d", &n) == 1 && (c = getchar()) != '\n')
//	{
//		a[i] = n;
//		i++;
//	}
//
//	for (i; i > 0; i--)
//	{
//		printf("%d ", a[i - 1]);
//	}
//
//	return 0;
//}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�����Ŀ�������Ǻ���Ҫ��һ�����⣬����������Һܳ�ʱ������⣡��������������������������������������������������������������
//���������ǣ���β��ܽ�������������֡�������������ŵ�ͨ��ġ�
//int main()
//{
//    int a[20];
//    int n = 0, x;
//
//    while (scanf("%d", &x) != EOF)
//    {
//        a[n] = x;
//        n++;
//
//        if (getchar() == '\n')
//        {
//            break;
//        }
//    }
//
//    for (int i = n - 1; i > 0; i--)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("%d", a[0]);
//
//    return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;	
//}


//int main()
//{
//	char p = "hello world";//����ֻ�ǰ��ַ���������ĸ�ĵ�ַ��ֵ��ָ��p����û�ж��ַ��������޸ġ�
//
//	printf("%s\n", p);
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit.";  // �ַ���(�����޸�)
//	char str2[] = "hello bit.";  // �����ڴ��еġ��������ַ����� ����ָ��ĵ�ַ�ǲ�ͬ�ģ�����������
//
//	const char* str3 = "hello bit.";   // �����ַ����������޸ģ�
//	const char* str4 = "hello bit.";   //�����ڡ�ֻ�����ڴ��еĳ����ַ���������ָ��ĵ�ַ��һ���ģ�ֻ������һ��
//
//	if (str1 == str2)
//		printf("str1 == str2\n");
//	else
//		printf("str1 != str2\n");
//
//	if (str3 == str4)
//		printf("str3 == str4\n");
//	else
//		printf("str3 != str4\n");
//
//	return 0;
//}





//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[3] = { arr1, arr2, arr3 };  //������ָ�����飬���Խ�������Ĵ�ţ�Ȼ�󻹿��Խ��ж�ά�����ģ��ʵ�֡�
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}


//����ָ��
//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;
//
//	return 0;
//}







//������һ���������ͣ�����һ���������������ͣ�����һ���ṹ�塣

//typedef struct Birthday
//{
//	int year;
//	int month;
//	int day;
//}Birthday;
//typedef struct Student
//{
//	int id; // ѧ��
//	char *name; // ����
//	int age; // ����
//	float score; // �ɼ�
//	Birthday birthday; // ����
//}Student;
//
//
//int main()
//{
//	Student stu = { .id = 1001,.name = "Tom",.age = 20,.score = 89.5, .birthday={.year=2000,.month=10,.day=1} };
//	printf("%d\n", stu.id);
//	printf("%s\n", stu.name);
//	printf("%d\n", stu.age);
//	printf("%f\n", stu.score);
//	printf("%d-%d-%d\n", stu.birthday.year, stu.birthday.month, stu.birthday.day);
//	return 0;
//}


//#define N 20
//
//typedef struct person
//{
//	char name[10];
//	double wage;  
//	double money;
//	double put;
//}person;
//
//int main()
//{
//	int n = 0;
//	float zuihou[N];
//	person p[N];
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %lf %lf %lf", p[i].name, &p[i].wage, &p[i].money, &p[i].put);
//		zuihou[i] = p[i].wage + p[i].money - p[i].put;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s %.2lf\n", p[i].name, zuihou[i]);
//	}
//
//	return 0;
//}


//#define N 100
//
//typedef struct Student
//{
//	char id[6]; // ѧ��
//	char name[11]; // ����
//	int performance1;
//	int performance2;
//	int performance3;
//	int all;
//}Student;
//
//int main()
//{
//	int n = 0;
//	Student stu[N];
//	int max = 0, m = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].performance1, &stu[i].performance2, &stu[i].performance3);
//		stu[i].all = stu[i].performance1 + stu[i].performance2 + stu[i].performance3;
//	}
//
//	max = stu[0].all;
//	for (int i = 1; i < n; i++)
//	{
//		if (stu[i].all > max)
//		{
//			max = stu[i].all;
//			m = i;
//		}
//	}
//
//	printf("%s %s %d\n", stu[m].id, stu[m].name, max);
//
//	return 0;
//}




//struct stu 
//{
//	char num[6];
//	char name[11];
//	int  a;
//	int  b;
//	int  c;
//	int  sum;
//}s[11];
//
//int main()
//{
//	struct stu t;
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%s%d%d%d", s[i].num, s[i].name, &s[i].a, &s[i].b, &s[i].c);
//		s[i].sum = s[i].a + s[i].b + s[i].c;
//	}
//
//	//for (i = 0; i < n; i++)
//	//{
//	//	for (j = 0; j < n; j++)
//	//	{
//	//		if (s[j].sum < s[j + 1].sum)
//	//		{
//	//			t = s[j];
//	//			s[j] = s[j + 1];
//	//			s[j + 1] = t;
//	//		}
//	//	}
//	//}
//	for (i = 0; i < n; i++)
//	printf("%s %s %d %d %d\n", s[i].num, s[i].name, s[i].a, s[i].b, s[i].c);
//	return 0;
//}

//#define N 100
//
//typedef struct child
//{
//	char name[11];
//	int birthday;
//	char num[N];
//}child;
//
//int main()
//{
//	int n = 0;
//	child c[N];
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %s", c[i].name, &c[i].birthday, c[i].num);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (c[j].birthday > c[j + 1].birthday)
//			{
//				child t = c[j];
//				c[j] = c[j + 1];
//				c[j + 1] = t;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s %d %s\n", c[i].name, c[i].birthday, c[i].num);
//	}
//	return 0;
//}

//#define N 100
//
//typedef struct person   //�ڽṹ�崴����ͬʱ�����нṹ�����������������Ĳ�����
//{
//	char name[11];
//	int birthday;
//	char number[N];
//}person;
//
//
//int main()
//{
//	int n = 0;
//	person p[N];
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %s", p[i].name, &p[i].birthday, p[i].number);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (p[j].birthday > p[j + 1].birthday)  
//			{
//				person t = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = t;         //�����Ƕ����������ṹ�塱�еı����Ľ���,���ǵ����Ľ���birthday�Ľ���
//			}
//		}	}
//
//	for (int i = 0; i < n; i++)
//	{   
//		("%s %d %s\n", p[i].name, p[i].birthday, p[i].number);
//	}
//	return 0;
//}


//int main()
//{
//	int a[10] = { 1,2,4,3,6,7,56,4,3,3 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10 - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp; 
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//
//#define N 100
//
//typedef struct gongren
//{
//	char name[10];
//	double wage1;
//	double wage2;
//	double put;
//}gongren;



//int main()
//{
//	int n;
//	gongren g[N];
//	int i = 0, j = 0;
//	float sum[N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %lf %lf %lf", g[i].name, &g[i].wage1, &g[i].wage2, &g[i].put);
//		sum[i] = g[i].wage1 + g[i].wage2 - g[i].put;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %.2f\n", g[i].name, sum[i]);
//	}
//	return 0;
//}


//#define N 100
//
//typedef struct gongren
//{
//	char name[10];
//	double wage1;
//	double wage2;
//	double put;
//	double zuihou;   //����������е�����ĵط��ǣ�����ֱ�Ӵ�����һ����λ�ڽṹ�塱�еģ���������
//					//�������һ����������һ��sum[i]���ķ�ʽ�������һ��!
//}gongren;
//
//
//int main()
//{
//	int n;
//	int i = 0;
//	gongren p[N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %lf %lf %lf", p[i].name, &p[i].wage1, &p[i].wage2, &p[i].put);
//		p[i].zuihou = p[i].wage1 + p[i].wage2 - p[i].put;  //����Ҳ��ֱ�ӽ����ṹ�塱�еĽ���������,�����ڡ��ṹ�塱�еı���.
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %.2lf\n", p[i].name, p[i].zuihou);
//	}
//	return 0;
//}

//���������1+(1+2)+(1+2+3)++(1+2+��+10)�ĺͲ������
//int main()
//{
//    int sum = 0;
//
//    for (int i = 1; i <= 10; i++)  //���ñ��˼��������
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            sum += j;
//        }
//    }
//
//    printf("%d", sum);
//    return 0;
//}

//int main()
//{
//	int x;
//	scanf("%d", &x);
//
//	if (x % 3 == 0 && x % 5 == 2)
//	{
//		printf("%d", x);
//	}
//	return 0;
//}


//#define N 100
//
//typedef struct Student
//{
//	char name[10];
//	char Snum[10];
//	int performance1;
//	int performance2;
//	int performance3;
//	double aver;
//}Student;
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	Student stu[N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", stu[i].name, stu[i].Snum, &stu[i].performance1, &stu[i].performance2, &stu[i].performance3);
//		stu[i].aver = (stu[i].performance1 + stu[i].performance2 + stu[i].performance3) * 1.0 / 3;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%.2lf", stu[i].aver);
//	}
//  return 0;
//}

