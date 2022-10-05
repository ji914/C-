#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{

  
	int i = 1;
	int NUM = 0;
	int sum = 2;
	printf("input number ");
	scanf("%d", &NUM);

	for (sum = 2; sum < NUM; i++ )
	{
		printf("%d + %d =",sum, i);
		sum = sum + i;
		printf("%d \n", sum);
	}

	sum = 2;
	while (i < NUM)
	{
		printf("%d +%d = ", sum, i);
		sum = sum + i;
		printf("%d \n", sum);
		
	}

	sum = 2;
	do
	{
		printf("%d + %d =", sum, i);
		sum = sum + i;
		printf("%d \n", sum);
		
	} while (i < NUM);


	return 0;
}

