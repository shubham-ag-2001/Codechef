#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long N;
        scanf("%lld",&N);
        if (N%2==0)
        {
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
        }
    }
    
    return 0;
}