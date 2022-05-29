#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long X, K;
        scanf("%lld %lld", &X, &K);
        long long min, max;
        min = X * 2;
        max = (X * K) * ((X * K) - 1);
        printf("%lld %lld\n", min, max);
    }
    return 0;
}