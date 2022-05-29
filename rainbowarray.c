#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        int array[N];
        int ans =1;
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&array[i]);
        }
        int mid;
        if (N%2!=0)
        {
            mid = (N-1)/2;
        }
        else
        {
            mid = N/2 -1;
        }
        if (array[mid]!=7 || (N%2==0 && array[mid+1] !=7))
        {
            printf("no\n");
            ans++;
        }
        else{
            for (int i = 1; i <= mid; i++)
            {
                if (array[i-1] != array[N-i])
                {
                    printf("no\n");
                    ans++;
                    break;
                }
            }
            if (ans==1)
            {
                printf("yes\n");
            }   
        }
    }
    return 0;
}