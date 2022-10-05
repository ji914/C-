#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int NUM = 0;
	int i = 0, sum = 0;
	printf("input number");
	scanf("%d", &NUM);

	for (i = 0; i <= NUM; i++)
	{
		sum += i;
	}

	printf("1에서 %d까지의 합은 %d 입니다.\n", NUM, sum);

	i = 0;
	sum = 0;
	while (i <= NUM)
	{
		sum += i;
		i++;
	}
	
	printf("1에서 %d까지의 합은 %d 입니다.\n", NUM, sum);


	i = 0;
	sum = 0;
	do 
	{
		sum += i;
		i++;
	} while (i <= NUM);
	
	printf("1에서 %d까지의 합은 %d 입니다.\n", NUM, sum);

	return 0;
}

