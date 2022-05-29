#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N, P, X, Y;
        scanf("%d %d %d %d", &N, &P, &X, &Y);
        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&A[i]); 
        }
        int minutes = 0;
        for (int i = 0; i < P; i++)
        {
            if (A[i]==1)
            {
                minutes += Y;
            }
            else if (A[i]==0)
            {
                minutes += X;
            } 
        }
        printf("%d\n", minutes);
    }
    return 0;
}