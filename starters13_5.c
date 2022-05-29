#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long c=b;
        int d=0;
        for (int i = 2; b<= pow(10,18); i++)
        // for (int i = 2; i<19; i++)
        {
            if (c%a==0)
            {
                d++;
                printf("YES\n");
                break;
            }
            c = pow(b,i);
        }
        if(d==0)
        {
                printf("NO\n");
        }   
    }
    return 0;
}