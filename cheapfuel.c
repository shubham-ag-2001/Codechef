#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int X,Y,A,B,K;
        scanf("%d %d %d %d %d",&X,&Y,&A,&B,&K);
        int petrol = X + K*A;
        int diesel = Y + K*B;
        if (petrol>diesel)
        {
            printf("DIESEL\n");
        }
        else if (petrol<diesel)
        {
            printf("PETROL\n");
        }
        else{
            printf("SAME PRICE\n");
        }
    }
    return 0;
}