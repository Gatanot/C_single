#include <stdio.h>

int main()
{
    // 3.2
    printf("输入一个ASCII:\n");
    int ascii = 0;
    scanf("%d", &ascii);
    printf("%c", ascii);

    // 3.3
    printf("\n");
    printf("Startlrf by the sutdden sound, Aslly sound,\n");
    printf("\"By the Great Pumpkin, what was taht!\"");
    printf("\n");

    // 3.4
    float num = 0.0;
    printf("enter a floating-point value:\n");
    scanf("%f", &num);
    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %16f \n", num);

    // 3.5
    printf("enter your age: \n");
    float age = 0.0;
    scanf("%f", &age);
    printf("your second-count age is %f\n", age * 3.156 * (10 ^ 7));

    // 3.6
    printf("enter the weight of water: \n");
    float water = 0;
    scanf("%f", &water);
    printf("%f, %f\n", water / 950, water / 3 * (10 ^ 23));

    // 3.7
    printf("enter your length in inch: \n");
    int inch = 0;
    scanf("%d", &inch);
    printf("your longth is %f in cm", inch * 2.54);

    // 3.8
    float cup = 0.0;
    printf("enter your cup number please");
    scanf("%f", &cup);
    printf("your cup number is: \n %f in pt\n %f in ss\n %f in ts\n %f in ts\n", cup / 2, cup * 8, cup * 16, cup * 48);

    return 0;
}