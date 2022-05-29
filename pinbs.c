#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char string[100000];
        scanf("%s", string);
        int length = strlen(string);
        int ones =0;
        if (length == 1)
        {
            printf("NO\n");
        }
        else{
            for (int i = 0; i < length-1; i++)
            {
                if (string[i]=='1')
                {
                    ones++;
                    break;
                }
            }
            if (ones)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n"); 
            }  
        }
    }
    return 0;
}