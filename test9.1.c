#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
//		p++;
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












