#include <stdio.h>
#define overpayrate 1.5
#define taxrate1 0.15
#define taxrate2 0.2
#define taxrate3 0.25

int COMPUTING(char num);
int printing(void);

int main(void)
{
    printing();
    int numswitch = 0;
    while (numswitch = getchar())
    {
        if (numswitch == 'q')
        {
            break;
        }
        else if (numswitch == 'a' || numswitch == 'b' || numswitch == 'c' || numswitch == 'd')
        {
            COMPUTING(numswitch);
            printing();
        }
        else if (numswitch != '\n')
        {
            printf("enter correct letter please\n");
            printing();
        }
    }
    return 0;
}

int COMPUTING(char num)
{
    float basicwage = 0;
    if (num == 'a')
    {
        basicwage = 8.75;
    }
    else if (num == 'b')
    {
        basicwage = 9.33;
    }
    else if (num == 'c')
    {
        basicwage = 10.00;
    }
    else if (num == 'd')
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
    printf("a) $8.75/hr");
    printf("\tb) $9.33/hr\n");
    printf("c) $10.00/hr");
    printf("\td) $11.2/hr\n");
    printf("q) quit\n");
    printf("********\n");
    return 0;
}