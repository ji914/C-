#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main(void)

{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		while (is < 10)
		{

			printf("%d * %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
		printf("\n");
	}while (cur <= is);

	return 0;
}


/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main(void)

{
	int start = 0;
	int end = 0;
	int sum = 0;

	printf("두 수를 입력하세요");
	scanf("%d", &start);
	scanf("%d", &end);

	do
	{
		sum = sum * start;
		printf("%d sum = %d \n", start, sum);

		start++;
	} while (start <= end);
	return 0;
}*/