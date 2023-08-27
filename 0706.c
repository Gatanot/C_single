#include <stdio.h>
int main(void)
{
    char list[256];
    int count = 0;
    for (int i = 1; i < 256; i++)
    {
        scanf("%c", &list[i]);
        if (list[i] == '#')
        {
            break;
        }
        else if (list[i] == 'i' && list[i - 1] == 'e')
        {
            count++;
        }
    }
    printf("%d", count);
}