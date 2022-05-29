// #include<stdio.h>

// int main(){
//     int t;
//     scanf("%d",&t);
//     while (t--)
//     {
//         int K;
//         scanf("%d",&K);
//         int i=1;
//         for (i; K > 0; i++)
//         {
//             K = K-i;
//         }
//         printf("%d\n", 2*(i-1));
//     }
//     return 0;
// }



#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        double K;
        scanf("%lf",&K);
        double i;
        i = ((sqrt(8*K + 1)) - 1)/2;
        i = ceil(i);
        int j = trunc(i);
        printf("%d\n", 2*j);
    }
    return 0;
}
