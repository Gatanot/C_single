#include <stdio.h>
#include <string.h>

float COMPUTING(float firnum, float secnum)
{

    float result = (firnum - secnum) / (firnum * secnum);
    return result;
}

int main(void)
{
    // 6.1
    char letters[26];
    for (int i = 65; i < 92; i++)
    {
        letters[i - 65] = i;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c", letters[i]);
    }
    printf("\n");

    // 6.2
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("$");
            if (j == i)
            {
                printf("\n");
            }
        }
    }

    // 6.3
    for (int i = 6; i >= 0; i--)
    {
        for (int j = 6; j >= i; j--)
        {
            printf("%c", j + 65);
            if (j == i)
            {
                printf("\n");
            }
        }
    }

    // 6.4
    int xiuzheng = 0;
    for (int i = 1; i < 7; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + xiuzheng + j);
            if (j == i)
            {
                printf("\n");
            }
        }
        xiuzheng = xiuzheng + i;
    }

    // 6.5
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (i + 1); k++)
        {
            printf("%c", 65 + k);
        }
        for (int l = 0; l < i; l++)
        {
            printf("%c", 64 + i - l);
        }
        printf("\n");
    }

    // 6.6
    int beggin = 0, end = 0;
    printf("enter the beggin number and end number:");
    scanf("%d %d", &beggin, &end);
    for (int i = beggin; i <= end; i++)
    {
        int num = i;
        printf("%d %d %d\n", num, num * num, num * num * num);
    }

    // 6.7
    printf("enter a word:");
    char word[40];
    scanf("%s", word);
    int length = strlen(word);
    for (int i = length; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    // 6.8
    printf("enter two numbers:");
    float num1 = 0.0, num2 = 0.0;
    while ((scanf("%f %f", &num1, &num2)))
    {
        printf("%f\n", (num1 - num2) / (num1 * num2));
        printf("enter two nembers or any nonnumber-letter to quit:");
    }

    // 6.9
    printf("enter two numbers:");
    float num3 = 0.0, num4 = 0.0;
    while ((scanf("%f %f", &num3, &num4)))
    {
        float num5 = COMPUTING(num3, num4);
        printf("%f\n", num5);
        printf("enter two nembers or any nonnumber-letter to quit:");
    }

    // 6.10
    printf("enter lower and upper integer limits:");
    int LowerLimit = 0, UpperLimit = 0;
    while (scanf("%d %d", &LowerLimit, &UpperLimit))
    {
        int sum = 0;
        if (LowerLimit < UpperLimit)
        {
            for (int i = LowerLimit; i <= UpperLimit; i++)
            {
                sum = sum + (i * i);
            }
            printf("sums of squares from %d to %d is %d\n", LowerLimit, UpperLimit, sum);
        }
        else
        {
            printf("Done");
            break;
        }
        printf("enter lower and upper integer limits:");
    }

    return 0;
}