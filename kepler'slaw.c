#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int T1, T2, R1, R2;
        scanf("%d %d %d %d", &T1, &T2, &R1, &R2);
        if (pow(T1,2)*pow(R2,3) == pow(T2,2)*pow(R1,3))
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}