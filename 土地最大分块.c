#include<stdio.h>
int max(int a,int b);
int min(int a, int b);
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    a = max(a,b);
    while (a%b!=0)
    {
        a = a-b;
    }
    
}

int max(int a,int b){
    if (a>b)
    {
        return a;
    }else{
        return b;
    }
    
}
int min(int a, int b){
    if (a>b)
    {
        return b;
    }else{
        return a;
    }
}