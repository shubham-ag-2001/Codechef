#include<stdio.h>

int main(){
    int S;
    scanf("%d",&S);
    while (S--)
    {
        int N;
        scanf("%d",&N);
        int H[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&H[i]);
        }
        int centre = N/2;
        int centrelength = centre +1;
        int check = 0;
        if (N%2==1)
        {
           for (int i = 0; i <= centre; i++)
           {
               if (H[i]==i+1)
               {
                  check++;
               }      
           }
           for (int i = centre+1; i < N; i++)
           {
               if (H[i]==centrelength-1)
               {
                   check++;
                   centrelength--;
               }   
           }
        }
        if (check==N)
        {
            printf("yes\n");
        }
        if (N%2==0 || check!=N)
        {
            printf("no\n");
        }
    }
    return 0;
}