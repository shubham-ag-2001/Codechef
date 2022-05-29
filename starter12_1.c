#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int M, N, K;
        scanf("%d %d %d", &M, &N, &K);
        if (N*K < M)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}