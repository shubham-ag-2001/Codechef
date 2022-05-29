#include <stdio.h>
#include <math.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int A[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        int even = 0, odd = 0;
        int answer=0;
        int real=0, realanswer=0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            }
        }
        if (even == n)
        {
                qsort(A, n, sizeof(int), cmpfunc);
                for (int i = 0; i < n; i++)
                {
                    if (A[i]%3==0)
                    {
                        answer = A[i];
                        break;
                    }
                }
                for (int i = 0; real=0; i++)
                {
                    answer/2;
                    realanswer++;
                    if (answer%2!=0)
                    {
                        real++;
                    }
                }
               printf("%d\n", realanswer) ;
        }
        else
        {
            printf("0\n");
        }
    }
        return 0;
}