#include <stdio.h>
int main(void)
{
    int i = 0;
    char list[256];
    for (int k = 0; k < 256; k++)
    {
        scanf("%c", &list[k]);
        if (list[k] == '#')
        {
            break;
        }
        else
        {
            switch (list[k])
            {
            case '.':
                list[k] = '!';
                i++;
            case '!':
                list[k] = '!';
                list[k + 1] = '!';
                k++;
                i++;
            }
        }
    }
    printf("%s, replace %d times", list, i);
}