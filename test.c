#include <stdio.h>

int main(void)
{
    int m, n;
    int sum = 0;
    scanf("%d %d", &m, &n);
    int numlist[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &numlist[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += numlist[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += numlist[m - 1][i];
    }
    for (int i = 1; i < m - 1; i++)
    {
        sum += numlist[i][0];
    }
    for (int i = 1; i < m - 1; i++)
    {
        sum += numlist[i][n - 1];
    }

    printf("%d", sum);

    return 0;
}
