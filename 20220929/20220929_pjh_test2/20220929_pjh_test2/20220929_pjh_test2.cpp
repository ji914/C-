#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int sum = 0;

	/*for loop*/
	for (num1 = 1; num1 <= 9; num1++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			printf("%ldx%ld=%2d\n", num1, num2, num1 * num2);

		}
		printf("\n");
	}
	
	/* while */

	num1 = 1;
	sum = 1;
	while (num1 <= 9)

	{
		num2 = 1;
		while (num2 <= 9)
		{
			printf("%ldx%ld=%2d\n", num1, num2, num1 * num2);
			sum += num1 * num2;
			num2++;

		}
		num1++;
		printf("\n");
	}

	
	/* do while */

	return 0;

}

