

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	int result = 0;
	printf("구구단 단수를 입력하세요.");
	scanf("%d", &i);

	while (num < 10)

	{
		result = i * num;
		printf("구구단: %d x %d = %d \n", i, num, result);
		num++;

	}; 
	

	return 0;
}; // while (num < 10)