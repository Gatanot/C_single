#include <stdio.h>

int main(void)
{
    int n = 0, sum = 0;
    sum = 0;
    scanf("%d", &n);
    double a[n], t[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &a[i], &t[i]);
        if (((int)(a[i] * t[i])) > sum)
        {
            sum = ((int)(a[i] * t[i]));
        }
    }
    int numlsit[sum];
    for (int i = 0; i < sum; i++)
    {
        numlsit[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; i < t[i]; i++)
        {
            numlsit[((int)a[i] * j)] += 1;
        }
    }

    for (int i = 0; i < sum; i++)
    {
        if (numlsit[i] % 2 == 1)
        {
            printf("%d", i + 1);
            break;
        }
    }

    return 0;
}