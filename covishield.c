#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int I;
    scan_f(&I);
    int T;
    long long X, A, B, C, D, P, Q, R, S, M;
    scan_f(&X, &A, &B, &C, &D);
    scan_f(&P, &Q, &R, &S, &T, &M);

    long long a[I+1], b[I+1], c[I+1], d[I+1];
    a[0]=0, b[0]=0, c[0]=0, d[0]=0;
    a[1]=A, b[1]=B, c[1]=C, d[1]=D;

    long long priceCOVAXIN = 0, priceCOVISHIELD = 0;
    long long doses[2*X];
    doses[0] = 0;
    long long e;
    for (e = 1; priceCOVAXIN <= X; e++)
    {
        doses[e] = A + (e - 1) * B;
        priceCOVAXIN += doses[e];
    }
    for (long long f = 1; priceCOVISHIELD <= X; f++)
    {
        long long int cost = C + (f - 1) * D;
        doses[e] = cost;
        e++;
        priceCOVISHIELD += cost;
    }

    long long sortdoses[X];
    for (int z = 0; z < e - 1; z++)
    {
        long long sample = doses[z];
        long long mini = doses[z];
        for (long long y = z + 1; y < e - 1; y++)
        {
            mini = fmin(doses[y], mini);
        }
        for (long long k = z + 1; k < e - 1; k++)
        {
            if (doses[k] == mini)
            {
                doses[k] = sample;
                break;
            }
        }
        sortdoses[z] = mini;
    }

    
    long long ans = 1;
    long long coins = 0;
    for (ans; coins <= X; ans++)
    {
        coins += sortdoses[ans];
    }
    long long answer[X];
    answer[1] = ans - 2;

    printf("%lld\n", answer[1]);

    // a, b, c, d, answer, change honge har bar to inke liye array chaiye.
    // answer ka to bna diya. ab a b c d bhi bna diya.

    for (int g = 2; g <= I; g++)
    {
        a[g] = (a[g-1] + answer[g-1]*T)%M + P;
        b[g] = (b[g-1] + answer[g-1]*T)%M + Q;
        c[g] = (c[g-1] + answer[g-1]*T)%M + R;
        d[g] = (d[g-1] + answer[g-1]*T)%M + S;

    priceCOVAXIN = 0, priceCOVISHIELD = 0;
    e=1;
    for (e ; priceCOVAXIN <= X; e++)
    {
        doses[e] = a[g] + (e - 1) * b[g];
        priceCOVAXIN += doses[e];
    }
    for (long long f = 1; priceCOVISHIELD <= X; f++)
    {
        long long int cost = c[g] + (f - 1) * d[g];
        doses[e] = cost;
        e++;
        priceCOVISHIELD += cost;
    }

    for (long long z = 0; z < e - 1; z++)
    {
        long long sample = doses[z];
        long long mini = doses[z];
        for (long long y = z + 1; y < e - 1; y++)
        {
            mini = fmin(doses[y], mini);
        }
        for (long long k = z + 1; k < e - 1; k++)
        {
            if (doses[k] == mini)
            {
                doses[k] = sample;
                break;
            }
        }
        sortdoses[z] = mini;
    }

    ans = 1;
    coins = 0;
    for (ans; coins <= X; ans++)
    {
        coins += sortdoses[ans];
    }
    answer[g] = ans - 2;

    printf("%lld\n",answer[g]);

    }
    


    return 0;
}