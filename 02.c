#include <stdio.h>

void jolly(void)
{
    printf("For he's a jolly good yellow\n");
}

void deny(void)
{
    printf("which nobody can deny\n");
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

void smile(void)
{
    printf("Smile!");
}

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
int main()
{
    // 2.1
    printf("Fname Lname\n");
    printf("Fname\nLnamw");
    printf("Fname ");
    printf("Lname\n");

    // 2.2
    printf("name, adress");

    // 2.3
    int year = 20;
    printf("num of day is %d\n", year * 365);

    // 2.4
    jolly();
    jolly();
    jolly();
    deny();

    // 2.5
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");

    // 2.6
    int toes = 10;
    printf("%d, %d, %d\n", toes, toes * 2, toes ^ 2);

    // 2.7
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    // 2.8
    printf("starting now:\n");
    one_three();
    printf("done!");

    return 0;
}
