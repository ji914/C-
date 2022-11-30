#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
             //C언어
#include <stdlib.h>  //rand(),srand()
#include <time.h>  //time()
#include <math.h>

int find_max(int d, int e, int f);
int find_min(int d, int e, int f);
double find_min_double(double d, double e, double f);
double find_max_double(double d, double e, double f);

int main()
{
	int a = 0, b = 0, c = 0;
	int min = 0, max = 0;
	int random_number = 0;
	int i = 0;
	double sum = 0.0, avg = 0.0;
	double dist1 = 0.0, dist2 = 0.0, dist3 = 0.0;

	srand((unsigned int)time(NULL));
	scanf("%d %d %d", &a, &b, &c);

	min = find_min(a, b, c);
	max = find_max(a, b, c);


	for (i = 0; i < 10; i++)
	{
		random_number = rand() % (max - min + 1) + min;
		printf("난수[%d] : %d\n", i, random_number); //난수 발생
		sum += random_number;

	}

	avg = sum / 10;
	printf("sum = %6.3lf | average = %6.3lf\n", sum, avg);

	dist1 = fabs(a - avg); dist2 = fabs(b - avg); dist3 = fabs(c - avg);
	printf("%6.3lf %6.3lf %6.3lf\n", dist1, dist2, dist3);

	min_d = find_min_double(dist1, dist2, dist3);
	printf("%6.3lf\n", min_d);

	max_d = find_max_double(dist1, dist2, dist3);
	printf("%6.3lf\n", max_d);

	if (min_d == dist1)
	{
		printf("중간값은 %d\n", a);
	}

	if (min_d == dist2)
	{
		printf("중간값은 %d\n", b);
	}

	if (min_d == dist3)
	{
		printf("중간값은 %d\n", c);
	}
	return 0;
}

int find_max(int d, int e, int f)
{
	int max = d;
	max = (d > max) ? d : max;
	max = (e > max) ? e : max;
	max = (f > max) ? f : max;

	return max;
}

int find_min(int d, int e, int f)
{
	int min = d;

	min = (d < min) ? d : min;
	min = (e < min) ? e : min;
	min = (f < min) ? f : min;

	return min;
}

double find_min_double(double d, double e, double f)
{
	double min = d;

	min = (d < min) ? d : min;
	min = (e < min) ? e : min;
	min = (f < min) ? f : min;

	return min;
}

double find_max_double(int d, int e, int f)
{
	double max = d;
	max = (d > max) ? d : max;
	max = (e > max) ? e : max;
	max = (f > max) ? f : max;

	return max;
}