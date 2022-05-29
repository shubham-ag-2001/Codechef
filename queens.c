#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        if (N%2 != 0)
        {
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= N; j++)
                {
                    if (i==j && (i!=1) && (i!=N))
                    {
                        printf("Q");
                    }
                    else{
                        printf(".");
                    }
                }
                printf("\n"); 
            }
        }
        else
        {
            if (N==4)
            {
                for (int i = 1; i <= N; i++)
                {
                    for (int j = 1; j <= N; j++)
                    {
                        if ((i==j && i==1) || (i==j && i==3))
                        {
                            printf("Q");
                        }
                        else{
                            printf(".");
                        }
                    }
                    printf("\n");
                }
            }
            else
            {
            int mid = N/2;
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= N; j++)
                {
                    if (i==j && (i!=1) && (i!=2) && (i!=N) && (i!=N-1))
                    {
                        printf("Q");
                    }
                    else if ((i == mid && (j == mid + 1)) || ((i == mid + 1) && (j == mid)))
                    {
                        printf("Q");
                    }
                    else{
                        printf(".");
                    }
                }
                printf("\n");
            }
            }
        }
    }
    return 0;
}