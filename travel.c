#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
    int n,a,b;
    int district=0, state=0;
    scanf("%d %d %d", &n,&a,&b);
    char s[n];
    scanf("%s",s);
    for (int i = 0; i < n; i++)
    {
        if (s[i]== '0')
        {
            district += 1;
        }
        else if (s[i]== '1')
        {
            state += 1;
        }
    }
    printf("%d\n", (a*district + b*state));
    }
    return 0;
}