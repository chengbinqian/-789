//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b))
//	{
//		if (a >= b)
//		{
//			printf("%d\n", a);
//		}
//		else
//			printf("%d\n", b);
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= n - i; j++)
//			{
//				printf("* ");
//			}		
//			printf("\n");
//		}
//	}
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main() {
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	float cir = 0;
//	scanf("%d %d %d", &a, &b, &c)
//	cir = a + b + c;
//	float p = cir / 2;
//	printf("circumference=%.2f area=%.2f\n", cir, sqrt(p*(p - a)*(p - b)*(p - c)));
//	return 0;
//}


//�Ӵ�С���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf("%d %d %d", &a, &b, &c))
//	{
//		if (a < b)
//		{
//			int temp = a;
//			a = b;
//			b = temp;
//		}
//		if (a < c)
//		{
//			int temp = a;
//			a = c;
//			c = temp;
//		}
//		if (b < c)
//		{
//			int temp = b;
//			b = c;
//			c = temp;
//		}
//		printf("%d %d %d\n", a, b, c);
//	}
//	return 0;
//}

//��ӡ3�ı���
//#include<stdio.h>
//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//�������������Լ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf("%d %d", &a, &b))
//	{
//		while (c = a%b)
//		{
//			a = b;
//			b = c;
//		}
//		printf("%d\n", b);
//	}
//	return 0;
//}

//��ӡ1000-2000֮�������
//#include<stdio.h>
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//��ӡ100-200֮�������
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int n = 0;
//		for (n = 2; n <= i; n++)
//		{
//			if (i%n == 0)
//			{
//				break;
//			}	
//		}
//		if (n == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
//
//
//��1-100֮���ж��ٸ�9
//#include<stdio.h>
//int  main() {
//	int i = 0;
//	int count = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//�������
//#include<stdio.h>
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = flag;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��10�������е����ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int arr[10] = { 0 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//����˷��ھ���
//#include<stdio.h>
//int main() {
//	int i = 0;
//	for (i = 1; i <=9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���ֲ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
/*int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key){
			right = mid - 1;
		}
		else if (arr[mid] < key){
			left = mid + 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���\n");
	}
	
	return 0;
}                  */    

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//
//
//void menu()
//{
//	printf("********************************\n");
//	printf("*****1.��ʼ��Ϸ*****************\n");
//	printf("*****0.�˳���Ϸ*****************\n");
//	printf("********************************\n");
//
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (~0)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("��ϲ��,�¶���\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("�´���!\n");
//		}
//		else
//		{
//			printf("��С��!\n");
//		}
//	}
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ!\n");
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 2; i <= sqrt(n);i++)
//		{
//			if (n%i == 0)
//				break;
//		}
//		if (i > sqrt(n))
//		{
//			printf("������\n");
//		}
//		else
//		{
//			printf("��������\n");
//		}
//	}
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int year = 0;
//	while (~scanf("%d", &year))
//	{
//		if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
//		{
//			printf("�����꣡");
//		}
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	while (~scanf("%d %d", &a, &b))
//	{
//		int temp = 0;
//		temp = a;
//		a = b;
//		b = temp;
//		printf("%d %d\n", a, b);
//	}
//	return 0;
//}


int main() {
	int m = 0;
	while (~scanf("%d", &m))
	{
		int i = 0;
		for (i = 1; i <= m; i++)
		{
			int j = 0;
			for (j = 1; j <= i; j++)
			{
				printf("%d * %d = %d  ", j, i, j*i);
			}
			printf("\n");
		}
	}
	return 0;
}