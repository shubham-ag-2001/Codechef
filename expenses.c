#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        float quantity, price;
        scanf("%f %f", &quantity, &price);
        if (quantity > 100)
        {
            printf("%f\n", (quantity*price - 0.1*(quantity*price)));
        }
        else{
            printf("%f\n", quantity*price);
        }
    }
    return 0;
}