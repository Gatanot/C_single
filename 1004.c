#include <stdio.h>

int numcount(char ch);
int main(void)
{
    int ch = 0, sum = 0;
    while ((ch = getchar()) != '\t')
    {
        sum += numcount((char)ch)
    }

    printf("%d", sum);

    return 0;
}

int numcount(char ch)
{
    int num = 0;
    if (ch == 'a' || ch == 'd' || ch == 'g' || ch == 'j' || ch == 'm' || ch == 'p' || ch == 't' || ch == 'w' || ch == ' ')
    {
        num = 1;
    }
    else if (ch == 'b' || ch == 'e' || ch == 'h' || ch == 'k' || ch == 'n' || ch == 'q' || ch == 'u' || ch == 'x')
    {
        num = 2;
    }
    else if (ch == 'c' || ch == 'f' || ch == 'i' || ch == 'l' || ch == 'o' || ch == 'q' || ch == 'v' || ch == 'y')
    {
        num = 3
    }
    else if (ch == 's' || ch == 'z')
    {
        num = 4;
    }

    return num;
}