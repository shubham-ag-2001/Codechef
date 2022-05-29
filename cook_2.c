#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int N;
        scanf("%d",&N);
        for (int i = 1; i <= N; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}