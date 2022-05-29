#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int X,Y;
        scanf("%d %d", &X, &Y);
        int difference;
        int steps;
        if (X > Y)
        {
            difference = X-Y;
            steps = difference;
        }
        else{
            difference = Y-X;
        if (difference%2 == 0)
        {
            steps = difference/2;
        }
        else{
            steps = (difference+1)/2 + 1; 
        }
        }
        printf("%d\n", steps);
    }
    return 0;
}