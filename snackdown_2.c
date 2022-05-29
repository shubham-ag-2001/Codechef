#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int India=0, England=0, Draw=0;
        int R[5];
        for (int i = 0; i < 5; i++)
        {
            scanf("%d",&R[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            if (R[i]==0)
            {
                Draw++;
            }
            if (R[i]==1)
            {
                India++;
            }
            if (R[i]==2)
            {
                England++;
            }  
        }
        if (India > England)
        {
            printf("INDIA\n");
        }
        else if (India < England)
        {
            printf("ENGLAND\n");
        }
        else{
            printf("DRAW\n");
        }     
    }
    return 0;
}