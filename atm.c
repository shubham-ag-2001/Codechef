#include<stdio.h>

int main(){
    int a;
    float b;
    scanf("%d %f", &a, &b);
    if (a%5==0 && a+0.5 <= b)
    {
       printf("%f\n", b-a-0.5);
    }
    else{
        printf("%f",b);
    }
    return 0;
}