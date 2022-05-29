#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        int num = 1;
        for (int i = 1; i <= N; i++)
        {
            printf("%d ",num);
            num += 2;
        }
        printf("\n");
    }
    return 0;
}