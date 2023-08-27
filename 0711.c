#include <stdio.h>
#define a_press 2.05
#define b_press 1.15
#define c_press 1.09
int sprinting(void)
{
    printf("*****\n");
    printf("choose the vegetable youwang\n");
    printf("a:洋蓟\nb:甜菜\nc:胡萝卜\nq:退出\n");
    printf("*****\n");
    return 0;
}
int operating(double weight[], double a, double b, double c)
{
    double totalpress = weight[0] * a + weight[1] * b + weight[2] * c;
    double yb = 0;
    printf("订购的重量:\n洋蓟:%.2f\nb:甜菜:%.2f\nc:胡萝卜%.2f\n", weight[0], weight[1], weight[3]);
    printf("订购的蔬菜费用：%.2f", totalpress);
    if (totalpress >= 100)
    {
        totalpress = totalpress * 0.95;
        printf("折扣%5,订单总费用%.2f", totalpress);
    }
    else
    {
        printf("折扣0,订单总费用%.2f", totalpress);
    }
    if (weight[0] + weight[1] + weight[2] <= 5)
    {
        yb = 6.5;
        printf("运费及包装费6.5");
    }
    else if (weight[0] + weight[1] + weight[2] <= 20)
    {
        yb = 14;
        printf("运费及包装费14");
    }
    else
    {
        yb = (weight[0] + weight[1] + weight[2] - 20) * 0.5 + 14;
        printf("运费及包装费%.2f", yb);
    }
    printf("费用总额:%.2f", totalpress + yb);
    return 0;
}
int main(void)
{
    char switchchar;
Begin:
    switchchar = '0';
    sprinting();
    double weight[3];
    double weight1 = 0;
    while (scanf("%s", &switchchar))
    {
        switch (switchchar)
        {
        case 'a':
            printf("enter the weight you want");
            scanf("%lf", &weight1);
            weight[0] = weight[0] + weight1;
        case 'b':
            printf("enter the weight you want");
            scanf("%lf", &weight1);
            weight[1] = weight[1] + weight1;
        case 'c':
            printf("enter the weight you want");
            scanf("%lf", &weight1);
            weight[2] = weight[2] + weight1;
        case 'q':
            break;
        default:
            goto Begin;
        }
    }
    operating(weight, a_press, b_press, c_press);
}