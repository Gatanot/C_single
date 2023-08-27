#include <stdio.h>
#include <ctype.h>
// 09.01
double min(double x, double y);
// 09.02
void printing02(char ch, int i, int j);
// 09.03
void printing03(char ch, int i, int j);
// 09.04
double HarmonicMean(double a, double b);
// 09.05
void larger_of(double *x, double *y);
// 09.06
void granding(double *x, double *y, double *z);
// 09.07
int CharReturn(char ch);
// 09.08
double power(int a, int b);
// 09.10
int To_Base_N(int a, int b);
// 09.11
int Fibonacci(int n);

int main(void)
{
    // 09.01test
    double x = 1.00, y = 2.00;
    printf("%f\n", min(x, y));
    // 09.02test
    char ch = 'a';
    int i = 2, j = 3;
    printing02(ch, i, j);
    putchar('\n');
    // 09.03test
    char ch2 = 'b';
    int i2 = 3, j2 = 4;
    printing03(ch2, i2, j2);
    putchar('\n');
    // 09.04test
    int a = 2, b = 3;
    printf("%f", HarmonicMean(a, b));
    putchar('\n');
    // 09.05test
    double x2 = 4.0, y2 = 3.0;
    larger_of(&x2, &y2);
    printf("%f %f", x2, y2);
    putchar('\n');
    // 09.06test
    double num1 = 9.0, num2 = 7.0, num3 = 3.0;
    granding(&num1, &num2, &num3);
    printf("%f %f %f", num1, num2, num3);
    putchar('\n');
    // 09.07test
    char testchar = 'D';
    printf("%d", CharReturn(testchar));
    // 09.08test
    int num81 = 0, num82 = 0;
    printf("%f\n", power(num81, num82));
    num81 = 0, num82 = 1;
    printf("%f\n", power(num81, num82));
    num81 = 2, num82 = 2;
    printf("%f\n", power(num81, num82));
    num81 = 2, num82 = -2;
    printf("%f\n", power(num81, num82));
    // 09.10test
    printf("%d", To_Base_N(9, 3));
    putchar('\n');
    // 09.11test
    printf("%d\n", Fibonacci(1));
    printf("%d\n", Fibonacci(2));
    printf("%d\n", Fibonacci(3));
    printf("%d\n", Fibonacci(10));
    return 0;
}

double min(double x, double y)
{
    double ReturnNum = 0.0;
    if (x >= y)
    {
        ReturnNum = x;
    }
    else
    {
        ReturnNum = y;
    }

    return ReturnNum;
}

void printing02(char ch, int i, int j)
{
    for (int step1 = 0; step1 < j; step1++)
    {
        for (int step2 = 0; step2 < i; step2++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

void printing03(char ch, int i, int j)
{
    for (int step1 = 0; step1 < j; step1++)
    {
        for (int step2 = 0; step2 < i; step2++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

double HarmonicMean(double a, double b)
{
    double ReturnNum = 0.0;
    ReturnNum = 1 / ((1 / a) + (1 / b));
    return ReturnNum;
}

void larger_of(double *x, double *y)
{
    if (*x >= *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}

void granding(double *x, double *y, double *z)
{
    double a = 0.0;
    if (*x >= *y)
    {
        a = *y, *y = *x, *x = a;
    }
    if (*y >= *z)
    {
        a = *z, *z = *y, *y = a;
        if (*x >= *y)
        {
            a = *y, *y = *x, *x = a;
        }
    }
}

int CharReturn(char ch)
{
    int ReturnNum = 0;
    if (islower(ch))
    {
        ReturnNum = (int)ch - 96;
    }
    else if (isupper(ch))
    {
        ReturnNum = (int)ch - 64;
    }
    else
    {
        ReturnNum = -1;
    }

    return ReturnNum;
}

double power(int a, int b)
{
    double ReturnNum = 1;
    if (a == 0)
    {
        if (b == 0)
        {
            printf("0^0 is undefined\n");
            ReturnNum = 1;
        }
        ReturnNum = 0;
    }
    else
    {
        if (b == 0)
        {
            ReturnNum = 1;
        }
        else if (b > 0)
        {
            for (int step1 = 0; step1 < b; step1++)
            {
                ReturnNum *= b;
            }
        }
        else
        {
            for (int step2 = 0; step2 < (-b); step2++)
            {
                ReturnNum /= (-b);
            }
        }
    }
    return ReturnNum;
}

int To_Base_N(int a, int b)
{
    int yushu = 0, ReturnNum = 0, chengshu = 1;
    yushu = a % b;
    ReturnNum = yushu;
    a -= yushu;
    a = a / b;
    for (int i = 0; a > 0; i++)
    {
        chengshu = chengshu * 10;
        yushu = a % b;
        ReturnNum = yushu * chengshu + ReturnNum;
        a -= yushu;
        a /= b;
    }
    return ReturnNum;
}

int Fibonacci(int n)
{
    int Num = 0;
    if (n <= 2)
    {
        Num = 1;
    }
    else
    {
        int num[n];
        num[0] = 1, num[1] = 1;
        for (int i = 2; i < n; i++)
        {
            num[i] = num[i - 1] + num[i - 2];
        }
        Num = num[n - 1];
    }
    return Num;
}