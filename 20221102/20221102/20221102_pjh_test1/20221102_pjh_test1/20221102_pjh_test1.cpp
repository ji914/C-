#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>


int Add(int num1, int num2);
int Sub(int num1, int num2);
int Multi(int num1, int num2);
double Div(int num1, int num2);
void ShowAddResult(int num);
int ReadNum(void);
void HowToUseThisProg(void);

int main()
{
  
    int data = 0;
	int num1 = 10, num2 = 5;
	data = printf("test\n");
	printf("%d\n", data);
	printf("%d\n",Add(num1,num2));
	printf("%d\n", Sub(num1, num2));
	printf("%d\n", Multi(num1, num2));
	printf("%lf\n", Div(num1, num2));

	ShowAddResult(3);
    printf("%d\n",ReadNum());
	HowToUseThisProg();
	
	return 0;
}

int Add(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

int Sub(int num1, int num2)
{
	int result = num1 - num2;
	return result;
}
int Multi(int num1, int num2)
{
	int result = num1 * num2;
	return result;
}
double Div(int num1, int num2)
{
	double result = (double)num1 / (double)num2;
	return result;
}

void ShowAddResult(int num)
{
	printf("덧셈결과 출력: %d \n", num);
}

int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

void NoReturnType(int num)
{
	if (num < 0)
		return;
	else printf("양수입니다.\n");
}