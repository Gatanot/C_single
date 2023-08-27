#include <stdio.h>
int PRIMNUMBERCOMPUTING(int num)
{
    int retrnnum = 1;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0 && i != 1)
        {
            retrnnum = 0;
        }
    }

    return retrnnum;
}

int main(void)
{
    int limit = 0;
    scanf("%d", &limit);
    for (int step = 2; step <= limit; step++)
    {
        if (PRIMNUMBERCOMPUTING(step))
        {
            printf("%d\n", step);
        }
    }

    return 0;
}