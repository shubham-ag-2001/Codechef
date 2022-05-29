#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
       int x,y,K;
       scanf("%d %d %d",&x, &y, &K) ;
       if (x%K==0 && y%K==0)
       {
           printf("YES\n");
       }
       else{
           printf("NO\n");
       }
    }
    return 0;
}