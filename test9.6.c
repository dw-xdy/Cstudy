#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


//int main()
//{
//	int a[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int (*p)[5];//这个的意义是：将“p”指向一个长度为“5”的数组!
//	return 0;
//}

//指针是很难的一个章节,但是也是我必须要学会的一个章节,今天至少要将C语言鹏哥和CSDN上的文章看完了才行


//int main()
//{
//	int (*p)[10];//p是一个指向int类型的大小为10个int类型的指针.
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int (*pf)(int, int) = &Add;  //pf中存放的是函数Add的地址
//	
//	int ret = Add(2, 3); //这两种写法都是一样的!
//
//	int ret = pf(2, 3);
//
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	printf("%d\n", p);
//	printf("%p", p);
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int (*pa)[5] = &arr;   //这里是数组指针,pa中存放的是数组arr的地址,只不过表现出来的是这个数组首元素的地址.
//						   //然后*pa是数组整个的地址,然后继续对其进行*操作,才能访问数组的元素!
//	
//	printf("%p\n", pa);
//
//	return 0;
//}

//int main()
//{
//	char* arr2[6];
//	char* (*p3)[6] = &arr2; //先用p3存放数组的地址,然后再确认数组有几个元素,最后确定存放点是什么类型.
//		                    //在这里,p3是一个指向char*类型的数组的指针,数组的元素个数为6.
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pf[4])(int, int) = { &Add, &Sub, &Mul, &Div }; //pf是一个函数指针数组,存放了四个函数的地址.
//	return 0;
//}

//void bubbleSort(int arr[], int sz)
//{
//	int i, j, temp;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 5, 2, 8, 3, 9, 1, 7, 4, 6, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //数组的大小
//	int i;
//
//	bubbleSort(arr, sz); //调用排序函数
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";//其中的空格也算一个字符!
//	char arr[] = { 'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd' };
//
//	int len = strlen(arr);
//	printf("%d\n", len);  //打印出来是11.
//	return 0;
//}




//模拟实现strlen函数
//1. 第一种方式：计数器方式
//size_t my_strlen(const char* str)  //用指针变量接受第一个数组元素的地址,然后用指针运算符++来遍历整个字符串.
//{                       
//	int count = 0;
//	while (*str++ != '\0') //从这里再理解一下指针,
//	{
//		count++;
//	}
//	return count;
//}

//2. 第二种方式：不能创建临时变量计数器,递归方式
//size_t my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}


//3. 第三种方式：利用sizeof()函数(不能用sizeof(str)来计算字符串的长度)
//size_t my_strlen(const char* str)
//{
//	return sizeof(str) - 1; //注意：这里是不对的,因为sizeof是计算了指针的大小,不是字符串的大小.指针的大小是固定的!
//}


//size_t my_strlen(char* s) //s中存放的是字符串首元素的地址,
//{
//	char* p = s; //p中存存放的是字符串首元素的地址,  这里容易让人混淆,注意辨别!
//	while (*p != '\0')
//		p++;             //地址走向下一个!
//	//printf("%p\n", s); //这里的s是一个指针,指向字符串的首元素的地址.
//	//printf("%p\n", p); //这里的p是一个指针,指向字符串的最后一个元素的地址.
//	return p - s; //返回字符串的长度,也就是指针p指向的地址与字符串首元素的地址的差值. s的地址没有改变.
//}
//int main()
//{
//	char arr[] = "hello world";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	//printf("%d\n", sizeof(arr));  //sizeof 计算出来的结果是12,因为数组的最后一个元素是空格,所以sizeof计算出来的结果比实际的字符个数多1.
//	return 0;
//}




/*总的来说：指针方面的东西还是要多加练习, 最好是找一些文章和相关的题目进行练习
* 然后最好是找一些书籍来阅读, 然后是跟着老师写代码,而且每个代码都要自己写出来
* 而且一定要好好理解思考,反正有这个AI,而且用起来还是很好的!给了我很大的帮助!
* 加油!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/


//int main()
//{
//	//char name[40] = "zhangsan";
//	//printf("%s\n", name); //输出: zhangsan
//
//	char name[20] = { 0 };
//	strcpy(name, "zhangsan");   //函数的作用是将字符串拷贝到数组中,这里的strcpy函数是用来拷贝字符串的.
//	printf("%s\n", name); //输出: zhangsan
//	//strcpy函数会将"\0”也拷贝到数组中,而且遇到了"\0”就停止拷贝.所以要注意,而且要注意不能拷贝没有结束的字符串.
//	//比如：
//	char arr[3] = {'b', 'a', 'd' };
//
//	strcpy(name, arr); //这样是不行的,因为arr中没有结束的字符串,所以会导致数组越界.
//	
//	return 0;
//}


//int main()
//{
//	char* p = "hello world";   //p中存放的是字符串首元素的地址,  这里容易让人混淆,注意辨别!
//	printf("%s\n", p); //输出: hello world
//	return 0;
//}


//数组方式实现strcpy函数
//void my_strcpy(char* dst, const char* src)
//{
//	int i = 0;
//	while (src[i] != '\0')
//	{
//		dst[i] = src[i];
//		i++;
//	}
//}

//指针方式实现strcpy函数
//void my_strcpy(char* dst, const char* src)
//{
//	while ((*dst++ = *src++));
//}
//
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);  
//	printf("%s\n", arr2);
//	return 0;
//}

//char* my_strcat(char* dst, const char* src)
//{
//	char* ret = dst;
//	assert(dst != NULL && src != NULL);
//	while (*dst != '\0')        //先找到字符串的结尾,然后再拷贝新的字符串. 
//	{
//		dst++;
//	}
//	while ((*dst++ = *src++));  //拷贝新的字符串.
//	return ret;
//}
//
//
//int main()
//{
//	char arr[20] = "hello";
//	//char arr2[] = " world";
//
//	my_strcat(arr, " world");
//	printf("%s\n", arr); //输出: helloworld
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	while (*str1++ == *str2++)
//	{
//		if(*str1 == '\0')
//			return 0;
//	}
//	return *str1 - *str2;   //这里比较的是ASCII码值,比较的是字符的差值!
//}
//
//int main()
//{
//	char arr1[] = "zhangsan";    //strcmp函数比较的是字符串的"ASCII"码值,比较的不是字符串的长度!
//	char arr2[] = "zisi";
//
//	int ret = my_strcmp(arr1, arr2); //strcmp函数用来比较两个字符串是否相等,返回值是0表示相等,返回值是负数表示arr1<arr2,
//								  //返回值是正数表示arr1>arr2.
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}




//int main()
//{
//	char arr1[100] = "zhenshidehuangyan";
//	char arr2[] = "hello world";
//
//	strcpy(arr1, arr2);   //调用函数,将arr2的内容拷贝到arr1中.  而且会将原来的arr1中的内容清空!
//	printf("%s\n", arr1); 
//	return 0;
//}

//int main()
//{
//	char arr1[100] = "zhenshidehuangyan";
//	char arr2[] = "hello world";
//
//	strncpy(arr1, arr2, 5);   //调用函数,将arr2的前5个字符拷贝到arr1中.  而且不会将原来的arr1中的内容清空!
//	printf("%s\n", arr1); 
//	return 0;
//}


//int main()
//{
//	char arr1[100] = "zhenshidehuangyan";
//	char arr2[] = "hello world";
//
//	strncat(arr1, arr2, 5); //最后会自动加上一个\0
//	printf("%s\n", arr1); //输出: zhenshidehuangyanhello
//	return 0;
//}


//int main()
//{
//	char email[] = "3115708251@qq.com";
//	char substring[] = "qq.com";
//	char* p = strstr(email, substring); //查找子串在字符串中的位置,返回子串首元素的地址.
//	if (p != NULL)
//	{
//		printf("%s\n", p);
//	}
//	else
//	{
//		printf("not found\n");
//	}
//	return 0;
//}


//int main()
//{
//	const char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？
//	printf("%s\n", pstr);  //这里的“pstr”是个“常量”是不能更改的！但是我们将其放到了指针中，所以我们要在“指针类型”之前加上“const”。
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit.";
//	printf("%s\n", str);
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = s1;
//	while (*s1 != '\0')
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//
//
//int main()
//{
//	char* str = "hello bit.";
//	char* str2 = "bit.";
//	char* p = my_strstr(str, str2); //查找子串在字符串中的位置,返回子串首元素的地址.
//	if (p != NULL)
//	{
//		printf("%s\n", p);
//	}
//	else
//	{
//		printf("not found\n");
//	}
//	return 0;
//}



//int main()
//{
//	double a = 3.1415926;
//	int b = (int)a; //将double类型转换为int类型,小数部分会被截断.
//	printf("%d\n", b); //输出: 3
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	int c = a >> 1;
//	printf("%d\n", b);
//	printf("%d", c);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	//临时拷贝过来的值：int x = 10. int y = 20;
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	
//	printf("%d", ret);
//	return 0;
//}



//int main() 
//{
//    int rows, coef = 1;
//
//    scanf("%d", &rows);
//
//    for (int i = 0; i < rows; i++) 
//    {
//        for (int space = 1; space <= rows - i; space++)
//        {
//            printf("  ");  // 打印空格
//        }
//
//        for (int j = 0; j <= i; j++) 
//        {
//            if (j == 0 || i == 0)
//            {
//                coef = 1;
//            }
//            else 
//            {
//                coef = coef * (i - j + 1) / j;
//            }
//
//            printf("%4d", coef);  // 输出系数
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//// 函数：交换数组arr中下标为i和j位置的元素
//void swap(int arr[], int i, int j) {
//    int tmp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = tmp;
//}
//
//// 选择排序
//void selectionSort(int arr[], int size) {
//    if (arr == NULL || size < 2) {
//        return;
//    }
//    for (int i = 0; i < size - 1; i++) {
//        int minIndex = i;
//        for (int j = i + 1; j < size; j++) {
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;
//            }
//        }
//        swap(arr, i, minIndex);
//    }
//}
//
//// 冒泡排序
//void bubbleSort(int arr[], int size) {
//    if (arr == NULL || size < 2) {
//        return;
//    }
//    for (int end = size - 1; end > 0; end--) {
//        for (int i = 0; i < end; i++) {
//            if (arr[i] > arr[i + 1]) {
//                swap(arr, i, i + 1);
//            }
//        }
//    }
//}
//
//// 插入排序
//void insertionSort(int arr[], int size) {
//    if (arr == NULL || size < 2) {
//        return;
//    }
//    for (int i = 1; i < size; i++) {
//        for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--) {
//            swap(arr, j, j + 1);
//        }
//    }
//}

//#define N 100
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
//	Student stu[N];
//	int i;
//	int m = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].pro1, &stu[i].pro2, &stu[i].pro3);
//		stu[i].all = stu[i].pro1 + stu[i].pro2 + stu[i].pro3;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		if (stu[i].all > stu[m].all)
//			m = i;
//	}
//
//	printf("%s %s %d", stu[m].name, stu[m].id, stu[m].all);
//	return 0;
//}





//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p", &ch);
//
//	char* pa = "abcdef";//将字符串首地址放到指针“pa”中了!
//	printf("%s", pa);
//	return 0;
//}


//#include <string.h>
//
//int main()
//{
//    char* color[5] = { "red", "blue", "yellow", "green", "black" };
//    int i;
//    char c[20];
//    int flag = 0;
//    gets(c);
//
//    for (i = 0; i < 5; i++)
//    {
//        if (strcmp(c, color[i]) == 0)
//        {
//            printf("%d", i + 1);
//            flag = 1;
//            break;
//        }
//    }
//    if (!flag)
//        printf("Not Found");
//
//    return 0;
//}


//int main()
//{
//	char* arr[] = { "ren", "zhesnhi", "zhenshifejin" }; 
//	//用指针数组进行定义“字符串”这个是一个很好的进行定义的方式],可以节省代码长度
//	//平时定义一个“字符串”需要用“数组或者字符串指针”的方式进行定义声明,这样会有点麻烦!所以用这种“指针数组”的方式进行定义会很方便!
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char* pa = "12345678621";
//	printf("%s", pa);
//	return 0;
//}

//int main()
//{
//	unsigned long long a = 12345678621;
//	double a = (double)12345678621;
//	printf("%lf", a);
//	return 0;
//}



//int main()
//{
//	int ma = 23456;
//	printf("%d", ma);
//	return 0;
//}

//void swap(int* a, int* b)
//{
//	int c = *a;
//	*a = *b;  //很多东西还是要理解了其中的原理之后再进行应用, 不然自己都理解不了, 只是凭借死记硬背才做是不行的!
//	*b = c;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换之前：%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换之后：%d %d", a, b);
//
//	return 0;
//}




// arr[l....r]范围上的最大值
//int f(int arr[], int l, int r) 
//{
//    if (l == r)
//    {
//        return arr[l];
//    }
//    int m = (l + r) / 2;
//    int lmax = f(arr, l, m);
//    int rmax = f(arr, m + 1, r);
//    return (lmax > rmax) ? lmax : rmax;
//}
//
//int maxValue(int arr[], int size)
//{
//    return f(arr, 0, size - 1);
//}
//
//int main()
//{
//    int arr[] = { 3, 8, 7, 6, 4, 5, 1, 2 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("数组最大值 : %d\n", maxValue(arr, size));
//    return 0;
//}


//int main()
//{
//	int m = 100;
//	int n = 1000;
//	int i = 0, j = 0;
//
//	for (i = m; i < n; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int factorial(int n) {
//    // 基本情况，当 n 等于 0 或 1 时，阶乘为 1
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    // 递归情况，n 的阶乘等于 n 乘以 (n-1) 的阶乘
//    else {
//        return n * factorial(n - 1);
//    }
//}
//
//int main() {
//    int num = 5;  // 要计算阶乘的数字
//    int result = factorial(num);
//    printf("阶乘结果：%d\n", result);
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d", !a);
//	return 0;
//}


