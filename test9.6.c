#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


//int main()
//{
//	int a[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int (*p)[5];//����������ǣ�����p��ָ��һ������Ϊ��5��������!
//	return 0;
//}

//ָ���Ǻ��ѵ�һ���½�,����Ҳ���ұ���Ҫѧ���һ���½�,��������Ҫ��C���������CSDN�ϵ����¿����˲���


//int main()
//{
//	int (*p)[10];//p��һ��ָ��int���͵Ĵ�СΪ10��int���͵�ָ��.
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
//	int (*pf)(int, int) = &Add;  //pf�д�ŵ��Ǻ���Add�ĵ�ַ
//	
//	int ret = Add(2, 3); //������д������һ����!
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

//����ָ��
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int (*pa)[5] = &arr;   //����������ָ��,pa�д�ŵ�������arr�ĵ�ַ,ֻ�������ֳ����������������Ԫ�صĵ�ַ.
//						   //Ȼ��*pa�����������ĵ�ַ,Ȼ������������*����,���ܷ��������Ԫ��!
//	
//	printf("%p\n", pa);
//
//	return 0;
//}

//int main()
//{
//	char* arr2[6];
//	char* (*p3)[6] = &arr2; //����p3�������ĵ�ַ,Ȼ����ȷ�������м���Ԫ��,���ȷ����ŵ���ʲô����.
//		                    //������,p3��һ��ָ��char*���͵������ָ��,�����Ԫ�ظ���Ϊ6.
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
//	int (*pf[4])(int, int) = { &Add, &Sub, &Mul, &Div }; //pf��һ������ָ������,������ĸ������ĵ�ַ.
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
//	int sz = sizeof(arr) / sizeof(arr[0]); //����Ĵ�С
//	int i;
//
//	bubbleSort(arr, sz); //����������
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";//���еĿո�Ҳ��һ���ַ�!
//	char arr[] = { 'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd' };
//
//	int len = strlen(arr);
//	printf("%d\n", len);  //��ӡ������11.
//	return 0;
//}




//ģ��ʵ��strlen����
//1. ��һ�ַ�ʽ����������ʽ
//size_t my_strlen(const char* str)  //��ָ��������ܵ�һ������Ԫ�صĵ�ַ,Ȼ����ָ�������++�����������ַ���.
//{                       
//	int count = 0;
//	while (*str++ != '\0') //�����������һ��ָ��,
//	{
//		count++;
//	}
//	return count;
//}

//2. �ڶ��ַ�ʽ�����ܴ�����ʱ����������,�ݹ鷽ʽ
//size_t my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}


//3. �����ַ�ʽ������sizeof()����(������sizeof(str)�������ַ����ĳ���)
//size_t my_strlen(const char* str)
//{
//	return sizeof(str) - 1; //ע�⣺�����ǲ��Ե�,��Ϊsizeof�Ǽ�����ָ��Ĵ�С,�����ַ����Ĵ�С.ָ��Ĵ�С�ǹ̶���!
//}


//size_t my_strlen(char* s) //s�д�ŵ����ַ�����Ԫ�صĵ�ַ,
//{
//	char* p = s; //p�д��ŵ����ַ�����Ԫ�صĵ�ַ,  �����������˻���,ע����!
//	while (*p != '\0')
//		p++;             //��ַ������һ��!
//	//printf("%p\n", s); //�����s��һ��ָ��,ָ���ַ�������Ԫ�صĵ�ַ.
//	//printf("%p\n", p); //�����p��һ��ָ��,ָ���ַ��������һ��Ԫ�صĵ�ַ.
//	return p - s; //�����ַ����ĳ���,Ҳ����ָ��pָ��ĵ�ַ���ַ�����Ԫ�صĵ�ַ�Ĳ�ֵ. s�ĵ�ַû�иı�.
//}
//int main()
//{
//	char arr[] = "hello world";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	//printf("%d\n", sizeof(arr));  //sizeof ��������Ľ����12,��Ϊ��������һ��Ԫ���ǿո�,����sizeof��������Ľ����ʵ�ʵ��ַ�������1.
//	return 0;
//}




/*�ܵ���˵��ָ�뷽��Ķ�������Ҫ�����ϰ, �������һЩ���º���ص���Ŀ������ϰ
* Ȼ���������һЩ�鼮���Ķ�, Ȼ���Ǹ�����ʦд����,����ÿ�����붼Ҫ�Լ�д����
* ����һ��Ҫ�ú����˼��,���������AI,�������������Ǻܺõ�!�����Һܴ�İ���!
* ����!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/


//int main()
//{
//	//char name[40] = "zhangsan";
//	//printf("%s\n", name); //���: zhangsan
//
//	char name[20] = { 0 };
//	strcpy(name, "zhangsan");   //�����������ǽ��ַ���������������,�����strcpy���������������ַ�����.
//	printf("%s\n", name); //���: zhangsan
//	//strcpy�����Ὣ"\0��Ҳ������������,����������"\0����ֹͣ����.����Ҫע��,����Ҫע�ⲻ�ܿ���û�н������ַ���.
//	//���磺
//	char arr[3] = {'b', 'a', 'd' };
//
//	strcpy(name, arr); //�����ǲ��е�,��Ϊarr��û�н������ַ���,���Իᵼ������Խ��.
//	
//	return 0;
//}


//int main()
//{
//	char* p = "hello world";   //p�д�ŵ����ַ�����Ԫ�صĵ�ַ,  �����������˻���,ע����!
//	printf("%s\n", p); //���: hello world
//	return 0;
//}


//���鷽ʽʵ��strcpy����
//void my_strcpy(char* dst, const char* src)
//{
//	int i = 0;
//	while (src[i] != '\0')
//	{
//		dst[i] = src[i];
//		i++;
//	}
//}

//ָ�뷽ʽʵ��strcpy����
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
//	while (*dst != '\0')        //���ҵ��ַ����Ľ�β,Ȼ���ٿ����µ��ַ���. 
//	{
//		dst++;
//	}
//	while ((*dst++ = *src++));  //�����µ��ַ���.
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
//	printf("%s\n", arr); //���: helloworld
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
//	return *str1 - *str2;   //����Ƚϵ���ASCII��ֵ,�Ƚϵ����ַ��Ĳ�ֵ!
//}
//
//int main()
//{
//	char arr1[] = "zhangsan";    //strcmp�����Ƚϵ����ַ�����"ASCII"��ֵ,�ȽϵĲ����ַ����ĳ���!
//	char arr2[] = "zisi";
//
//	int ret = my_strcmp(arr1, arr2); //strcmp���������Ƚ������ַ����Ƿ����,����ֵ��0��ʾ���,����ֵ�Ǹ�����ʾarr1<arr2,
//								  //����ֵ��������ʾarr1>arr2.
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
//	strcpy(arr1, arr2);   //���ú���,��arr2�����ݿ�����arr1��.  ���һὫԭ����arr1�е��������!
//	printf("%s\n", arr1); 
//	return 0;
//}

//int main()
//{
//	char arr1[100] = "zhenshidehuangyan";
//	char arr2[] = "hello world";
//
//	strncpy(arr1, arr2, 5);   //���ú���,��arr2��ǰ5���ַ�������arr1��.  ���Ҳ��Ὣԭ����arr1�е��������!
//	printf("%s\n", arr1); 
//	return 0;
//}


//int main()
//{
//	char arr1[100] = "zhenshidehuangyan";
//	char arr2[] = "hello world";
//
//	strncat(arr1, arr2, 5); //�����Զ�����һ��\0
//	printf("%s\n", arr1); //���: zhenshidehuangyanhello
//	return 0;
//}


//int main()
//{
//	char email[] = "3115708251@qq.com";
//	char substring[] = "qq.com";
//	char* p = strstr(email, substring); //�����Ӵ����ַ����е�λ��,�����Ӵ���Ԫ�صĵ�ַ.
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
//	const char* pstr = "hello bit.";//�����ǰ�һ���ַ����ŵ�pstrָ�����������
//	printf("%s\n", pstr);  //����ġ�pstr���Ǹ����������ǲ��ܸ��ĵģ��������ǽ���ŵ���ָ���У���������Ҫ�ڡ�ָ�����͡�֮ǰ���ϡ�const����
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
//	char* p = my_strstr(str, str2); //�����Ӵ����ַ����е�λ��,�����Ӵ���Ԫ�صĵ�ַ.
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
//	int b = (int)a; //��double����ת��Ϊint����,С�����ֻᱻ�ض�.
//	printf("%d\n", b); //���: 3
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
//	//��ʱ����������ֵ��int x = 10. int y = 20;
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
//            printf("  ");  // ��ӡ�ո�
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
//            printf("%4d", coef);  // ���ϵ��
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//// ��������������arr���±�Ϊi��jλ�õ�Ԫ��
//void swap(int arr[], int i, int j) {
//    int tmp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = tmp;
//}
//
//// ѡ������
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
//// ð������
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
//// ��������
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
//	char* pa = "abcdef";//���ַ����׵�ַ�ŵ�ָ�롰pa������!
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
//	//��ָ��������ж��塰�ַ����������һ���ܺõĽ��ж���ķ�ʽ],���Խ�ʡ���볤��
//	//ƽʱ����һ�����ַ�������Ҫ�á���������ַ���ָ�롱�ķ�ʽ���ж�������,�������е��鷳!���������֡�ָ�����顱�ķ�ʽ���ж����ܷ���!
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
//	*a = *b;  //�ܶණ������Ҫ��������е�ԭ��֮���ٽ���Ӧ��, ��Ȼ�Լ�����ⲻ��, ֻ��ƾ������Ӳ�������ǲ��е�!
//	*b = c;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("����֮ǰ��%d %d\n", a, b);
//	swap(&a, &b);
//	printf("����֮��%d %d", a, b);
//
//	return 0;
//}




// arr[l....r]��Χ�ϵ����ֵ
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
//    printf("�������ֵ : %d\n", maxValue(arr, size));
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
//    // ����������� n ���� 0 �� 1 ʱ���׳�Ϊ 1
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    // �ݹ������n �Ľ׳˵��� n ���� (n-1) �Ľ׳�
//    else {
//        return n * factorial(n - 1);
//    }
//}
//
//int main() {
//    int num = 5;  // Ҫ����׳˵�����
//    int result = factorial(num);
//    printf("�׳˽����%d\n", result);
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d", !a);
//	return 0;
//}


