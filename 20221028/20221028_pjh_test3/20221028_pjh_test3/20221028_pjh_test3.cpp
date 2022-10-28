#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES
#include <math.h>

double RAD2DEG(double radian)
{
    return radian * 180.0 / M_PI;
}

double DEG2RAD(double degree)
{
    return degree / 180.0 * M_PI;
}


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

int round_int(double input)
{
    /*
    int result;
    result = (int)(input + 0.5);

    return result;
    */
    return (int)(input + 0.5);
}

double first_cosin_rule(double a, double b, double deg_A, double deg_B)
{
    double c;
    c = a * cos(DEG2RAD(deg_B)) + b * cos(DEG2RAD(deg_A));
    return c;
}

double second_cosin_rule(double a, double b, double deg_C)
{
    double c;
    c = sqrt(a * a + b * b - 2 * a * b * cos(DEG2RAD(deg_C)));
    return c;
}


int main(void)
{
    int a1, b1, c1;
    double degree = 0.0;

    a1 = b1 = c1 = 0;
    a1 = 3; b1 = 4;
    initialization();
    c1 = add_int_input(a1, b1);
    printf("%d + %d = %d \n\n", a1, b1, c1);

    c1 = subtract_int_input(a1, b1);
    printf("%d - %d = %d \n\n", a1, b1, c1);

    c1 = multi_int_input(a1, b1);
    printf("%d * %d = %d \n\n", a1, b1, c1);

    printf("%d / %d = %lf \n\n", a1, b1, devide_int_input(a1, b1));


    printf("[%d : %d] max : %d \n\n", a1, b1, max2_int(a1, b1));

    printf("[%d : %d] min : %d \n\n", a1, b1, min2_int(a1, b1));

    printf("round(%.1lf) = %d \n\n ", 3.65, round_int(3.65));

    printf("각도를 입력하세요. ");
    scanf("%lf", &degree);

    printf("%lf (degree) -> %lf(radian) \n\n", degree, DEG2RAD(degree));

    printf("%lf (radian) -> %lf(degree) \n\n", DEG2RAD(degree), RAD2DEG(DEG2RAD(degree)));
    
    double B = 60; double C = 60; double b = 6; double c = 6;
    printf("%lf \n\n", first_cosin_rule(b, c, B, C));
    
    printf("sqrt(%lf) = %lf \n\n", 9.0, sqrt(9.0));


    printf("%lf \n\n", second_cosin_rule(3, 4, 30));
       

    return 1;
}


