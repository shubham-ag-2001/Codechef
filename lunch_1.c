#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int D, L, R;
        scanf("%d %d %d", &D, &L, &R);
        if (D>=L && D<=R)
        {
            printf("Take second dose now\n");
        }
        else if (D<L)
        {
            printf("Too Early\n");
        }
        else if (D>R)
        {
            printf("Too Late\n");
        }
    
    }
    
    return 0;
}