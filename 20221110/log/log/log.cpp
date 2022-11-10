#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	int number_of_digits = 0;
	int i;
	int result = 0;
	int reverse = 0;

	scanf("%d", &a);

	number_of_digits = log10(a);
	printf("number_of_digits = %d\n", number_of_digits);

	for (i = number_of_digits; i >= 0; i--)
	{
		result = a / pow(10, i);
		a = a - result * pow(10, i);
		printf("%d %d\n", i, result);
		reverse += result * pow(10, number_of_digits-i);

	}

	printf("%d \n", reverse);
	
	

	/*
	for (i = number_of_digits; i >= 0; i--)
	{
	
		printf("%d \n", i,result);

	}

	for (i = 0; number_of_digits <= i; i++)
	{
		printf("%d \n", i);

	}
	*/
	return 0;
}

