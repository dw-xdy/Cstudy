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
// �������������ǣ����������ʹ洢�����ͣ�����char���ͷ���λ�����ǡ�1����Ҫ��unsigned char����λ�����ǡ�0����


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






