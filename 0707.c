#include <stdio.h>
#define basicwage 10.00
#define overpayrate 1.5
#define taxrate1 0.15
#define taxrate2 0.2
#define taxrate3 0.25

int main(void)
{
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

    printf("total wage: %f\n", TotalWage);
    printf("tax you should pay: %f\n", Tax);
    printf("your total income: %f", Income);

    return 0;
}