#include <stdio.h>
#include <math.h>
int main(void)
{
    int i = 0, j = 0, k = 0;
    char list[256];
    for (int step = 0; step < 256; step++)
    {
        scanf("%c", &list[step]);
        if (list[step] == '#')
        {
            break;
        }
        else
        {
            if (list[step] == ' ')
            {
                i++;
            }
            else if (list[step] == '\n')
            {
                j++;
            }
            else
            {
                k++;
            }
        }
    }
    printf("%d, %d, %d, ", i, j, k);
    return 0;

    return 0;
}