#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N,K;
        scanf("%d %d", &N ,&K);
        int answer = N/K;
        if (N%K==0 && N>=K)
        {
            printf("%d\n",answer);
        }
        else{
            printf("%d\n",answer+1);
        }
    }
    return 0;
}