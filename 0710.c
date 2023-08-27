#include <stdio.h>
#define taxrate1 0.15
#define taxrate2 0.28

int printing(void)
{
    printf("********\n");
    printf("enter number to fit your income:\n");
    printf("1.单身\n");
    printf(".户主\n");
    printf("3.已婚，共有\n");
    printf("4.已婚，离异\n");
    printf("5.退出系统\n");
    printf("********\n");

    return 0;
}

int operating(double income, double changelimit)
{
    double tax = 0;
    if (income <= changelimit)
    {
        tax = income * taxrate1;
    }
    else
    {
        tax = income * taxrate2 + changelimit * (taxrate2 - taxrate1);
    }
    return tax;
}

int main(void)
{
    int switchnum = 0;
begin:
    switchnum = 0;
    printing();
    while (scanf("%d", &switchnum))
    {
        double limit = 0.0;
        if (switchnum == 1)
        {
            limit = 17850;
        }
        else if (switchnum == 2)
        {
            limit = 23900;
        }
        else if (switchnum == 3)
        {
            limit = 29750;
        }
        else if (switchnum == 4)
        {
            limit = 14875;
        }
        else if (switchnum == 5)
        {
            return 0;
        }
        else
        {
            printf("enter correcet number please\n");
            goto begin;
        }
        printf("enter your income:");
        double tureincome = 0;
        scanf("%lf", &tureincome);
        double turetax = operating(tureincome, limit);
        printf("the tax you should pay is %.2f\n", turetax);
        printing();
    }
}