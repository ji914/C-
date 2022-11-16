#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{

	FILE* fp;

	fp = fopen("data.txt", "wt");

	if (fp == NULL)
	{
		printf("File does not exit!\n");
		return -1;
	}

	fprintf(fp, "test\n");
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);

	fp = fopen("data.txt", "rt");
	if (fp == NULL)
	{
		printf("File does not exit!\n");
		return -1;
	}
	char ch;
	int i;
	for (i=0; i<8; i++)
	{
       ch = fgetc(fp);
	   printf("%c", ch);
	}
	fclose(fp);
	

	return 0;
}






/*
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{

	FILE* fp;

	fp = fopen("data.txt", "wt");

	if (fp == NULL)
	{
		printf("File does not exit!\n");
		return -1;
	}

	fprintf(fp, "test\n");
	fclose(fp);

	return 0;
}
*/
