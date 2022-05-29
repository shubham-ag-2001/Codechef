#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N;
        scanf("%d", &N);
        int array[N];
        int sortedarray[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &array[i]);
            sortedarray[i] = array[i];
        }

        int r, l, d, a;
        int answer=0;
        int lrd[3*N];
        int k=0;
        for (int i = 0; i< N-1; i++)
        {
            a=i;
            int mini = array[i];
            for (int j = i + 1; j < N; j++)
            {
                mini = fmin(array[j], mini);
                if (array[j] == mini && array[j] != array[i])
                {
                    a = j;
                }
            }
            if (a != i)
            {
                l=i+1;
                r=a+1;
                d= a-i;
                answer++;
                lrd[k] = l;
                lrd[k+1] = r;
                lrd[k+2] = d;
                k+=3;
            }
        }
        printf("%d\n", answer);
        if (answer >0 )
        {
            for (int p = 0; p < k ; p++)
        {
            printf("%d %d %d\n" , lrd[p], lrd[p+1], lrd[p+2]);
            p+=2;
        }
        }
        
    }

    return 0;
}