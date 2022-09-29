#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int i = 0;
	int sum = 0;
	printf("두 수를 입력하세요");
	scanf("%d", &num1);
	scanf("%d", &num2);

	for (i = num1; i <= num2; i++)
	{
		sum += i;
		printf("i=%d sum=%d\n", i, sum);
	}
	printf("\n\n\n");
	printf("%d에서 %d까지의 합은 %d입니다.\n", num1, num2, sum);
	return 0;
}
