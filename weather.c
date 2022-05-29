#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int Week[7];
        int sunny=0, rainy=0;
        for (int i = 0; i < 7; i++)
        {
            scanf("%d",&Week[i]);
            if (Week[i]==1)
            {
                sunny++;
            }
            if (Week[i]==0)
            {
                rainy++;
            }
        }
        if (sunny>rainy)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
    return 0;
}