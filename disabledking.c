#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
     int N;
     scanf("%d",&N);
     if (N%2==0)
     {
        printf("%d\n",N);
     }
     else{
         printf("%d\n",N-1);
     } 
    }
    return 0;
}