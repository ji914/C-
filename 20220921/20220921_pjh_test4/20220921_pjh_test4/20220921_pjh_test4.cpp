// 20220921_pjh_test4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
 
int main()
{
	int a = 0;

	printf("정수를 입력하세요. ");
	scanf("%d", &a);
	printf("입력된 정수의 10진수는 %d 입니다.\n ", a);
	printf("입력된 정수의 16진수는 %x 입니다.\n ", a);
	printf("입력된 정수의 8진수는 %o 입니다.\n ", a);


	return 0;
}