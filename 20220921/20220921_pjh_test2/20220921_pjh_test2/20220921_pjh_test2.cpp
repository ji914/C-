#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	int result_int = 0;
	double result_double = 0.0;

	printf("두 개의 정수를 입력하세요");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("입력된 정수는 %d %d 입니다.\n", a, b);

	result_int = a + b;
	printf(" % d + % d = % d 입니다.\n", a, b, result_int);

	result_int = a - b;
	printf(" % d - % d = % d 입니다.\n", a, b, result_int);

	result_int = a * b;
	printf(" % d x % d = % d 입니다.\n", a, b, result_int);

	result_double = (double)a / b;
	printf(" %d / %d = %lf 입니다.\n", a, b, result_double);

	return 0;
}