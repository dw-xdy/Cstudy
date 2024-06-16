#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char a = -128;
//	//原码：00000000000000000000000010000001
//	//截断：10000001
//	//整型提升：11111111111111111111111110000001 -- 补码
//	//反码：10000000000000000000000001111110
//	//补码：10000000000000000000000001111111 --> -127
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//原码：10000000000000000000000010000000
//	//反码：11111111111111111111111101111111
//	//补码：11111111111111111111111110000000
//	//截断：10000000
//	//整型提升：11111111111111111111111110000000 --> 补码(原码), 在计算机中,这个就是无符号的,所以会直接输出
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



//任意输入数字,排序然后进行输出
//int main()
//{
//	int n = 0;
//	int i = 0, j = 0;
//	int a[100];
//
//	while (scanf("%d", &a[n]) == 1)   //注意这里不能用while(scanf("%d", &a[i]) == 1)总之是不能用和“i”有关的变量作为循环条件
//	{                                 //因为这里的“i”在之后还会用到,要是现在用了,在之后会有问题：比如会导致数组越界.
//		n++;                          //最好还是用“n”,这样在之后的循环中,就不用担心“i”变量了.
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



//实现矩阵乘法
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
//			printf("%c%c", upper, lower);   //这里没有必要用数组,用了数组反而会不好操作!
//		}
//	}
//	else if (a < b)
//	{
//		for (int i = a; i <= b; i++)
//		{
//			char upper = 'A' + i - 1;
//			char lower = 'a' + i - 1;
//			printf("%c%c", upper, lower);   //这里没有必要用数组,用了数组反而会不好操作!
//		}
//	}
//}
//
//int main() 
//{
//	int a, b;
//
//	// 读取输入
//	scanf("%d %d", &a, &b);
//
//	// 输出字母表范围
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
//			if (p[j].kg < p[j + 1].kg)                //我的思路是：将这些商品进行“排列”直接让所有的商品按照：
//				                                      //克数最大的商品,如果有多个最大克数商品，则输出价格最高的商品信息
//			{										  //按照这样的形式进行“排列”也就是说,永远都让最开始的p[0]满足上面的所有要求,这样就可以进行输出了
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
//		printf("给定的数<0，no value!no value!");
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


//矩阵转置之后然后和自己相加!
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

//// 检查一个数字是否为素数
//int isPrime(int num)
//{
//    if (num <= 1)
//    {
//        return 0; // 不是素数
//    }
//    for (int i = 2; i * i <= num; i++)
//    {
//        if (num % i == 0)
//        {
//            return 0; // 不是素数
//        }
//    }
//    return 1; // 是素数
//}
//
//// 计算不超过 n 的最大的 k 个素数以及它们的和
//void calcPrimesAndSum(int n, int k)
//{
//    int primes[100];  // 用于存放最大的 k 个素数
//    int idx = 0;    // primes 数组的下标
//    int sum = 0;    // 素数的和
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
//    // 输出结果
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


//int main()
//{
//	int a = 20;//从内存申请了四个字节
//	&a; //取地址操作符.
//	int* pa = &a;
//	//pa就是“指针变量”
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//这个的意思就是：pc是一个“变量”,对“char类型”的“变量”进行储存.
//	//用pc变量 对 char类型的“变量：ch的地址”进行存储.
//	printf("%p\n", &ch);  //输出的地址是一样的,
//	printf("%p", pc);    //pc中存放的是ch的地址!
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	scanf("%d", &a); //这里的意义是：创建了一个用于储存“a”的内存空间,然后通过“&”运算符去找到“a”,最后输入我想要“输入的数值”.
//	//我只有知道了“a”在什么位置,我才能找到“a”.(这就是&的意义).
//
//	printf("%d", a);
//	return 0;
//}


//void mikado(int bah)
//{
//	int pooh = 10;
//	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
//
//}
//
//
//int main()
//{
//	int pooh = 2, bah = 5;
//
//	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
//
//	mikado(pooh);
//	return 0;
//}



//总归还是要自己先想清楚了,一定要注意程序的设计思想和方式,最好是自己先执行一遍,然后再在程序上体现出来
//int main()
//{
//
//	int a = 0;
//	int n = 0;
//	int ret = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < 5; i++)
//	{
//		ret = ret * 10 + n;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";//这里只是将“a”的地址赋给了“p”
//	//char arr[] = "abcdef";    //arr[i] = ＊(arr + i)好像是这样的吧
//
//	//字符串字面量（如 "abcdef"）在内存中的表现形式是一个以 \0 终止的字符数组。
//	//编译器会将这样的字符串字面量存储在程序的只读数据段中，此处存储的字符序列被认为是不可变的，它是一个常量。
//	printf("%s", p);  //用“%s”进行打印的时候,只要提供一个地址就行了,然后按照这个地址向后继续打印,直到遇到“\0”
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j)); //这里最重要的就是“传递地址”的概念,这里parr[]传递了地址,而且parr[i]中放着的也是地址.
//			//所以要进行注意的是：j只是作为一个向后进行传递的作用,j本身不是“地址”,但是“j”可以让地址向后传递.
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//这里是将arr的首地址存放到了p中
//	int (*pa)[10] = &arr;//这里的是将arr中的所有地址都放到了pa中
//	//写数组指针的步骤：1. 先写一个“指针变量”, 2. 看看是不是要存放“数组”, 3. 直接写一个数组[]. 4. 最后看看这个数组是什么类型的.
//	return 0;
//}

//#define N 100
//
//typedef struct Student
//{
//	char id[6];
//	char name[11];
//	int pro1;
//	int pro2;
//	int pro3;
//	int all;
//}Student;
//
//
//int main()
//{
//	int n;
//	int i;
//	int max, m = 0;
//	Student stu[N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].pro1, &stu[i].pro2, &stu[i].pro3);
//		stu[i].all = stu[i].pro1 + stu[i].pro2 + stu[i].pro3;
//	}
//
//	max = stu[0].all;
//	for (i = 1; i < n; i++)   //我觉得这个写法是一个很好很厉害的写法,因为这样可以同时进行所有结构体的改变,
//	{                         //我先定义一个“max”变量,然后进行“遍历”最后将最大的成绩赋值给“max”,
//		if (stu[i].all > max) //然后用之前定义的“m”变量,将“i赋值给m”这样就满足了最高成绩的人也直接进行替换了,
//		{                     //最后只要输出“m”就行!
//			max = stu[i].all;
//			m = i;
//		}
//	}
//
//	printf("%s %s %d\n", stu[m].name, stu[m].id, stu[m].all);
//
//	return 0;
//}



//#define N 100
//
//typedef struct Student
//{
//	char id[6];
//	char name[11];
//	int pro1;
//	int pro2;
//	int pro3;
//	int all;
//}Student;
//
//
//int main()
//{
//	int n;
//	int i;
//	int max;
//	Student stu[N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].pro1, &stu[i].pro2, &stu[i].pro3);
//		stu[i].all = stu[i].pro1 + stu[i].pro2 + stu[i].pro3;
//	}
//
//	max = stu[0].all;
//	for (i = 1; i < n; i++)  
//	{                         
//		if (stu[i].all > max) 
//		{                     
//			max = stu[i].all;
//			Student s = stu[0];        //这个是一个不好的写法,个人觉得,这样我直接进行了所有的变换,
//			stu[0] = stu[i];           //这样反而会有点麻烦,最好是进行上面的做法,这样是最好的!
//			stu[i] = s;                //这个方法中任何综合成绩比“max”大的,都要和stu[0]进行交换,这样就直接printf(stu[0])就行,
//			                           //不用管别的东西!
//		}
//	}
//
//	printf("%s %s %d\n", stu[0].name, stu[0].id, stu[0].all);
//
//	return 0;
//}




//#include <stdlib.h>
//
//#define N 100
//
//typedef struct Student
//{
//	char* id;
//	char* name;
//	int pro1;
//	int pro2;
//	int pro3;
//	int all;
//} Student;
//
//int main()
//{
//	int n;
//	int i;
//	int max;
//	Student stu[N];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		stu[i].id = (char*)malloc(6 * sizeof(char));     // Allocate memory for id
//		stu[i].name = (char*)malloc(11 * sizeof(char));  // Allocate memory for name
//		scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].pro1, &stu[i].pro2, &stu[i].pro3);
//		stu[i].all = stu[i].pro1 + stu[i].pro2 + stu[i].pro3;
//	}
//
//	max = stu[0].all;
//	for (i = 1; i < n; i++)
//	{
//		if (stu[i].all > max)
//		{
//			max = stu[i].all;
//			Student s = stu[0];
//			stu[0] = stu[i];
//			stu[i] = s;
//		}
//	}
//
//	printf("%s %s %d\n", stu[0].name, stu[0].id, stu[0].all);
//
//	// Free allocated memory
//	for (i = 0; i < n; i++) 
//	{
//		free(stu[i].id);
//		free(stu[i].name);
//	}
//
//	return 0;
//}




//通过这几个题目解法的对比也能知道我的做法还是有利有弊,
// 1. 比如代换：永远只用注意[0]就行,不用想太多,但是可以对于性能要求会高一点
// 2. 另一个是进行价格代换的同时,将i赋值,最后输出i赋值过的量,这个需要想的东西哦度一点,但是对于性能的要求会低一点.
// 3. 任何程序,肯定是写的越简单越好,这是一定的,但是不知道要怎么去写代码的话,就去求助别人或者是求助于AI,这都是很好的方式.




//
//#define N 100
//
//typedef struct Shangpin
//{
//	char name[10];
//	double price;
//	int kg;
//} Shangpin;
//
//int main()
//{
//	int n, m = 0;
//	Shangpin sh[N];
//	double maxPrice = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %lf %d", sh[i].name, &sh[i].price, &sh[i].kg);
//		if (sh[i].kg > sh[m].kg || (sh[i].kg == sh[m].kg && sh[i].price > sh[m].price))
//		{
//			m = i;
//		}
//	}
//
//	printf("%s %.2lf %d\n", sh[m].name, sh[m].price, sh[m].kg);
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_NAME_LENGTH 11 // 10个字符 + 1个终止符
//#define N 20
//
//typedef struct Shangpin
//{
//    char name[MAX_NAME_LENGTH];
//    double price;
//    int kg;
//} Shangpin;
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    Shangpin maxProduct;
//    maxProduct.kg = 0;
//    maxProduct.price = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        Shangpin product;
//        scanf("%s %lf %d", product.name, &product.price, &product.kg);
//        if (product.kg > maxProduct.kg || (product.kg == maxProduct.kg && product.price > maxProduct.price))
//        {
//            maxProduct = product;
//        }
//    }
//    printf("%s %.2lf %d\n", maxProduct.name, maxProduct.price, maxProduct.kg);
//
//    return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//
//	//int(*p)[10] = &arr;
//
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(*p + i));//“p”代表着整个数组的地址(是整个数组),而“*p”就是数组名的地址,
//	//	//数组名又是数组首元素的地址,所以*p本质上是数组首元素的地址,也就是说还要再对“*p”解引用一次才能得到数组中放的数字.
//	//}
//	return 0;
//}


//void print(int (*p)[5], int r, int c)  //这里的p传递过去的是首元素的地址,但是因为这是一个二维数组,所以这里的i+1代表着将[3]中的地址向下找一个
//									   //所以这里还要加上“j”这个变量.(这个变量的意义就是将[5]中的地址找到!
//	//这里我传递过去的是一个“一维数组“(整个)的地址,然后我想要的是接收这个地址,
//	//p指向的是一个“一维数组”,所以(p + 1)就是跳过了一个“一维数组”.
//
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0; 
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));          //*(p + 1)
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//将一维数组的5个地址放到一个指向一维数组的5个地址的指针中去
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//	return 0;
//}


//int main()
//{
//	int arr[3] = { 1,2,3 };
//	//int* p = arr;      //这里的“p”存放的是“数组首地址”,所以可以直接用*(p + i)进行访问
//	int (*p)[3] = &arr;  //这里的“p”存放的是“整个数组的地址”,所以要用*p先访问整个数组的地(里面的就是数组的首地址),然后再用“*p + i访问下一个地址
//	                     //最后用*(*p + i)间接访问地址中的位置!
//
//	for (int i = 0; i < 3; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(*p + i));
//		printf("%p ", p);  //从这里也可以看出来,p中存放是“三个地址”
//	}
//	return 0;
//}

////都是可以的!
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}