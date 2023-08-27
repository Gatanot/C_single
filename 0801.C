#include<stdio.h>
int main(void)
{
    int charcount = 0;
    while ((charcount = getchar()) != '#')
    {
        charcount++;
    }
    printf("%d", charcount);

    return 0;
}