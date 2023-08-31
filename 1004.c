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
        26
    };
    printf("%d %d", numlist[9], rang(numlist));
}
int rang(int numlist[])
{
    int mark = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (numlist[j] > numlist[j + 1])
            {
                int temp = numlist[j + 1];
                numlist[j + 1] = numlist[j];
                numlist[j] = temp;
                mark = j;
            }else{
                mark = j+1;
            }
        }
    }
    return mark;
}