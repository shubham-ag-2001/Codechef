#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&s[i]);
        }
        int sum1=0;
        int sum2=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]==1)
            {
                sum1 += 1;
            }
        }
        if (sum1==n)
        {
            printf("YES \n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i==j)
                    {
                        printf("x");
                    }
                    else{
                        printf("=");
                    }
                } 
                printf("\n");
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i]==2)
            {
                sum2+=1;
            }
        }
        if (sum2==n)
        {
            printf("YES \n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i==j)
                    {
                        printf("x");
                    }
                    if (j==i+1)
                    {
                        printf("+");
                    }
                    if (i==n-1)
                    {
                        printf("+");
                    }
                    else{
                        printf("-");
                    }
                } 
                printf("\n");
            }
        }
        if (sum1==sum2 || sum2<sum1)
        {
            printf("NO\n");
        }
        if (sum2>sum1)
        {
            printf("YES\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i==j)
                    {
                        printf("x");
                    }
                    else if (s[i]==1)
                    {
                        printf("=");
                    }
                    else if (s[j]==2)
                    {
                        printf("=");
                    }
                    else if (j==i+2)
                    {
                        printf("+");
                    }
                    if (i==n-1 && j==0)
                    {
                        printf("+");
                    } 
                    else{
                        printf("-");
                    }
                    
                    
                }
                printf("\n");
            }
            
        }
        


    }
    
    return 0;
}