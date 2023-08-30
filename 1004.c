#include <stdio.h>

void numcount(int num, int *n);
int main(void)
{
    int m = 0, n = 0;
    int numlist[10] = {0};
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        numcount(i, &numlist);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numlist[i]);
    }
    return 0;
}

void numcount(int num, int *n)
{
    while (num > 0)
    {
        *(n+(num % 10)) += 1;
        num /= 10;
    }
}