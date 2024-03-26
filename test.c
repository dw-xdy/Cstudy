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
////const常量
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
////    printf("我学习我快乐");
////
////    return 0;
////}
////int main()
////{
////	int input = 0;
////	printf("加入比特\n");
////	printf("要好好学习吗(1/0)?");
////	scanf("%d", &input);
////
////	if (input == 1)
////	{
////		printf("好offer\n");
////	}
////	else
////	{
////		printf("卖红薯\n");
////	}
////	return 0;
////}
//
////int main()
////{
////	int ling = 0;
////	printf("加入比特\n");
////	                                                                  //我理解的应该是没有问题的，这个函数只是一个名字，任何形式都可以进行产生一样的效果
////	//while (ling < 20000)                                                就比如我直接将“line”改成了“ling”但是依然是能运行的
////                                                                      所以“int”借用的空间，我需要的是为这个“借出来的空间”去一个名字，
////	{                                                                   这个名字就是“line”类型的东西
////		printf("写代码:%d\n", ling);
////		ling++;
////	}
////
////	if (ling >= 20000)
////	{
////		printf("好offer\n");
////	}
////	else
////	{
////		printf("继续加油\n");
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
//{                                          我们规定，在C语言中除了“0”以外的任何数字都是“真的”
//	int flag = 0;                            这个是逻辑上的一个问题 “！”作用是将“真假转换”
//		                                     按照左边的“例子”，如果flag是0，但是在“！”的作用下变成了真的，所以可以输出“hehe”
//		                                     相反，如果最开始是真的，那么接下来就不会输出“hehe”
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
//	printf("%d\n", sizeof(arr));                           这时候计算的是arr这个数组的类型长度
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));                                   //计算的是真个数组的大小
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));             //可以用来数组的元素个数，将“整个数组”除以“单个数组”的结果就是数组的元素个数
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	                                 int b = a++;//后置++，先使用，后++
//	                              //上面式子的意思是先给“b”一个值“a”，然后再让“a加上1”
//	//int b = a ；a=a+1
//
//	printf(" %d\n", b);
//	printf(" %d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;  //前置的意思是“先++，后使用”，就是先让“a”加上1，然后让“b=a”
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
//	if (a = 34444)                                           //注意：这时候“a”是“真的”就行，“=”号只判断真假
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	if (a == 9)                                        //这个时候只有输入“==”才是判断“相等与否”的正确符号。
//	{                                                   //!=和“==”的用法是一样的。
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
//	{                        //&& 这个代码的意思是“a和b”同时为“真的”的时候才能进行打印。
//		                     //||这个代码的意思是“a或者b”满足“真的”的时候就可以进行打印
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


//逗号表达式就是逗号隔开的一串表达式
// 逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果(不管前面和后面有没有任何关系）

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
//	arr[3]; //[]就是下标引用操作符 ,arr和3就是【】的操作数
//	return 0;
//}
 


//int Add (int x, int y)
//{
//	return x+y;
//}
//int main()                            这是可以利用函数的最简格式了应该是
//{
//	int sum = Add(2, 3);          这时候，（）就是函数调用操作符，Add，2,3都是（）的操作数
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








//循环语句的学习 （if语句）

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
//        printf("成年\n");
//    else
//        printf("未成年\n");
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
//        printf("美好的未来\n");
//        printf("纯净的内心\n");
//       
//        if (good < 5 && good > 3)
//            printf("我的心");
//        else
//            printf("uyuyyyuyyuyuy");
//    }
//    else if (good < 100 && good>=5)
//        printf("zhesnhidzi\n");
//    else
//        printf("失败的人生\n");
//    return 0;
//}

//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a % 2 == 1)
//        printf("奇数");
//    else
//        printf("偶数");
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
//   //用不同的“转换字符”输出的东西也是不同的，因为字符最终的东西还是“整形”所以用“%d”就会输出“数字整形”用“%c”就会输出“ASCII表”中的字符。
//    //我们只用写“正确的”就可以了，不用去写那种没有什么意义的半错误的代码。
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
//        printf("输入的成绩无效，请输入0-100之间的数值。\n");
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
//            printf("%d%d", a, b);   //这是用“纯文本”形式输入了，并不是用单纯的相加减，而是用原来的方式直接输出。不是加减的方式
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
//车牌号的题目。
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
//    scanf("%f %f", &w, &h); //scanf函数中
//    t = w / (h * h);
//    printf("t=%.2f\n", t);
//    return 0;
//}


//自己写的代码，这个题目是进行四则运算（这个代码可以运行但是不对）
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


//大佬写的代码，看了之后感觉是有些收获的，比我写的要好很多很多。
//int main() {
//    int a, b, c, d;
//    char f;                                //f表示符号
//    int s;                                 //s表示结果；
//    printf("随机输入一个a+b形式的四则运算");
//    scanf("%d%c%d", &a, &f, &b);              //读入数据；
//    if (f == '/' && b == 0)printf("非法操作，除数为 0！");
//    switch (f)
//    {
//    case '+':s = a + b; break;
//    case '-':s = a - b; break;
//    case '*':s = a * b; break;
//    case '/':s = a / b; break;
//    default:printf("非法操作符");
//    }
//    printf("答案是：");
//    printf("%d%c%d=%d", a, f, b, s);
//}


//第一种打印1——100的代码写法
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


////第二种打印1——100的代码写法
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