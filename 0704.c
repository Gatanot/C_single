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
        else if (list[k] == '.')
        {
            list[k] = '!';
            i++;
        }
        else if (list[k] == '!')
        {
            list[k] = '!';
            list[k + 1] = '!';
            k++;
            i++;
        }
    }
    printf("%s, replace %d times", list, i);
}