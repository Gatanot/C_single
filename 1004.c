#include <stdio.h>

int main(void)
{
    int ch = 0, leftcount = 0, rightcount = 0;
    while ((ch = getchar()) != '@')
    {
        if (ch == '(')
        {
            leftcount += 1;
        }
        else if (ch == ')')
        {
            rightcount += 1;
        }
    }
    if (leftcount == rightcount)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
