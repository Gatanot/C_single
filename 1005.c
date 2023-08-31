#include <stdio.h>
int rang(int numlist[]);
int main(void)
{
    int numlist[10] = {
        21,
        324,
        64,
        78,
        32,
        76,
        276,
        23,
        65,
        26};
        rang(numlist);
    printf("%d", numlist[9]-numlist[0]4);
}
int rang(int numlist[])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (numlist[j] > numlist[j + 1])
            {
                int temp = numlist[j + 1];
                numlist[j + 1] = numlist[j];
                numlist[j] = temp;
            }
        }
    }
    return 0;
}