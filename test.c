#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

       
////int main()                                                                                       
////{
////	int num1 = 0;
////	int num2 = 0;
////	int num3 = 0;
////	scanf("%d %d %d", &num1, &num2, &num3);
////	int sum = num1 + num2 + num3;
////	printf("%d\n", sum);
////
////	return 0;
////}
//
////extern int a;
////
////int main()
////{
////	{
////		printf("a=%d\n", a);
////
////	}
////	printf("a=%d\n", a);
////
////	return 0;
////}
//   
////const����
////int main()
////{
////	const int a = 10;
////	a = 20;
////	printf("a=%d", a);
////
////	return 0;
////
//// 
//// }
////
////int main()
////{
////	char arr[10] = "abcdefg";
////	printf("%s\n", arr);
////	return 0;
////}
////
//
////
////#include<stdio.h> 
////int main()
////{
////    printf("%zu ", sizeof(double));
////    printf("%zu ", sizeof(long double));
////    printf("%zu ", sizeof(long long));
////    printf("%zu ", sizeof(3.14F));
////    printf("%zu ", sizeof(3.14));
////    printf("%zu ", sizeof(521));
////    printf("%zu", sizeof(521LL));
////    return 0;
////}
//
//
//
////#include<stdio.h>
////int main()
////{
////    printf("%zu ", sizeof(long double));
////    printf("%zu ", sizeof(3.14L));
////    printf("%zu ", sizeof(314LL));
////    return 0;
////}
//
//
////#include<stdio.h>
////int main()
////{
////    printf("%d,%o,%x\n", 2049, 2049, 2049);
////    printf("12.566371");
////    printf("��ѧϰ�ҿ���");
////
////    return 0;
////}
////int main()
////{
////	int input = 0;
////	printf("�������\n");
////	printf("Ҫ�ú�ѧϰ��(1/0)?");
////	scanf("%d", &input);
////
////	if (input == 1)
////	{
////		printf("��offer\n");
////	}
////	else
////	{
////		printf("������\n");
////	}
////	return 0;
////}
//
////int main()
////{
////	int ling = 0;
////	printf("�������\n");
////	                                                                  //������Ӧ����û������ģ��������ֻ��һ�����֣��κ���ʽ�����Խ��в���һ����Ч��
////	//while (ling < 20000)                                                �ͱ�����ֱ�ӽ���line���ĳ��ˡ�ling��������Ȼ�������е�
////                                                                      ���ԡ�int�����õĿռ䣬����Ҫ����Ϊ�����������Ŀռ䡱ȥһ�����֣�
////	{                                                                   ������־��ǡ�line�����͵Ķ���
////		printf("д����:%d\n", ling);
////		ling++;
////	}
////
////	if (ling >= 20000)
////	{
////		printf("��offer\n");
////	}
////	else
////	{
////		printf("��������\n");
////	}
////	return 0;

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//                                                         
//int main()
//{
//	int n1 = 0;                                   
//	int n2 = 0;                       
//	int sum = 0;
//	scanf("%d %d", &n1, &n2);               
//	sum = Add(n1, n2);
//	printf("%d\n", sum);
//	return 0;
//

//int main()
//{                                          ���ǹ涨����C�����г��ˡ�0��������κ����ֶ��ǡ���ġ�
//	int flag = 0;                            ������߼��ϵ�һ������ �����������ǽ������ת����
//		                                     ������ߵġ����ӡ������flag��0�������ڡ������������±������ģ����Կ��������hehe��
//		                                     �෴������ʼ����ģ���ô�������Ͳ��������hehe��
//	if (!flag)
//	{
//		printf("hehe\n");               
//	}
//	return 0;
//}
//

//int main()
//{
//	int a = 100;
//	printf("%d", sizeof(a));
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));                           ��ʱ��������arr�����������ͳ���
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));                                   //��������������Ĵ�С
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));             //�������������Ԫ�ظ����������������顱���ԡ��������顱�Ľ�����������Ԫ�ظ���
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	                                 int b = a++;//����++����ʹ�ã���++
//	                              //����ʽ�ӵ���˼���ȸ���b��һ��ֵ��a����Ȼ�����á�a����1��
//	//int b = a ��a=a+1
//
//	printf(" %d\n", b);
//	printf(" %d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;  //ǰ�õ���˼�ǡ���++����ʹ�á����������á�a������1��Ȼ���á�b=a��
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 3.14;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a = 34444)                                           //ע�⣺��ʱ��a���ǡ���ġ����У���=����ֻ�ж����
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	if (a == 9)                                        //���ʱ��ֻ�����롰==�������жϡ������񡱵���ȷ���š�
//	{                                                   //!=�͡�==�����÷���һ���ġ�
//		printf("hehe\n");
//	}
//
//	return 0;
//}
 
//int main()
//{
//	int a = 0;
//	int b = 20;
//	if (a || b)
//	{                        //&& ����������˼�ǡ�a��b��ͬʱΪ����ġ���ʱ����ܽ��д�ӡ��
//		                     //||����������˼�ǡ�a����b�����㡰��ġ���ʱ��Ϳ��Խ��д�ӡ
//		printf("hehe\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	return 0;
//
//}
//int main()
//{
//	int a, b, c;
//    float  d;
//	scanf("%d\n", &a);
//	scanf("%d", &b);
//	c = a + b;
//	d = (a + b) / 2;
//	printf("%d\n", c);
//	printf("%.1f", d);
//	return 0;
//}
//
//int main()
//{
//	int a = 4;
//	int b = 2;
//	int r = a < b ? a : b;
//	printf("%d\n", r);
//	return 0;
//}


//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
// ���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��(����ǰ��ͺ�����û���κι�ϵ��

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 4;
//	int d = (a - b, a + c, a + b);
//	printf("%d\n", d);
//
//	return 0;
////}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr[3]; //[]�����±����ò����� ,arr��3���ǡ����Ĳ�����
//	return 0;
//}
 


//int Add (int x, int y)
//{
//	return x+y;
//}
//int main()                            ���ǿ������ú���������ʽ��Ӧ����
//{
//	int sum = Add(2, 3);          ��ʱ�򣬣������Ǻ������ò�������Add��2,3���ǣ����Ĳ�����
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	double a, b;
//	scanf("%lf %lf", &a,& b);
//	double n;
//	n = (a * b) * (1 - 0.15);
//	printf("%.2lf", n);
//	return 0;
//}
//int main()
//{
//  printf("%d\n", 100);
//
//  return 0;
//}



//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n >= 2001 && n <= 2100)
//    {
//        int zhenshi = 0;
//        int i;
//        for (i = 2001; i <= n; i++)
//        {
//            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//            {
//                printf("%d\n", i); zhenshi++;
//            }
//        }
//
//        if (zhenshi == 0) 
//            printf("None\n");
//    }
//    else
//        printf("Invalid year!\n");
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a;
//	double cost = 0;
//	scanf("%d", &a);
//	if (a < 0) {
//		printf("Invalid Value!");
//	}
//	else if (0 <= a && a <= 50) {
//		cost = a * 0.53;
//		printf("cost = %.2f", cost);
//	}
//	else if (a > 50) {
//		cost = 50 * 0.53 + (a - 50) * 0.58;
//		printf("cost = %.2f", cost);
//	}
//
//	return 0;
//}

//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//    int a, b, c;
//    float l,s;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        l = (a + b + c) / 2.0;
//        s = sqrt(l * (l - a) * (l - b) * (l - c));
//        printf("%.3f", s);
//    }
//    else
//        printf("NO");
//    return 0;
//}

//#define ADD(x,y) ((x)+(y))
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = ADD(a, b);
//    printf("%d\n", c);
//
//    return 0;
//}








//ѭ������ѧϰ ��if��䣩

//int main()
//{
//    if (3 == 2)
//    printf("zhenshidhaugnyan\n");
//    return 0;
//}

//int main()
//{
//    int age = 5;
//    if (age > 18)
//        printf("����\n");
//    else
//        printf("δ����\n");
//
//    return 0;
//}
//
//int main()
//{
//    int good;
//    scanf("%d", &good);
//    if (good < 5)
//    {
//        printf("���õ�δ��\n");
//        printf("����������\n");
//       
//        if (good < 5 && good > 3)
//            printf("�ҵ���");
//        else
//            printf("uyuyyyuyyuyuy");
//    }
//    else if (good < 100 && good>=5)
//        printf("zhesnhidzi\n");
//    else
//        printf("ʧ�ܵ�����\n");
//    return 0;
//}

//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a % 2 == 1)
//        printf("����");
//    else
//        printf("ż��");
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    while (a <= 100)
//    {
//        if (a % 2 == 1)
//            printf("%d ", a);
//        a++;
//    }
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 0)
//        a = a;
//    else
//        a = -a;
//    printf("%d", a);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//        if (a % 2 == 1)
//            printf("Odd");
//        else
//            printf("Even");
//    return 0;
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a > 0)
//        printf("+");
//    if (a < 0)
//        printf("-");
//    if (0 == a)
//        printf("0");
//    return 0;
//}

//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
//            printf("Right triangle");
//
//        else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
//            printf("Obtuse triangle");
//        else if (a * a + b * b > c * c || a * a + c * c > b * b || c * c + b * b > a * a)
//            printf("Acute triangle");
//    }
//    else
//        printf("Not triangle");
//    return 0;
//}

//int main()
//{
//    double a, b;
//    scanf("%lf", &a);
//    if (a <= 5)
//        b = a * 1.8;
//    else if (a >= 5 && a < 10)
//        b = a * 1.6;
//    else if (a >= 10 && a < 20)
//        b = a * 1.4;
//    else if (a >= 20)
//        b = a * 1.0;
//    printf("%lf", b);
//    return 0;
//}


//#include<math.h>
//int main()
//{
//    int a, b, c, d, t;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    if (a > b)
//    {
//        t = a;
//        a = b;
//        b = t;
//    }
//    if (b > c)
//    {
//        t = b;
//        b = c;
//        c = t;
//    }
//    if (c > d)
//    {
//        t = c;
//        c = d;
//        d = t;
//    }
//    if (a > d)
//    {
//        t = a;
//        a = d;
//        d = t;
//    }
//    if (a > c)
//    {
//        t = a;
//        a = c;
//        c = t;
//    }
//    if (b > d)
//    {
//        t = b;
//        b = c;
//        c = t;
//    }
//    printf("%d %d %d %d", a, b, c, d);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
//            printf("Right triangle");
//        else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
//            printf("Obtuse triangle");
//        else if (a * a + b * b > c * c || a * a + c * c > b * b || c * c + b * b > a * a)
//            printf("Acute triangle");
//    }
//    else
//        printf("Not triangle");
//    return 0;
//}
//int main()
//{
//    char s;
//    scanf("%c", &s);
//    switch (s)
//    {
//    case 'A': printf("[90-100]"); break;
//    case 'B': printf("[80-90)");  break;
//    case 'C': printf("[70-80)");  break;
//    case 'D': printf("[60-70)");  break;
//    case 'E': printf("[0-60)");   break;
//    default:  printf("Error!");
//    }
//    return 0;
//}

//int main()
//{
//    float a, b, c;
//    float x1, x2, d;
//    scanf("%f %f %f", &a, &b, &c);
//    d = b * b - 4 * a * c;
//    if (d > 0)
//    {
//        x1 = (-b + sqrt(d) / (2 * a));
//        x2 = (-b - sqrt(d) / (2 * a));
//        printf("x1 = %f, x2 = %f", x1, x2);
//    }
//    else
//    {
//        printf("This equation has no real root!");
//    }
//      return 0;
//}
//#include <math.h> 
//int main()
//{
//    double a, b, c;
//    double x1, x2, d;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    d = b * b - 4 * a * c;
//    if (d >= 0.0)
//    {
//        x1 = (-b + sqrt(d)) / (2 * a);
//        x2 = (-b - sqrt(d)) / (2 * a);
//        printf("x1 = %lf\nx2 = %lf\n", x1, x2);
//    }
//    else
//    {
//        printf("This equation has no real root!");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    if (a >= 37.0)
//    {
//        printf("have a fever\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;


//int main()
//{
//	int a, b, i;
//	i = scanf("%d %d", &a, &b);
//	if (i == 1)
//		printf("%d", a * a);
//	else if (i == 2)
//		printf("%d", a * b);
//}

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        printf("%d \n", i);
//        printf("hehe\n");
//    }
//    return 0;
//}

//int main()
//{
//    char c1 = 'A', c2 = 66;
//    int c3 = '\103', c4;
//    c4 = c3 + 1;
//    putchar(c1); putchar(c2);
//    putchar('\n');
//    putchar(c3); putchar(c4);
//    putchar('\n');
//    return 0;
//}
//
//
//
//int main()
//{
//    char ch;
//    ch = getchar();
//    putchar(ch);
//    return 0;
//}
//#include<math.h>
//int main()
//{
//    float a, b, c, s, d, f;
//    printf("Enter 3 sides:\n");
//    scanf("%f %f %f", &a, &b, &c);
//    if (a + b > c && b + c > a && a + c > b)
//    {
//        s = (a + b + c) / 2;
//        d = a + b + c;
//        f = sqrt(s * (s - a) * (s - b) * (s - c));
//        printf("area=%.2f;perimeter=%.2f", f, d);
//    }
//    else
//    {
//        printf("It is not a triangle!");
//    }
//    return 0;
//}

//int main() 
//{
//    int weight;
//    double money;
//
//    scanf("%d", &weight);
//
//    if (weight <= 5) 
//    {
//        money = weight * 3.2;
//    }
//    else if (weight <= 10 && weight > 5) 
//    {
//        money = weight * 3.2 * 0.7;
//    }
//    else 
//    {
//        money = weight * 3.2 * 0.5;  
//    }
//    printf("money=%.1f\n", money);
//
//    return 0;
//}

//int main()
//{
//    char a = 'A';
//    printf("%c\n", a);
//   //�ò�ͬ�ġ�ת���ַ�������Ķ���Ҳ�ǲ�ͬ�ģ���Ϊ�ַ����յĶ������ǡ����Ρ������á�%d���ͻ�������������Ρ��á�%c���ͻ������ASCII���е��ַ���
//    //����ֻ��д����ȷ�ġ��Ϳ����ˣ�����ȥд����û��ʲô����İ����Ĵ��롣
//    char b = 'B';
//        printf("%d", b);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float grade;
//    int score;
//
//    if (grade > 100 || grade < 0) {
//        printf("����ĳɼ���Ч��������0-100֮�����ֵ��\n");
//        return 0;
//    }
//    if (grade >= 90 && grade <= 100) {
//        score = 4;
//    }
//    else if (grade >= 80 && grade < 90) {
//        score = 3;
//    }
//    else if (grade >= 70 && grade < 80) {
//        score = 2;
//    }
//    else if (grade >= 60 && grade < 70) {
//        score = 1;
//    }
//    else if (grade >= 0 && grade < 60) {
//        score = 0;
//    }
//    printf("score=%d", score);
//    return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//    long num;
//    long sum = 0;      
//    int status;
//
//    printf("Please enter an integer to be summed ");
//    printf("(q to quit): ");
//    status = scanf("%ld", &num);
//    while (status == 1) 
//    {
//        sum = sum + num;
//        printf("Please enter next integer (q to quit): ");
//        status = scanf("%d", &num);
//    }
//    printf("Those integers sum to %ld.\n", sum);
//
//    return 0;
//}

//int main()
//{
//        int a, b, c;
//        scanf("%d %d", &a, &b);
//        if (a != 0)
//            printf("%d%d", a, b);   //�����á����ı�����ʽ�����ˣ��������õ�������Ӽ���������ԭ���ķ�ʽֱ����������ǼӼ��ķ�ʽ
//        else if (a == 0)
//            printf("%d", b);
//
//        return 0;
//
//}


//int main()
//{
//    float x = 0, y = 0;
//    scanf("%f", &x);
//    if (x >= 1 && x < 2)
//        y = 3 * x + 5;
//    else if (x >= 2 && x < 3)
//        y = 2 * sin(x) - 1;
//    else if (x >= 3 && x < 4)
//        y = sqrt(1 + x * x);
//    else if (x >= 4 && x < 5)
//        y = x * x - 2 * x + 5;
//    else if(x < 1 || x >= 5)
//        printf("No define!");
//    printf("%f", y);
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 90 && a < 100)
//        printf("A");
//    else if (a >= 80 && a < 90)
//        printf("B");
//    else if (a >= 70 && a < 80)
//        printf("C");
//    else if (a >= 60 && a < 70)
//        printf("D");
//    else if (a >= 0 && a < 60)
//        printf("E");
//    else
//        printf("X");
//    return 0;
//}

// 
// 
//���ƺŵ���Ŀ��
//#include<stdio.h>
//int main()
//{
//    char a[15][100] =
//    {
//        "Haerbin",
//        "Qiqihaer",
//        "Mudanjiang",
//        "Jiamusi",
//        "Daqing",
//        "Yichun",
//        "Jixi",
//        "Hegang",
//        "Shuangyashan",
//        "Qitaihe",
//        "Songhuajiangdiqu",
//        "Suihuashi",
//        "Heiheshi",
//        "Daxinganlingdiqu",
//        "Nongkenxitong",
//    };
//    char c;
//    int i;
//    scanf("--%c", &c);
//    i = c - 'a';
//    if (i >= 0 && i <= 14)
//    {
//        printf("%s", a[i]);
//    }
//    else
//    {
//        printf("Noname");
//    }
//}

//int main()
//{
//    float w, h, t;
//    scanf("%f %f", &w, &h); //scanf������
//    t = w / (h * h);
//    printf("t=%.2f\n", t);
//    return 0;
//}


//�Լ�д�Ĵ��룬�����Ŀ�ǽ����������㣨�������������е��ǲ��ԣ�
//int main()
//{
//    int a = 0, b = 0, c = 0;                    
//    if (scanf("%d+%d", &a, &b))
//    {
//        c = a + b;
//        printf("%d+%d=%d", a, b, c);
//    }
//    else if (scanf("%d-%d", &a, &b))
//    {
//        c = a - b;
//        printf("%d-%d=%d", a, b, c);
//    }
//    else if (scanf("%d*%d", &a, &b))
//    {
//        c = a * b;
//        printf("%d*%d=%d", a, b, c);
//    }
//    else if (scanf("%d/%d", &a, &b))
//    {
//        c = a / b;
//        printf("%d/%d=%d", a, b, c);
//    }
//    else if (scanf("%d/%d", &a, &b))
//    {
//        b == 0;
//        printf("Illegal operation");
//    }
//
//    return 0;
//}


//����д�Ĵ��룬����֮��о�����Щ�ջ�ģ�����д��Ҫ�úܶ�ܶࡣ
//int main() {
//    int a, b, c, d;
//    char f;                                //f��ʾ����
//    int s;                                 //s��ʾ�����
//    printf("�������һ��a+b��ʽ����������");
//    scanf("%d%c%d", &a, &f, &b);              //�������ݣ�
//    if (f == '/' && b == 0)printf("�Ƿ�����������Ϊ 0��");
//    switch (f)
//    {
//    case '+':s = a + b; break;
//    case '-':s = a - b; break;
//    case '*':s = a * b; break;
//    case '/':s = a / b; break;
//    default:printf("�Ƿ�������");
//    }
//    printf("���ǣ�");
//    printf("%d%c%d=%d", a, f, b, s);
//}


//��һ�ִ�ӡ1����100�Ĵ���д��
//int main()
//{
//    int a = 1;
//    while (a <= 100)
//    {
//        if (a % 2 == 1)
//        {
//            printf("%d \n", a);
//        }
//        a++;
//    }
//
//    return 0;
//}


////�ڶ��ִ�ӡ1����100�Ĵ���д��
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        printf("%d ", i);
//        i += 2;
//    }
//    return; 0;
//}