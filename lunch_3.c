#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d", &N);
        int A[N/2], B[N/2];
        int ans= N/4;
        if (N%4==0)
        {
            printf("YES\n");
            for (int i = 1; i <= ans ; i++)
            {
                printf("%d ", 2*i - 1);
            }
            for (int i = ans +1 ; i <= N/2 ; i++)
            {
                printf("%d ", 2*i);
            }
            printf("\n");
            for (int i = 1; i <= ans ; i++)
            {
                printf("%d ", 2*i);
            }
            for (int i = ans +1 ; i <= N/2 ; i++)
            {
                printf("%d ", 2*i - 1);
            }
            printf("\n");
        }
        else{
            printf("NO\n");
        }

    }
    
    return 0;
}