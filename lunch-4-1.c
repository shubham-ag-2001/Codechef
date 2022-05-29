#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long L, R;
        scanf("%lld %lld", &L, &R);
        long long answer=0;
        if (L%3==0)
        {
            answer= (R/3) - (L/3) + 1;    
        }
        else{
            answer= (R/3) - (L/3) ;     
        }
        
        printf("%lld\n", answer);

    }
    
    return 0;
}