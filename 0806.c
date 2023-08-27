#include <stdio.h>
#include <ctype.h>
char GetFirst(void);
int main(void)
{
    int ch;
    ch = GetFirst();
    putchar(ch);
    return 0;
}

char GetFirst(void)
{
    int ch;
    ch = getchar();
    while ((getchar()) != '\n' && !isspace(ch))
    {
        continue;
    }
    return ch;
}