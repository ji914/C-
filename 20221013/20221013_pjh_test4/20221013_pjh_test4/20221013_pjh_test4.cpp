#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int num = 0;
	printf("정수를 입력하세요. ");
	scanf("%d", &num);

	if ((num%2)==0)
	{
		printf("  \n");

	}

	else
	{
		printf("   \n");

	}

	(num % 2) == 0 ? printf("짝수 \n") : printf(" 홀수 \n ");
	return 0;
}
