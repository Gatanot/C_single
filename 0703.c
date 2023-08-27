#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;
    int sum1 = 0, sum2 = 0;
    int list[256];
    for (int k = 0; k < 256; k++)
    {
        scanf("%d", &list[k]);
        if (list[k] == 0)
        {
            break;
        }
        else if (list[k] % 2 == 1)
        {
            i++;
            sum1 = sum1 + list[k];
        }
        else
        {
            j++;
            sum2 = sum2 + list[k];
        }
    }
    printf("奇数个数: %d \t平均值: %d\n", i, sum1 / i);
    printf("偶数个数: %d \t平均值: %d\n", j, sum2 / j);
}