#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int N,X,P;
        scanf("%d %d %d", &N, &X, &P);
        int score = X*3 - (N-X);
        if (score>=P)
        {
            printf("PASS\n");
        }
        else{
            printf("FAIL\n");
        }
    }
    return 0;
}