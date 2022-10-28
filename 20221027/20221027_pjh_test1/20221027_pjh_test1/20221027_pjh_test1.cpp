#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

void initialization(void)
{
    printf("--------------------------------------- \n\n");
    printf("Fuction 만들기 \n");
    printf("print문을 활용한 함수를 만들어 봅니다.\n\n");
    printf("--------------------------------------- \n\n");

}

void add_void(void)
{
    int a, b, c;
    a = b = c = 0;
    a = 1; b = 2;
    c = a + b;
    printf("%d + %d = %d \n\n", a, b, c);
}
int add_int(void)
{
    int a, b, c;   
    a = b = c = 0;
    a = 1; b = 2;
    c = a + b;
    printf("%d + %d = %d \n\n", a, b, c);
    return c;
}
int main(void)
{
    initialization();
    printf("덧셈의 결과 값은 = %d\n", add()  );
    

    return 1;
}



