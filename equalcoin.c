#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        long long cost = X + 2*Y;
        if (X%2!=0 || (Y%2!=0 && X==0))
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}