#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if (Z*2 >= Y-X)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    return 0;
}