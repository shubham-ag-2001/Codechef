#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int k;
        scanf("%d",&k);
        if (k%2==0)
        {
            printf("%d\n",k);
        }
        else{
            printf("%d\n",k+2);
        }
    }
    return 0;
}