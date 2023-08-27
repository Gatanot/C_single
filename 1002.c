#include<stdio.h>
void copy_arr(double j[], double m[], int n);
void copy_ptr(double j[], double m[], int n);
void copy_ptrs(double j[], double m[], double* n);
int main(void)
{
    double sourse[5] = {1.1,2.2,3.3,4.4,5.5};
    double target1[5], target2[5], target3[5];
    copy_arr(target3, sourse, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%f \t%f \t%f\n", target1[i], target2[i], target3[i]);
    }
    copy_ptr(target2, sourse, 5);
    copy_ptrs(target3, sourse, &sourse[4]);
}
void copy_arr(double j[], double m[], int n){
    for (int i = 0; i < n; i++)
    {
        j[i] = m[i];
    }
}
void copy_ptr(double j[], double m[], int n){
    for (int i = 0; i < n; i++)
    {
        *(j+i) = *(m+i);
    }
    
}
void copy_ptrs(double j[], double m[], double* n){
    for (int i = 0; i < 5; i++)
    {
        *(j+4-i) = *(n-i);
    }
}