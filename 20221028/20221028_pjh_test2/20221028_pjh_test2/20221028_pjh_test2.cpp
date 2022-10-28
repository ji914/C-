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
   // printf("%d + %d = %d \n\n", a, b, c);
}
int add_int(void)
{
    int a, b, c;
    a = b = c = 0;
    a = 1; b = 2;
    c = a + b;
   // printf("%d + %d = %d \n\n", a, b, c);
    return c;
}

int add_int_input(int a, int b)
{
    int c;
    c = a + b;

    return c;
}

int subtract_int_input(int a, int b)
{
    int c;
    c = a - b;

    return c;
}

int multi_int_input(int a, int b)
{
    int c;
    c = a * b;

    return c;
}

double devide_int_input(int a, int b)
{
    double c;
    c = (double)a / (double)b;

    return c;
}


int min2_int(int a, int b)
{
    int c;
    if (a > b)
    {
        c = b;
    }
    else
    {
        c = a;
    }

    return c;
}

int max2_int(int a, int b)
{
    int c;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }

    return c;
}

int round(double input)
{
    /*
    int result;
    result = (int)(input + 0.5);
    
    return result;
    */
    return (int)(input + 0.5);
}

int main(void)
{
    int a1, b1, c1;
    a1 = b1 = c1 = 0;
    a1 = 3; b1 = 4;
    initialization();
    c1 = add_int_input(a1, b1);
    printf("%d + %d = %d \n\n", a1, b1, c1 );

    c1 = subtract_int_input(a1, b1);
    printf("%d - %d = %d \n\n", a1, b1, c1);
   
    c1 = multi_int_input(a1, b1);
    printf("%d * %d = %d \n\n", a1, b1, c1);

    printf("%d / %d = %lf \n\n", a1, b1, devide_int_input(a1, b1));
    

    printf("[%d : %d] max : %d \n\n", a1, b1, max2_int(a1, b1));
    
    printf("[%d : %d] min : %d \n\n", a1, b1, min2_int(a1, b1));

    printf("round(%.1lf) = %d \n\n ", 3.65, round(3.65));

    return 1;
}






/*
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
    // printf("%d + %d = %d \n\n", a, b, c);
}
int add_int(void)
{
    int a, b, c;
    a = b = c = 0;
    a = 1; b = 2;
    c = a + b;
    // printf("%d + %d = %d \n\n", a, b, c);
    return c;
}

int add_int_input(int a, int b)
{
    int c;
    c = a + b;

    return c;
}

int main(void)
{
    int a1, b1, c1;
    a1 = b1 = c1 = 0;
    a1 = 3; b1 = 4;
    initialization();
    c1 = add_int_input(a1, b1);
    printf("%d + %d = %d \n\n", a1, b1, c1);


    return 1;
}
*/