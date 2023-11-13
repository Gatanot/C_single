#include <stdio.h>
#include <stdlib.h>
int numcut(int *numlist, int n, int k);

int DayCount(int a, int b);
void printing(int a);
int main()
{
<<<<<<< HEAD
    int n, k;
    scanf("%d %d", &n, &k);
    int numlist[n];
    int num;
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        numlist[n - 1 - i] = num % 10;
        num /= 10;
    }
    printf("%d", numcut(numlist, n, k));
=======
    int numlist[365][2];
    int count = 0;
    for (count = 0; count < 365; count++)
    {
        scanf("%d %d", &numlist[count][0], &numlist[count][1]);
        if (numlist[count][0] == 0)
        {
            break;
        }
    }
    for (int i = 0; i < count; i++)
    {
        int num = DayCount(numlist[i][0], numlist[i][1]);
        if (num >= 364 || num == 0)
        {
            printf("-1\n");
        }
        else
        {
            printing(num);
            printf("\n");
        }
    }
>>>>>>> 99e635ecbba6ed8aed9ee9d7b341a1dc0b3126be

    return 0;
}

<<<<<<< HEAD
int numcut(int *numlist, int n, int k)
{
    int mark = 0;
    int a = 0, b = 0;
    if (k == 2)
    {
        for (int i = 0; i < n - 1; i++)
        {
            a = 0, b = 0;
            for (int j = 0; j <= i; j++)
            {
                a = a * 10;
                a += numlist[j];
            }
            for (int k = i + 1; k < n; k++)
            {
                b = b * 10;
                b += numlist[k];
            }
            if (mark < a * b)
            {
                mark = a * b;
            }
        }
        return mark;
    }
    else
    {
        for (int i = 0; i < n + 1 - k; i++)
        {
            a = 0, b = 0;
            for (int j = 0; j <= i; j++)
            {
                a *= 10;
                a += numlist[j];
            }
            b = numcut(&numlist[i + 1], n - i, k - 1);
            if (mark < a * b)
            {
                mark = a * b;
            }
        }
        return mark;
=======
int DayCount(int a, int b)
{
    int num = 0;
    switch (a)
    {
    case 1:
        num = 0 + b;
        break;
    case 2:
        num = 31 + b;
        break;
    case 3:
        num = 59 + b;
        break;
    case 4:
        num = 90 + b;
        break;
    case 5:
        num = 120 + b;
        break;
    case 6:
        num = 151 + b;
        break;
    case 7:
        num = 181 + b;
        break;
    case 8:
        num = 212 + b;
        break;
    case 9:
        num = 243 + b;
        break;
    case 10:
        num = 273 + b;
        break;
    case 11:
        num = 304 + b;
        break;
    case 12:
        num = 334 + b;
        break;
    default:
        num = 0;
        break;
    }
    if (b < 1 || b > 31)
    {
        num = 0;
    }

    return num;
}

void printing(int a)
{
    int b = a % 7;
    switch (b)
    {
    case 0:
        printf("6");
        break;
    case 1:
        printf("5");
        break;
    case 2:
        printf("4");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("2");
        break;
    case 5:
        printf("1");
        break;
    case 6:
        printf("7");
        break;
    default:
        break;
>>>>>>> 99e635ecbba6ed8aed9ee9d7b341a1dc0b3126be
    }
}