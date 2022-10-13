#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main(void)
{
	int num = 0, abs = 0;
	printf("정수 입력: ");
	scanf("%d", &num);

	 abs = num > 0 ? num : num * (-1);
	 printf("절대값: %d \n", abs);
	
	
	if (num>0)
	{
		abs = num;
		printf("절대값: %d \n", abs);
	}
	
	else 
	{
		abs = num * (-1);
	}
     printf("절대값: %d \n", abs);

	return 0;
}
