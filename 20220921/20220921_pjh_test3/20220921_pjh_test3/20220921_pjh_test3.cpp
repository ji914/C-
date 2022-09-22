// 20220921_pjh_test3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	double diameter = 0.0;
	double area = 0.0;

	printf("지름을 입력하세요.");
	
	scanf("%lf", &diameter);

	printf("입력된 지름은 %lf 입니다.\n", diameter);
	area = diameter * diameter * 3.14159 / 4.0;

	printf("원의 면적은 %lf 입니다.\n\n\n", area);
	
	return 0;
}