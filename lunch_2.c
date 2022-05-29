#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N, A, B, C;
        scanf("%d %d %d %d", &N, &A, &B, &C);
        if (B>=N && ((A+C)>=N))
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
    return 0;
}