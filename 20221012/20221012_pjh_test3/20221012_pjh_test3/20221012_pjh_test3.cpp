#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

/*int main()
{
	int num = 0;
	printf("input number ");
	scanf("%d", &num);

	if (num >= 0)
	{
		printf("0보다 크거나 같습니다 \n");

	}
	else
	{
		printf("음수 \n");
	}
*/
	

		int main(void)
		{
			int opt;
			double num1, num2;
			double result;

			printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
			printf("선택? ");
			scanf("%d", &opt);
			printf("두 개의 실수 입력: ");
			scanf("%lf %lf", &num1, &num2);

		
	    if (opt == 1)
		{
			result = num1 + num2;
			printf("결과: %lf + %lf = %lf \n", num1, num2, result);
		}
		else if (opt == 2)
		{
			result = num1 - num2;
			printf("결과: %lf - %lf = %lf \n", num1, num2, result);
		}
		else if (opt == 3)
		{
			result = num1 * num2;
			printf("결과: %lf * %lf = %lf \n", num1, num2, result);
		}
		else if (opt == 4)
		{
			result = num1 / num2;
			printf("결과: %lf / %lf = %lf \n", num1, num2, result);
		}

		else
	    {
	    printf("조건을 잘못 입력하셨습니다 \n");
	    }

	return 0;
}