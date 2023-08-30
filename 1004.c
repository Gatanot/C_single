#include <stdio.h>
int rang(double numlist[]);
int main(void)
{
    double numlist[10] = {
        21,
        324,
        64,
        78,
        32,
        76,
        276,
        23,
        65,
        26
    };
    printf("%d", rang(numlist));
}
int rang(double numlist[])
{
    int mark = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (numlist[i] > numlist[i + 1])
            {
                mark = i;
                int temp = numlist[i + 1];
                numlist[i + 1] = numlist[i];
                numlist[i] = temp;
            }else{
                mark = i+1;
            }
        }
    }
    return mark;
}