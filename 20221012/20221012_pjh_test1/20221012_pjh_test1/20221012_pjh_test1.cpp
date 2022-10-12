#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{

	int num;
	printf("숫자를 입력하세요. ");
	scanf("%d", &num);

	if (num < 0)
		printf("음수 \n");

	if (num > 0)
		printf("양수 \n");

	if (num == 0)
		printf("0 \n");

	return 0;
}
