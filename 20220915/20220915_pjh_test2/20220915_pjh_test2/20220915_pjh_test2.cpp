// 20220915_pjh_test2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main(void)

{
	
	
	
	
	char ch = 9;
	int inum = 1092;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
	
	unsigned char ui= 255;
	char i = 255;
	printf("ui의 값은 %d 아니다.\n", ui);
	printf("i의 값은 %d 아니다.\n", i);

	return 0;

}
