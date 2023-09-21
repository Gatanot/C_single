#include <stdio.h>
int main(void)
{

    // 4.1
    char Lname[40], Fname[40];
    printf("enter your first name and last name: ");
    scanf("%s %s", Lname, Fname);
    printf("%s.%s\n", Lname, Fname);

    // 4.2
    char name[40];
    printf("enter your name: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("%20s\n", name);
    printf("%-20s\n", name);
    printf("%s\n", name);

    // 4.3
    float num = 0.0;
    printf("enter a floating-point number: ");
    scanf("%f", &num);
    printf("the input is %.1f or %.1e\n", num, num);
    printf("the input is %.3f or %.3e\n", num, num);

    // 4.4
    float length = 0;
    printf("enter your length in inch:");
    scanf("%f", &length);
    printf("your lenth is %.3f in foots\n", length * 12.0);

    // 4.5
    float DownloadSpeed = 0.0, DownloadTime = 0.0, FileSize = 0.0;
    printf("enter DownloadSpeed in Mb/s and FileSize in MB/s: ");
    scanf("%f %f", &DownloadSpeed, &FileSize);
    DownloadTime = (FileSize * 8) / DownloadSpeed;
    printf("At %.1f mwgabits per second, a file os %.2f megabytes\n", DownloadSpeed, FileSize);
    printf("downloads in %.2f seconds", DownloadTime);

    // 4.6
    printf("enter your name: ");
    scanf("%s, %s", Lname, Fname);
    printf("\t%s \t%s\n", Lname, Fname);
    return 0;
}