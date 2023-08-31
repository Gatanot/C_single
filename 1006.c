#include <stdio.h>
int inverse(int numlist[], int num);
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
    inverse(numlist, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numlist[i]);
    }
    
}
int inverse(int numlist[], int num)
{
    for (int i = 0; i < num / 2; i++)
    {
        int temp = numlist[i];
        numlist[i] = numlist[num - 1 - i];
        numlist[num - 1 - i] = temp;
    }
    return 0;
}