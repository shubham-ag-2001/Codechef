#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int X,Y;
        scanf("%d %d", &X, &Y);
        int salary=0;
        int size=0;
        int streaks[30];
        char string[30];
        scanf("%s", string);
        for (int i = 0; i < 30; i++)
        {
            if (string[i]==1)
            {
                salary += X;
            }
        }
        for (int i = 0; i < 30; i++)
        {
            if (string[i]==1)
            {
                int streak = 1;
                for ( i=i+1; i < 30; i++)
                {
                    if (string[i]==0)
                    {
                        size++;
                        break;
                    }
                    else{
                        streak++;
                    }
                }
                   streaks[size] = streak;
            }
        }
            int maxim = streaks[1];
        for (int i = 2; i <= size; i++)
        {
            maxim = fmax(maxim, streaks[i]);
        }
        printf("%d\n", salary + (maxim * Y));  
    }
    return 0;
}