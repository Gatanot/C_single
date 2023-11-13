#include <stdio.h>

int main(void)
{
    char ch[10000];
    char cha = 'a';
    int i = 0;
    while (cha = getchar())
    {
        ch[i] = cha;
        i++;
    }
    i--;
    for (; i >= 0; i--)
    {
        putchar(ch[i]);
    }

    return 0;
}