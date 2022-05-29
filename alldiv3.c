#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        int Array[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&Array[i]);
        }
        int a=0,b=0;
        for (int i = 0; i < N; i++)
        {
            if (Array[i]%3==1)
            {
                a++;
            }
            else if (Array[i]%3==2)
            {
                b++;
            }
        }
        int sum=0, max=0, mini=0;
        if (a>b)
        {
            max = a;
            mini = b;
        }
        else if(b>a){
            max = b;
            mini = a;
        }
        if (a==b)
        {
            printf("%d\n",a);
        }
        else if (b>a && ()%3==0)
        {
            sum = a + (2 * ((b-a)/3));
            printf("%d\n", sum);
        }
        else if (a>b && (a-b)%3==0)
        {
            sum = b + (2 * ((a-b)/3));
            printf("%d\n", sum);
        }
        else{
            printf("-1\n");
        }  
    }
    return 0;
}