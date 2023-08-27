#include <stdio.h>

int main(void)
{
    int num = 0, printing = 0;
    scanf("%d", &num);

    if (num == 0)
    {
        printing = num;
    }
    else
    {
        int numlist[num];

        if (num == 1 || num == 2)
        {
            numlist[num - 1] = 1;
            num = numlist[num - 1];
        }
        else
        {

            numlist[0] = 1, numlist[1] = 1;
            for (int i = 2; i < num; i++)
            {
                numlist[i] = numlist[i - 1] + numlist[i - 2];
                printing = numlist[i];
            }
        }
    }
    printf("%d.00", printing);
    return 0;
}