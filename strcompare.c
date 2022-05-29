#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        char Astring[N], Bstring[N];
        scanf("%s %s", Astring, Bstring);
        int answer=0;
        for (int i = 0; i < N; i++)
        {
            if (Astring[i] < Bstring[i])
            {
                answer++;
            } 
            else if (Astring[i]==Bstring[i])
            {
                for (int j = i+1; j < N; j++)
                {
                    if (Astring[j] < Bstring[j])
                    {
                        answer += j-i+1;
                        i = j;
                        break;
                    }
                    else if (Astring[j] > Bstring[j])
                    {
                        i = j;
                        break;
                    }
                }  
            }   
        }
        printf("%d\n",answer);      
    }
    return 0;
}