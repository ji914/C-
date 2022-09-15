// 20220915_pjh_test3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main(void)
{
	double rad;
	double area;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);

	area = rad*rad*3.1415;
	printf("원의 넓이 : %f \n", area);
	printf("원의 넓이 : %lf \n", area);


	return 0;

}