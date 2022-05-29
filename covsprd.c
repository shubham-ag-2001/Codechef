#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N,D;
        scanf("%d %d", &N, &D);
        int infected=0;
        if (D >= 21)
        {
            printf("%d\n", N);
        }
        else{
            if (D>10)
            {
                D = D-10;
                infected = pow(3, D) * 1024;
            }
            else{
                infected = pow(2, D);
            }

            if (infected <= N)
            {
                printf("%d\n", infected);
            }
            else{
                printf("%d\n", N);
            }  
        }
        
    }
    return 0;
}