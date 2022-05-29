#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long P, a, b, c, x, y;
        scanf("%lld %lld %lld %lld %lld %lld", &P, &a, &b, &c, &x, &y);
        long long crackers;
        long long anar = b + (a*x);
        long long chakri = c + (a*y);
        if (anar <= chakri )
        {
            crackers = P/anar ;
        }
        else if (anar > chakri )
        {
            crackers = P/chakri ;
        }
        printf("%lld\n", crackers);
    }
    return 0;
}