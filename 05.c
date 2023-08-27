#include <stdio.h>
#define h_to_min 60
#define daytoweak 7

double trinity(double i)
{
    double j = i * i * i;
    return j;
}

int TENMPERATURES(double tem)
{
    const double huashitosheshi_xishu = 5.0 / 9.0;
    const double huashitosheshi_xiuzhengxiang = -32.0;
    const double sheshitokaishi_xiuzhengxiang = 273.16;
    double sheshi = huashitosheshi_xishu * (tem + huashitosheshi_xiuzhengxiang);
    double kaishi = sheshi + sheshitokaishi_xiuzhengxiang;
    int reeturn_num = 0;
}

int main(void)
{
    // 5.1
    int time = 1;
    printf("enter your time in min: ");
    while (scanf("%d", &time))
    {
        if ((time > 0))
        {
            printf("your time is %dh and %d min\n", time / (h_to_min), time % (h_to_min));
            printf("enter your time in min: ");
        }
        else
        {
            break;
        }
    }

    // 5.2
    int number = 0;
    printf("enter your number: ");
    scanf("%d", &number);
    for (int i = 0; i < 11; i++)
    {
        printf("%d\n", number + i);
    }

    // 5.3
    int days = 0;
    printf("enter your days:");
    scanf("%d", &days);
    printf("that number is %d weaks and %d days\n", days / daytoweak, days % daytoweak);

    // 5.4
    float high = 0;
    printf("enter a height in centimeters:");
    while (scanf("%f", &high))
    {
        if (high > 0)
        {
            printf("%.1f cm = ", high);
            printf("enter a height in centimeters(<= 0 to quit):\n");
        }
        else
        {
            break;
        }
    }

    // 5.7
    printf("enter a number: ");
    double origin = 0.0e0;
    scanf("%lf", &origin);
    double origin2 = origin * origin;
    printf("%f\n", origin2);
    printf("%f\n", trinity(origin));

    // 5.8
    printf("enter an integer toserve as the second operand:");
    int secnum = 0;
    int firnum = 0;
    scanf("%d", &secnum);
    printf("now enter the first operand: ");
    scanf("%d", &firnum);
    while (1)
    {
        if (firnum > 0)
        {
            int trinum = firnum % secnum;
            printf("%d %% %d,%d\n", firnum, secnum, trinum);
            printf("enter nextnumber for first operand:");
            scanf("%d", &firnum);
        }
        else
        {
            printf("Done");
            break;
        }
    }

    // 5.9
    printf("enter your temperature: ");
    double tem = 0.0;
    scanf("%lf", &tem);
    printf("摄氏温度： %f\n 开氏温度：%f\n", TENMPERATURES(tem));

    return 0;
}