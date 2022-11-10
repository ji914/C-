#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int find_max(int a1, int a2, int a3, int a4, int a5, int a6)
{
int max = -10000;
/*
if (max < a1) max = a1;
if (max < a2) max = a2;
if (max < a3) max = a3;
if (max < a4) max = a4;
if (max < a5) max = a5;
if (max < a6) max = a6;
*/

max = (max < a1) ? a1 : max;
max = (max < a2) ? a2 : max;
max = (max < a3) ? a3 : max;
max = (max < a4) ? a4 : max;
max = (max < a5) ? a5 : max;
max = (max < a6) ? a6 : max;

return max;
}

int find_min(int a1, int a2, int a3, int a4, int a5, int a6)
{
	int min = 10000;
	/*
	if (min > a1) min = a1;
	if (min > a2) min = a2;
	if (min > a3) min = a3;
	if (min > a4) min = a4;
	if (min > a5) min = a5;
	if (min > a6) min = a6;
*/
	min = (min > a1) ? a1 : min;
	min = (min > a2) ? a2 : min;
	min = (min > a3) ? a3 : min;
	min = (min > a4) ? a4 : min;
	min = (min > a5) ? a5 : min;
	min = (min > a6) ? a6 : min;
	
	return min;
}

int main()
{
	int a1 = 0;    int a2 = 0;    int a3 = 0;
	int a4 = 0;    int a5 = 0;    int a6 = 0;
	int min = 10000;    int max = -10000;

	scanf("%d", &a1); scanf("%d", &a2); scanf("%d", &a3);
	scanf("%d", &a4); scanf("%d", &a5); scanf("%d", &a6);

	printf("%d %d %d %d %d %d\n", a1, a2, a3, a4, a5, a6);


	printf("max = %d\n", find_max(a1, a2, a3, a4, a5, a6));
	


	printf("min = %d\n", find_min(a1, a2, a3, a4, a5, a6));


	
	return 0;
}

