#include <stdio.h>

int main(void)
{

    int newch = 0, n = 0, count = 1, mark = 0;
    int numlist[40000] = {0};
    while ((newch = getchar()) != '\n')
    {
        numlist[++n] = newch;
    }

    mark = n;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            newch = getchar();
            if (newch == '\n')
            {
                continue;
            }
            else
            {
                numlist[++mark] = newch;
            }
        }
    }

    printf("%d ", n);
    for (int i = 0; i < mark - 1; i++)
    {

        if (i == mark - 2)
        {
            if (numlist[i] == numlist[i + 1])
            {
                count++;
                printf("%d ", count);
            }
            else
            {
                printf("%d ", count);
                printf("1");
                count = 1;
            }
        }
        else
        {
            if (numlist[i] == numlist[i + 1])
            {
                count++;
            }
            else
            {
                printf("%d ", count);
                count = 1;
            }
        }
    }

    return 0;
}