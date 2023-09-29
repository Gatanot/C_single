#include <stdio.h>

int main(void)
{
    double r;
    r /= 2;
    scanf("%lf", &r);
    printf("%.5lf", (4* 3.14 * r * r * r)/3);
    return 0;
}
