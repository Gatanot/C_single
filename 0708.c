#include <stdio.h>
#define overpayrate 1.5
#define taxrate1 0.15
#define taxrate2 0.2
#define taxrate3 0.25

int COMPUTING(int num)
{
    float basicwage = 0;
    if (num == 1)
    {
        basicwage = 8.75;
    }
    else if (num == 2)
    {
        basicwage = 9.33;
    }
    else if (num == 3)
    {
        basicwage = 10.00;
    }
    else if (num == 4)
    {
        basicwage = 11.20;
    }
    printf("enter your working hours:");
    int WorkingHour = 0;
    double TotalWage = 0.0, Tax = 0.0, Income = 0.0;
    scanf("%d", &WorkingHour);
    if (WorkingHour <= 40)
    {
        TotalWage = WorkingHour * basicwage;
    }
    else
    {
        TotalWage = (1 - overpayrate) * 40 * basicwage + WorkingHour * overpayrate * basicwage;
    }

    if (TotalWage <= 300)
    {
        Tax = TotalWage * taxrate1;
    }
    else if (300 < TotalWage && TotalWage <= 450)
    {
        Tax = TotalWage * taxrate2 + 300 * (taxrate1 - taxrate2);
    }
    else
    {
        Tax = (TotalWage - 450) * taxrate3 + 75;
    }

    Income = TotalWage - Tax;

    printf("total wage: %.2f\n", TotalWage);
    printf("tax you should pay: %.2f\n", Tax);
    printf("your total income: %.2f\n", Income);

    return 0;
}

int printing(void)
{
    printf("********\n");
    printf("enter the number match your wage");
    printf("enter your working hours:\n");
    printf("1) $8.75/hr");
    printf("\t2) $9.33/hr\n");
    printf("3) $10.00/hr");
    printf("\t4) $11.2/hr\n");
    printf("5) quit\n");
    printf("********\n");
    return 0;
}

int main(void)
{
    printing();
    int numswitch = 0;
    while (scanf("%d", &numswitch))
    {
        if (numswitch == 5)
        {
            break;
        }
        else if (numswitch == 1 || numswitch == 2 || numswitch == 3 || numswitch == 4)
        {
            COMPUTING(numswitch);
            printing();
        }
        else
        {
            printf("enter correct number please\n");
            printing();
        }
    }
    return 0;
}