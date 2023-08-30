#include <stdio.h>
int judge(int numlist[]);
int main(void)
{
    int numlist[9];
    int num = 0, j = 0;
    for (int i = 0; i < 9; i++)
    {
        numlist[i] = (-i);
    }
    while ((num = getchar()) != '\t')
    {
        if (j % 2 == 0)
        {
            numlist[num] = 1;
        }
        else
        {
            numlist[num] = 2;
        }
        j++;
        if (judge(&numlist[0]) == 1)
        {
            printf("xiaoa wins");
            break;
        }
        else if (judge(&numlist[0]) == 2)
        {
            printf("uim wins");
            break;
        }
    }

    return 0;
}
int judge(int numlist[])
{
    int ReturnNum = 0;
    if ((numlist[0] == numlist[1]) && (numlist[1] == numlist[2]))
    {
        ReturnNum = numlist[0];
    }
    else if ((numlist[3] == numlist[4]) && (numlist[4] == numlist[5]))
    {
        ReturnNum = numlist[3];
    }
    else if ((numlist[6] == numlist[7]) && (numlist[7] == numlist[8]))
    {
        ReturnNum = numlist[6];
    }
    else if ((numlist[0] == numlist[4]) && (numlist[4] == numlist[8]))
    {
        ReturnNum = numlist[0];
    }
    else if ((numlist[2] == numlist[4]) && (numlist[4] == numlist[6]))
    {
        ReturnNum = numlist[2];
    }
    else if ((numlist[0] == numlist[3]) && (numlist[3] == numlist[6]))
    {
        ReturnNum = numlist[0];
    }
    else if ((numlist[1] == numlist[4]) && (numlist[4] == numlist[7]))
    {
        ReturnNum = numlist[1];
    }
    else if ((numlist[2] == numlist[5]) && (numlist[5] == numlist[8]))
    {
        ReturnNum = numlist[2];
    }

    return ReturnNum;
}