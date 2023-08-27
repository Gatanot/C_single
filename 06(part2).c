#include <stdio.h>
int main(void)
{
    // 6.11
    int numarry[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &numarry[i]);
    }
    for (int j = 7; j >= 0; j--)
    {
        printf("%d", numarry[j]);
        if (j == 0)
        {
            printf("\n");
        }
    }

    // 6.12
    printf("enter a nuber:");
    int limit = 0;
    scanf("%d", &limit);
    float start1 = 0.0, start2 = 0.0;
    for (int i = 1; i <= limit; i++)
    {
        start1 = start1 + (1.0 / i);
    }
    printf("%f\n", start1);
    for (int i = 1; i <= limit; i++)
    {
        if ((i % 2) == 1)
        {
            start2 = start2 + (1.0 / i);
        }
        else
        {
            start2 = start2 - (1.0 / i);
        }
    }
    printf("%f\n", start2);

    // 6.13
    int numlist[8];
    for (int i = 0; i < 8; i++)
    {
        int mici = 1;
        for (int j = 0; j < i + 1; j++)
        {
            mici = 2 * mici;
        }
        numlist[i] = mici;
    }
    int i = 7;
    do
    {
        printf("%d\n", numlist[i]);
        i--;
    } while (i >= 0);

    // 6.14
    double arry1[8], arry2[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &arry1[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            arry2[i] = arry1[i];
        }
        else
        {
            arry2[i] = arry1[i] + arry2[i - 1];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("\t %f ", arry1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("\t %f ", arry2[i]);
    }
    printf("\n");

    // 6.15
    //     char charlist[256];
    //     int end = 0;
    //     for (int i = 0; i < 256; i++)
    //    {
    //         scanf("%c", &charlist[i]);
    //        if (charlist[i] == '\n')
    //        {
    //            break;
    //             end = i;
    //         } else {
    //             continue;
    //         }
    //     }
    //     for (int i = 0; i < end; i++)
    //     {
    //         printf("%c", charlist[end-i]);
    //     }

    // 6.16
    double begin1 = 100.0, begin2 = 100.0;
    i = 0;
    while (begin2 <= begin1)
    {
        i++;
        begin1 = 100 * 0.1 + begin1;
        begin2 = begin2 * 1.05;
    }
    printf("%d, %f, %f\n", i, begin1, begin2);

    // 6.17
    double begin3 = 1000000;
    int j = 0;
    for (j = 0; begin3 > 0; j++)
    {
        begin3 = begin3 * 1.08 - 100000;
    }
    printf("%d\n", j);

    // 6.18
    int begin4 = 5;
    for (int i = 0; begin4 < 150; i++)
    {
        begin4 = (begin4 - i) * 2;
        printf("%d ", begin4);
    }

    return 0;
}