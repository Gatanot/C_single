#include <stdio.h>
int main(void)
{
    char ch;
    while ((ch = scanf("%c", &ch)) != EOF)
    {
        printf("%c",ch);
    }
    return 0;
}