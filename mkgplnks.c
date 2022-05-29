#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        char colours[N];
        scanf("%s", colours);
        int white=0, black=0;
        for (int i = 0; i < N; i++)
        {
            if (colours[i]=='B')
            {
                black++;
                for (int j = i+1; j < N; j++)
                {
                    if (colours[j]=='W')
                    {
                        i = j-1;
                        break;
                    }
                }    
            }
            else
            {
                white++;
                for (int j = i+1; j < N; j++)
                {
                    if (colours[j]=='B')
                    {
                        i = j-1;
                        break;
                    }
                }
            }      
        }
        if (white <= black)
        {
            printf("%d\n",white);
        }
        else if (white > black)
        {
            printf("%d\n",black);
        }   
    }
    return 0;
}