#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int Fib(int n)//  递归不合适。
{
	int i = 0;   // a n--- a n-1 + a n-2          N->n-1,N-1    1,1,2,3,5,8,13,21,34,55
	if (n>2)
		return Fib(n - 1) + Fib(n - 2);    // 效率低   ,求n=40需要算3000万次的F3；
 	else
		return 1;
}
int Fib1(int n)
{
	int a[] = { 1,1 }; int  i = 0; int tmp = 0;      //也还行。但是没必要放数组。
	if (n < 3)
		return 1;
	else 
	{

		for (i = 0; i < n-2; i++)
		{
			tmp = a[0] + a[1];
			a[0] = a[1];
			a[1] = tmp;
		}
		return a[1];
	}
}
int Fib2(int n)
{
	int a = 1;int b=1; int tmp = 1;
		while(n>2)
		{
			tmp = a + b;
			a = b;
			b = tmp;
			n--;
		}
		return tmp;
}
int main()
{
	int num=0;
	scanf("%d", &num);
	printf("Fibonacci(n)=%d", Fib2(num));
	return 0;
}
