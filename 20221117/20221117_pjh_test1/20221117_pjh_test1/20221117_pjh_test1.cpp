#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	FILE* fp;
	int input = 0, i = 0;
	int sum = 0;
	double avg = 0.0;
	int max = -10000, min = 10000;
	fp = fopen("d:\\input.txt", "r");
	if (fp == NULL)
	{
		printf("File Dose not Exit!");
		return -1;
	}
	for ( i = 0; i < 6; i++)
	{
		fscanf(fp, "%d", &input);
		if (input > max) max = input;
		if (input < min) min = input;
		sum += input;
	
	}
	printf("max : %d | min : %d", max, min);
	avg = sum / 6.0;
	printf("sum : %d | avg : %lf", sum, avg);

	return 0;
}



















/*

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
	*/
	/*
	fscanf(fp,"%d",&a);
	fscanf(fp,"%d",&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d x %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	 */
/*
	for (i = 0; i < 6; i++)
	{
		fscanf(fp, "%d", &a);
		sum += a;
	}
	avg = sum / 6.0; printf("avg = %lf\n", avg);
	printf("sum = %d | avg = 6.3lf\n", sum, avg);
	fclose(fp);


	return 0;
}

*/