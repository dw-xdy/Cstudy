#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

��д�ĵ�һ��Switch��䣬�������򵥵�Ӧ��
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	}
	return 0;
}

��ӡ1����10������
int main()
{
	int a = 1;
	while (a <= 10)
	{
		printf("%d ", a);
		a++;
	}
	return 0;
}

���ˡ�continue�������
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
		{
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)       //�����еط���Ҫע����ǣ����Ǹ���ѭ����䡱�����ԣ������Լ���������ַ����ᱻ��ӡ������
	{                                     //ֻ������������7���ַ����Ǿ�ֱ�ӵ���14��getchar �� putchar��������Ϊ���С��ո񡱴�����\n��
		putchar(ch);                      //��Crtl+zֹͣ��
	}									  //��ʱ������Crtl+z����ֹͣ�������һ��Сbug������̫���⡣
	return 0;
}

int main()
{
	char password[20] = { 0 };
	printf("����������:");
	scanf("%s", password);
	printf("��ȷ������(Y/N):");          //��ʱ�������������ʲô����ֱ�������No����Ϊgetchar�Ὣ"\n"ֱ�Ӷ�ȡ�����Ծ�ֱ�ӽ��뵽��else��
//////////////////////////////	getchar();
	int ret = getchar();				//��ʱ��ֱ������������һ����getchar�����У��������ַ����ǳ���Ч��
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}

int main()
{
	char password[20] = { 0 };
	printf("����������:");
	scanf("%s", password);
	printf("��ȷ������(y/n):");
	int ch = 0;
	while ((ch = getchar()) != '\n')					//��һ��whileѭ����䣬Ȼ��ֱ�ӽ��ж�ȡ��֪����ȡ����\n�������ܽ���û�����Ƶ�������
	{
		;
	}
	int ret = getchar();
	if ('y' == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}

int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')      //Ҫ�ú�ʹ�á����ӡ����ܣ����ӹ��ܿ������Լ�����������ǡ������ת���ġ�
			continue;
		putchar(ch);
	}
	return 0;
}

/*С����С��������֮����m
�ꡣn���С�������佫
��С�����������������С
����С�����ڸ��ж����� ?*/
int main()
{
	int x, y, m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	y = (m - n) / 3;
	x = 2 * m / 3  + 1 * n / 3 ;
	if (0 != x && 0 != y &&  0 == m % 3 && n%3 == 0 && m == 2 * n)  //һ��Ҫ���޶���������Ϊ����������Ǿ����Եģ�
		printf("С������Ϊ%d�� С������Ϊ%d��", x, y);                 //�Ͼ�����һ���������������������������ҡ�m���͡�n��֮��Ҳ���й�ϵ�ġ�
	else
		printf("����");
	return 0;
}

int main()
{
	int m, n, x, y;
	scanf("%d", &m);
	scanf("%d", &n);
	x = 1 * m / 3  + 1 * n / 3 ;               //1/3m +1/3n ������������ģ��������Խ���ֱ�ӱ�ʾ��
	printf("%d", y);                          // x = 1 * m / 3  + 1 * n / 3 ;
	return 0;
}

/*����N������������ͳ��������ż�����ж��ٸ���

�����ʽ��
�����һ�и���һ����������N����1000������2�и���n���Ǹ��������Կո�ָ���

�����ʽ��
��һ�����Ⱥ���������ĸ�����ż���ĸ������м���1���ո�ָ���*/
int main()
{
    int N = 0;
    int n = 0;
    int j = 0;
    int s = 0;
    scanf("%d", &N);                          //��дһ����N������N������˼���Լ���Ҫ�ж϶��ٸ������ǡ�������ż����

    for (int i = 0; i < N; i++)              //��㶨��һ����i���������i���Ժ���Զ������֣���Ϊ��i��ֻ��������������������ѭ���ĵĶ�����
    {                                        //�����i ���������������뼸�����֣�����˵�ǡ�ѭ�����Ρ���N = ѭ��������

        scanf("%d", &n);                       //Ȼ���á�n�������Լ������롱�����֡�
        if (n % 2 == 0)                        //���ǡ�n��ÿ��ֻ��һ�Σ�Ȼ���Լ������˼������֣�n�������뼸�Ρ�
        {
            s++;//ż���ĸ���                  //Ȼ����if else����ж��ǡ�ż������������
        }                                      //��Ϊ�ʼ���õ���s��j�� = 0�����Ժ�����Զ��������ӡ�
        else
        {
            j++;//�����ĸ���
        }
    }
    printf("%d %d", j, s);
    return 0;
}

��ӡ9 * 9 �˷���
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)                     //һ��Ҫ����ø������ŵ���˼�����塣
    {                                            // �����һ����˫��ѭ����һ��Ҫ�����ˡ�
        for (j = 1; j <= i; j++)                 //��++������˼���ȸ���b��һ��ֵ��a����Ȼ�����á�a����1��
        {
            printf("%d*%d=%-4d", j, i, i * j);          //��-4d������˼�ǡ���һ��������˵�������������ռλ��4���ո񡱵ľ��롣
        }                                               //�����Ϳ��Ա�֤��������������ԡ�
        printf("\n");                                  //˵���˾������������forѭ���ġ�Ƕ�����ԡ����á�i��ѭ��һ�ε�ʱ�򣬡�j������ѭ����i����
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// �׳˵�����
int main()
{
    int n;
    int i;
    int s = 1, S = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s * i;       //�׳˵ı���ʽ����ÿ���׳˵ı���ʽ��          // ��forѭ�����Ҿ��û����е㲻������ģ��Լ�����Ҫ���дһ������ʽ�����ܸ������⡰forѭ������
        S = S + s;      // �׳˵���͡�
    }
    printf("%d", S);
}

//�������ֵ�ƽ����
int main()
{
	int a, b, c, d = 0;
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		c = b * b;                //�����Ŀ���������Ŀ��һ���ģ�˵���˾����Ƚ��С��������㡱�Ľ��У�Ȼ��
		d = d + c;                //���С��ۼӡ���͡�
	}
	printf("%d", d);
	return 0;
}
 ������������Ŀ�У�ע��Ҫ���á���������˼�룬��һ�����С��������㡱��ʱ���õľ��ǡ���������˼�롣
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int N, i, s;
	float sum;
	scanf("%d", N);
	for (i = 1; i <= N; i++)
	{
		s = i - (i + 1) / (i + 2);
	}


	return 0;
}

int main()
{
    int a = 1, b = 1, flag = 1;
    double sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += a * 1.0 * flag / b;          //����ĸ��������������е㲻һ���ģ� ��a��b������int���͵ģ���������Ҫ�������float���͵ģ�
        flag++;//���Ʒ���
        a = -a;//�����������Ϊ����ʾ+-����
        b += 2;
    }
    printf("%.3lf", sum);
}

 д���� == �취�����˼ά�� + д���루�����﷨��ʽȥд��
���˼ά����Ҫѵ���ġ����ü������˼άȥ������⣩

���㡰n���Ľ׳�
 ˼·������á�n���Ľ׳���ʲô��n��= 1 * 2 * 3......*
int main()
{
	int n = 1, N, a = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		n *= i;    // �����ʽ����˼�ǽ�����������������֣���ǰ�����ֶ���Ҫ���³�һ��ģ����Բ��ܽ��н׳˵ļ���
		a += n;
	}
	printf("%d", a);
	return 0;
}

/* praise1.c -- uses an assortment of strings */
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}

int main()
 {
    int i, sum = 0, x, n = 8;
    float y;
    for (i = 1; i <= n; i++)
    {
        scanf("%d ", &x);
        sum += x;
    }
    y = sum * 1.0 / 8;             //Ҫ��û�С�1.0��������֣���ô���Լ������������������Ϊ��һ���С�sum / 8����������
    printf("%.2f\n", y);            //��������Ҫ���ǡ����������͡�
    return 0;
}

int main()
{
    float c, a, b;
    scanf("%f %d", &a, &b);
    c = a / b;                    //����ġ�a��b�����ǡ�int���͡���Ȼ����������ʱ�����г����Ľ���ǡ�int���͡�
    c = a * 1.0 / b;              //Ҳ����˵��������Ķ����ͽ��յĶ����Ƿֿ��ġ����ӣ�3 / 2 == 1.5�����ǡ��������㡱�������ǡ�1��
    printf("%.1f", c);            //���յġ�c����Ȼ�Ǹ��������ͣ������������յ��ǡ�1��Ҳ����˵ת�������ĵ��ǡ�1.0����
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1. ��100����200֮��������ʹ�á��������ķ���
int main()
{
	int i, j;
	int flag = 0;
	int count1 = 0;
	int count2 = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)          //��������˼��ֻ��1���䱾���ܽ��Լ�������
			//������������һ��������ĵط������forѭ���С�j<=i�����ʱ���ǰ�j=i����Ӧ�ó����ˣ�����û�г���
			//��������������һ�¡�j<i������Ҳ��û����ģ�������������ʽ����ѭ����������û�б䣬���ⲻ�ˡ�
		{
			if (i % j == 0)            //���ʽ�ӵ������ǡ�����һ��i��Ȼ����j��2��ʼһֱ��i������֪��j���ӵ�i��
			{
				break;
			}
			count1++;
		}
		count2++;
		if (i == j)                     // ���ʱ���ڲ�ġ�forѭ�����Ѿ��������ˣ�ֻ�����С�����if��䡱��
			printf("%d  ", i);         //�б�Ҫע��һ�¡�%d ����d����Ŀո񣬲�Ȼ�ͻ������ᣬ�������롰5��
									  // Ȼ�����֡�2�� 3�� 5����������������û�ӿո�ͻῴ�ɡ�235�����������Լ����
	}
	printf("\n�ڲ�count=%d", count1);
	printf("\n���count=%d", count2);
	return 0;
}
2. �Ż�1�����ٱ����ĳ���
int main()
{
	int i, j;
	int flag = 0;
	//int count1 = 0;
	//int count2 = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < (i / 2); j++)
		{
			if (i % j == 0)
			{
				break;
			}
			//count1++;
		}
		//count2++;
		if (j >= i / 2)
			printf("%d  ", i);
	}
	//printf("\n�ڲ�count=%d", count1);
	//printf("\n���count=%d", count2);
	return 0;
}

3.�Ż�2���޳�ż�� ��������͡�
int main()
{
	int i = 0, j = 0, sum = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
			sum += i;
			count++;
		}
	}
	printf("\n%d ", sum);
	printf("\ncount = %d\n", count);

	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

����1���κ����������Լ��������͡�
int main()
{
	int N, i, j, sum = 0, sum1 = 0;
	scanf("%d", &N);
	printf("1 ");
	for (i = 1; i <= N; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
			sum += i;
		}

	}
	sum1 = sum + 1;
	printf("\n%d", sum1);
	return 0;
}

�������������ֵ,�Լ����庯������ʹ�ú����ķ�ʽ��
int add(int x, int y)  //�Լ�д��  ����ֵ���ͣ�  ��������  ������
{
	if (x >= y)
	{
		return x;         //����������Ҫ����һ��ֵ�ģ�����˵��Ҫ���һ��ֵ��
	}                     //����û�С�����ֵ���͡����Ǿ����������ˣ��Ͳ��������
	if (x < y)
	{
		return y;          //����������β��һ���ǡ�return����������û�з���ֵ��ʱ��Ͳ���д������ֵ���ˡ�
	}
}

int main()
{
	int m = add(765, 1);    //�����ĵ�����ʹ�õ�ʱ��Ҫ�Ƚ��С���������

	printf("%d\n", m);      //��������ʱ����С�����ֵ���������
	return 0;
}

��ʦд��
get_max(int x, int y)
{
	return (x > y ? x : y);
}
int main()
{                    
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);    //�����ʱ��һ��Ҫע���ʽ���⣬Ҫ��scanf�еġ�ת�����š�֮���á��������������Լ�д���ֵ�ʱ��ҲҪ�á�����������

	int m = get_max(a, b);     //����Ҫ�����ǰѺ�����һ���������棬Ȼ����н��䷵��ֵ�����

	printf("%d\n", m);
}

////////дһ���������Խ����������α��������ݡ�
//////int change(int x, int y)           //�Լ�д�ģ�ʲô�����ǡ��������в�����
//////{
//////    int z = 0;
//////    z = x;
//////    x = y;
//////    y = z;
//////    printf("%d %d", x, y);
//////}
//////
//////int main()
//////{
//////    int m = change(7, 4);
//////    printf("%d", m);
//////    return 0;
//////}

ˮ�ɻ���  ��������ѭ���ķ�ʽ���м���
int main()
{
    int a, b, i, j;
    for (i = 1; i < 10; i++)       //����Ҫ�ú����⡰for��ѭ���еĵġ�Ƕ�ס��͡�break �� continue����
    {
        for (j = 0; j < 10; j++)
        {
            for (a = 0; a < 10; a++)
            {
                if (i * 100 + j * 10 + a * 1 == i * i * i + j * j * j + a * a * a)
                {
                    b = i * 100 + j * 10 + a * 1;
                    printf("%d ", b);
                }
            }
        }
    }
    return 0;
}

ˮ�ɻ���,���õ���ѭ���ķ�ʽ���м���
int main() 
 {
    int num, hundreds, tens, ones;

    for (num = 100; num <= 999; num++) 
 {
        hundreds = num / 100;
        tens = (num / 10) % 10;
        ones = num % 10;

        if (num == (hundreds * hundreds * hundreds + tens * tens * tens + ones * ones * ones))
        {
            printf("%d\n", num);
        }
    }
    return 0;
}



���21�����н�ֹĳ���������������������ݡ�������һ���и���21���͵�ĳ����ֹ���
int main()
{
    int year, i;
    printf("�������ֹ���: ");
    scanf("%d", &year);
    printf("21�����н�ֹ%d�������������������:\n", year);
    for (i = 2000; i <= year; i++)
    {
        if (i % 4 == 0 && (i % 100 !=  0 || i % 400 == 0))
        {
            printf("%d ", i);
        }
    }
    return 0;
}



������һ���и�������������M��N��1��M��N��500����
���M��N֮����������������������ǵĺ͡�
 ���������������
int main()
{
	// �������
	int M = 0, N = 0, i, j, sum = 0, a = 0;
	// ����M��N��ֵ
	scanf("%d %d", &M, &N);
	// ѭ����M��N
	for (i = M; i <= N; i++)
	{
		// �ڲ�ѭ�����ж�i�Ƿ�Ϊ����
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				// ��������������ѭ��
				break;
			}
		}
		// ��j����i����ʾiΪ����
		if (i == j)
		{
			// ����������1���ۼ������ĺ�
			sum += i;
			a++;
		}
	}
	// ������������������ĺ�
	printf("%d ", a);
	printf("%d ", sum);
	// ���س���ִ�гɹ�
	return 0;
}

�������ˮ��
int main()
{
	int x;
	float y;      //ע��һ�������float��
	scanf("%d", &x);
	if (x <= 15)
	{
		y = 4 * x / 3;
	}
	else
	{
		y = 2.5 * x - 17.5;
	}
	printf("%.2f", y);
	return 0;
}

ͳ��ѧ��ƽ���ɼ��ͼ�������
int main()
{
	int N, i, j, sum = 0, count = 0;
	float average = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &j);
		sum += j;
		if (j >= 60)
		{
			count++;
		}
	}
	average = sum * 1.0 / N;            //����������CSDN��д������һ�������յĺͼ���Ķ����Ƿֿ��ġ�һ��Ҫע����һ�㡣
	printf("average = %.1f\n", average);
	printf("count = %d", count);
	return 0;
}


 ���������������ܳ�
#include <math.h>
int main()
{
	int a, b, c;
	float area, perimeter, s;
	scanf("%d %d %d", &a, &b, &c);
	s = (a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	perimeter = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("area = %.2f; perimeter = %.2f", area, perimeter);
	}
	else
	{
		printf("These sides do not correspond to a valid triangle");
	}
	printf("\n%.2f", s);
	return 0;
}



//��C����ʵ��쳲�����������ѭ���ķ�ʽ
int main()
{
    int n, i, a = 0, b = 1, c;
    printf("��������: ");   //���롰n����ֵ
    scanf("%d", &n);
    printf("쳲���������: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}



//��C����ʵ��쳲����������á��ݹ顱�ķ�ʽ
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;     //쳲��������еĵ�һ�����͵ڶ���������1
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);   //�ݹ�ķ�ʽ
}
int main()
{
    int n, i, a = 0, b = 1, c;
    printf("��������: ");   //���롰n����ֵ
    scanf("%d", &n);
    printf("쳲���������: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", Fibonacci(i));
    }
    return 0;
}

//��ͺ���
void sum(int begin, int end)     //���������ǡ�void���ģ��������ǡ�sum���������ǡ�begin���͡�end��
{
	int i, sum = 0;
	for (i = begin; i <= end; i++)
	{
		sum += i;
	}
	printf("%d��%d�ĺ�Ϊ��%d\n", begin, end, sum);
}
int main()
{
	sum(1, 10);
	sum(10, 20);
	sum(20, 30);
	return 0;
}

/*������������ֵ����
()���˱�ʾ�������õ���Ҫ����
��ʹû�в���Ҳ��Ҫ()
����в���������Ҫ������ȷ��������˳��
��Щֵ�ᱻ����˳������������ʼ�������еĲ���*/

void cheer(viod)    //��һ��void��ʾһ������û�з���ֵ���ڶ���void��ʾ����û�в���
{
    printf("cheer\n");
}

int main()
{
    cheer;
    cheer();
    return 0;
}


//�����������ֵ�ֵ
void swap(int a, int b);  //��ʽ����  ��������

int main()
{
	int a = 10, b = 20;
	swap (a, b);        //ʵ�ʲ���  ��ֵ��
	printf("a = %d, b = %d", a, b);
	return 0;
}

void swap(int x, int y)  //��ʽ����  ��������      //C�����ڵ��ú���ʱ����Զֻ�ܴ�ֵ������
{										 //����ʽ���еġ� a��b �������Ƕ����˵ĺ����еġ� x��y ����������ͬ�ı���
	int t = x;							//������û���κι�ϵ�ı���
	x = y;								//�򿪼��ӵ�ʱ����Կ�����x��y��ֵ�Ѿ������˱仯
	y = t;								//����a��b��ֵ��û�б仯
}


//�������һ��ʵ�����������ƽ����������������6λС��
#include <math.h>
int main()
{
	float a, b;
	scanf("%f", &a);
	b = sqrt(a);
	printf("%.6f", b);
	return 0;
}

//�������һ���Ƕ�ֵr������ǵ�����ֵ������ֵ
int main()
{
	int a;
	scanf("%d", &a);
	printf("%lf %lf", sin(a * 3.14159265358979323846 / 180), cos(a * 3.14159265358979323846 / 180));
	return 0;
}

//����������ɸ��Ƕȵ�ֵ��������ǵ�����ֵ������ֵ��
int main()
{
	float f;
	while (scanf("%f", &f) == 1)
	{
		printf("%lf %lf\n", sin(f * 3.14159265358979323846 / 180), cos(f * 3.14159265358979323846 / 180));

	}
	return 0;
}

//��һ�ַ������Ҹо�Ҳ���Խ������㡣
int main()
{
	int i, n;
	for (i = 0; ; i++)
	{
		scanf("%d", &n);
		printf("%lf %lf\n", sin(n * 3.14159265358979323846 / 180), cos(n * 3.14159265358979323846 / 180));
	}
	return 0;
}


//ѭ��������ú�ѧϰ���������ϣ���
void fun()
{
	printf("�ú�ѧϰ���������ϣ�\n");
}
int main() 
{
	int n;
	scanf("%d", &n);
	while (n--) 
	{
		fun();
	}
	return 0;
}


//������вκ�����:void print_star(int n)������Ϊ���n���Ǻš���������������������N�����N����������ʾ���ַ�ͼ�Ρ�
void print_star(int n)
{
	int i, a;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		printf("*");
	}
}

int main()
{
	print_star(1);
	print_star(3);
	print_star(5);
	return 0;
}


 //������Ϊprint_star�ĺ������ú�������һ������n��Ϊ����
void print_star(int n)
{
    int i, j, t;
    t = n;
    // ѭ����ӡn���Ǻ�ͼ��
    for (i = 1; i <= n; i++)
    {
        // ��ӡ�ո�
        for (j = t - 1; j > 0; j--)
        {
            printf(" ");
        }
        t = t - 1;
        // ��ӡ�Ǻ�
        for (j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// ������
int main(void)
{
    int n;
    // ���û������ж�ȡ����n
    scanf("%d", &n);
    // ����print_star������ӡ�Ǻ�ͼ��
    print_star(n);
    return 0;
}



 //���庯������ӡ�Ǻ�
void print_star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*"); // ��ӡ�Ǻ�
        }
        printf("\n"); // ��ӡ���з�
    }
}

// ������
int main()
{
    int N;
    scanf("%d", &N); // ��ȡ����ֵ
    print_star(N); // ���ô�ӡ�Ǻź���
    return 0;
}

//�������������������ĺ�
int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	add(a, b);
	printf("%d", add(a, b));
	return 0;
}


//�׳˵�����  (ʹ�á�ѭ�������������ķ�ʽд���롣��
int main()
{
	int i, n, j = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		j *= i;
	}
	printf("%d", j);
	return 0;
}

//ʹ�á��ݹ顱�ķ�ʽд���׳ˡ��Ĵ���
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
	return 0;
}
int main()
{
	��n �Ľ׳�
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);//�ݹ�ķ�ʽ
	printf("%d\n", ret);
}
//�������������Ľ׳�,�нϴ����ֵ�����£����ܻ����������⣬������Ҫʹ��long long���͡�
long long jc (int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		return n * jc(n - 1);
	}
	else
	{
		return -1;
	}
}

int main()
{
	int n = 0;
	long long result = 0;
	scanf("%d", &n);
	result = jc(n);
	printf("%d!=%lld", n, result);
	return 0;
}

//�ú����ķ�ʽ����������֮���������
void ss ()
{
	int i, j, a = 0, b = 0;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d\n", i);
		}
	}
}

int main()
{
	ss();
	return 0;
}






//��ȫ���Լ�д�Ĵ��룬��ʵ�Ҹо��Զ���ȫ����Ĺ��ܺܺã������Ҹо������е㲻ϰ�ߡ������Ҹо��Լ����ô����������ǲ���ǿ��
//�Ҹо���ѧ����ѧϰ�����Ӧ��Ҫ������AI�������Լ���˼ά���ද�֣��ೢ�ԣ���˼�������ܽᡣ
long long jc (int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		return n * jc(n - 1);
	}
}
int main()
{
	int n = 0;
	long long ret = 0;
	scanf("%d", &n);
	ret = jc(n);
	printf("%lld", ret);
	return 0;
}






