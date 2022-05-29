#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long L, R;
        scanf("%lld %lld", &L, &R);
        long long answer=0;
        for (long long i = L; i <= R; i++)
        {
            if (i%3==0)
            {
                answer++;
            }
        }
        printf("%lld\n", answer);

    }
    
    return 0;
}