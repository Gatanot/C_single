#include <stdio.h>
#include <stdlib.h>
int numcut(int *numlist, int n, int k);

int DayCount(int a, int b);
void printing(int a);
int main()
{
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

    return 0;
}

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
    }
}