#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int num = 0;
	do  
	{

		printf("do-while Hello %d\n",num);
		num++;
	} while (num < 3);

	num = 0;
	
	while (num>3)
	{

		printf("while Hello %d\n", num);
		num++;
	}

	return 0;
}

