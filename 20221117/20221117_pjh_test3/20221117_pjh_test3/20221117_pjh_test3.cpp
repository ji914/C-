#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int a, b = 0;
	double input = 0;
	int result = 0;

	scanf("%lf", &input);

	result = (int)(input + 0.5);
	printf("반올림한 정수는 %d\n\n",result);

	return 0;
}

