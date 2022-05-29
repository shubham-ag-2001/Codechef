#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char string[100000];
        scanf("%s", string);
        int N = strlen(string);
        int answer=0;
        for (int i = 0; i < N; i++)
        {
            if (string[i]=='0')
            {
                answer++;
                for ( i = i+1; i < N; i++)
                {
                    if (string[i]=='1')
                    {
                        answer++;
                        break;
                    }  
                }
            }
        }
        printf("%d", answer);
    }
    
    return 0;
}