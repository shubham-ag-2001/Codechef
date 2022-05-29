#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char string[50];
        scanf("%s", string);
        int A=0, B=0, C=0;
        int N = strlen(string);
        for (int i = 0; i < N; i++)
        {
            switch (string[i])
            {
            case 'A' :
                A++;
                break;
            case 'B' :
                B++;
                break;
            case 'C' :
                C++;
                break;
            }
        }
        if (B==A+C)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
    return 0;
}