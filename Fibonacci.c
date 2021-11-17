#include <stdio.h>

//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)//测试第三个斐波那契数被计算了多少次
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}
//----------↑递归方法计算量大（重复计算次数多）、速度慢--------------
//-----------↓循环方式来计算，速度快------------
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD----测试驱动开发
	ret = Fib(n);
	printf("ret = %d\n", ret);
	//printf("count = %d\n", count);
	return 0;
}