#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int height[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&height[i]);
        }
        int different=0;
        for (int i = 0; i < n; i++)
        {
            int repeat=0;
            for (int j = i+1 ; j < n; j++)
            {
                if (height[j]==height[i])
                {
                    repeat++;
                }
            }
            if (repeat==0)
            {
                different++;
            } 
        }
        if (n < 12 || different > 12)
        {
            printf("no\n");
        }
        else if (n >= 12 || different == 12 || (different < 12 && n >= 12) )
        {
            printf("yes\n");
        }
    }
    return 0;
}