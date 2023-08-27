#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    char ch;
    char pre;
    long n_chars = 0, n_lines = 0, n_words = 0;
    int p_lines = 0;
    bool inowrd = false;
    printf("eter text to be analyzed:");
    pre = '\n';
    while ((ch = getchar()) != EOF)
    {
        n_chars++;
        if (ch == '\n')
        {
            n_lines++;
        }
        if (!isspace(ch) && !inowrd)
        {
            inowrd = true;
            n_words++;
        }
        if (isspace(ch) && inowrd)
        {
            inowrd = false;
            pre = ch;
        }
    }
    if (pre != '\n')
    {
        p_lines = 1;
    }

    printf("%ld, %ld, %ld, ", n_chars, n_words, n_lines);
    printf("%d", p_lines);

    return 0;
}