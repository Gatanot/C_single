#include <stdio.h>
int main(void)
{
    char list[256];
    int step1 = 0;
    for (step1 = 0; step1 < 256; step1++)
    {
        scanf("%c", &list[step1]);
        if (list[step1] == '#')
        {
            break;
        }
    }
    for (int step2 = 0; step2 < step1; step2++)
    {
        printf("\t%c,%d ", list[step2], list[step2]);
        if ((step2 + 1) % 8 == 0)
        {
            printf("\n");
        }
    }
}