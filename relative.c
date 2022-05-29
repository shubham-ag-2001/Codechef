#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int g, c;
        scanf("%d %d",&g, &c);
        printf("%d\n",(c*c)/2*g);
    }
    return 0;
}