#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        int array[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&array[i]);
        }
        int odd=0;
        for (int i = 0; i < N; i++)
        {
            if ((array[i] % 2) != 0)
            {
                odd++;
            }
        }
        if (odd > 1 )
        {
            printf("%d\n",odd/2);
        }
        else{
            printf("0\n");
        } 
    }
    return 0;
}