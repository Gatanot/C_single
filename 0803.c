#include<stdio.h>
#include<ctype.h>
int main (void)
{
    int ch;
    int lower = 0, upper = 0;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            lower++;
        } else if (isupper(ch))
        {
            upper++;
        }   
    }
    printf("%d, %d", upper, lower);
    return 0;
    
}