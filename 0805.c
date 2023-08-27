#include <stdio.h>
int main(void)
{
    int guess = 50;
    const int LowerLimit = 1, UpperLimit = 100;
    printf("pick up an integer from 1 to 100. i will guess it");
    printf("\nresponse b for bigger, s for smaller, and y for yes\n");
    printf("is that %d?\n", guess);
    char response;
    while ((response = getchar()) != 'y')
    {
        if (response == 'b')
        {
            guess = (guess + LowerLimit) / 2;
            printf("is it %d?\n", guess);
        }
        else if (response == 's')
        {
            guess = (guess + UpperLimit) / 2;
            printf("is it %d?\n", guess);
        } else
        {
            printf("enter right letter please\n");
        }
        
        while (getchar() != '\n')
        {
            continue;
        }
    }
    return 0;
}