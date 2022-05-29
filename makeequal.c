#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d", &N);
        int Array[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&Array[i]);
        }
        int maxi= Array[0], mini = Array[0];
        for (int i = 1; i < N; i++)
        {
            maxi = fmax(Array[i], maxi);
            mini = fmin(Array[i], mini);
        }
        printf("%d\n", maxi-mini);
    }
    return 0;
}