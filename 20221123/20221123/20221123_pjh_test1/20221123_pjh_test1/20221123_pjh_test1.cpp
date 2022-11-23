#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int find_max(int c, int d, int e);
int find_min(int f, int g, int h);

int main()
{
	int a = 0, b = 0, c = 0;
	int max = 0; int min = 0;
	
	scanf("%d %d %d", &a, &b, &c);

	max = (a > max) ? a : max;
	max = (b > max) ? b : max;
	max = (c > max) ? c : max;

	min = (a < min) ? a : min;
	min = (b < min) ? b : min;
	min = (c < min) ? c : min;

	printf("max : %d min : %d\n", max, min);

	return 0;
}

int find_max(int c, int d, int e)
{
	int max = 0;
	max = (c > max) ? c : max;
	max = (d > max) ? d : max;
	max = (e > max) ? e : max;

	return max;
}

int find_min(int f, int g, int h)
{
	int min = 0;
	min = (f < min) ? f : min;
	min = (g < min) ? g : min;
	min = (h < min) ? h : min;

	return min;
}

int find_median(int i, int j, int k)
{
	int max = find_max(i,j,k);
	int min = find_min(i,j,k);
	int median = 0;
	if ((i != max) && (i != min))
	{
		scanf("%d", &median);
		printf("%d", i);
	}

	if ((j != max) && (j != min))
	{
		scanf("%d", &median);
		printf("%d", j);
	}

	if ((k != max) && (k != min))
	{
		scanf("%d", &median);
		printf("%d", k);
	}
     
	return median;
}
