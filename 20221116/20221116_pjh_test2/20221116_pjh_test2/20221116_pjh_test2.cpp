#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	FILE* fp;
	int a, b;
	int i = 0; int sum = 0; double avg = 0.0;
	fp = fopen("d:\\input.txt", "r");
	if (fp == NULL)
	{
		printf("File does not Exit!\n");
		return -1;
	}
	/*
	fscanf(fp,"%d",&a);
	fscanf(fp,"%d",&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d x %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
     */
	for ( i = 0; i < 6; i++)
	{
		fscanf(fp, "%d", &a);
		sum += a;
	}
	avg = sum / 6.0; printf("avg = %lf\n", avg);

	return 0;
}

