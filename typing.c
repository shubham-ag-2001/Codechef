#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        char words[N][20];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j<20; j++)
            {
                  scanf("%s",&words[i][j]);
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 20; j++)
            {   
                printf("%s\n", words[i][j]); 
            }
        }
    }
    
    return 0;
}