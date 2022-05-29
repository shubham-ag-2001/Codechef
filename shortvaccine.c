#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int I;
    scanf("%d", &I);
    int T;
    int X, A, B, C, D, P, Q, R, S, M;
    scanf("%d %d %d %d %d", &X, &A, &B, &C, &D);
    scanf("%d %d %d %d %d %d", &P, &Q, &R, &S, &T, &M);

    int a[I+1], b[I+1], c[I+1], d[I+1];
    a[0]=0, b[0]=0, c[0]=0, d[0]=0;
    a[1]=A, b[1]=B, c[1]=C, d[1]=D;

    int priceCOVAXIN = 0, priceCOVISHIELD = 0;
    int doses[2*X];
    doses[0] = 0;
    int e;
    for (e = 1; priceCOVAXIN <= X; e++)
    {
        doses[e] = A + (e - 1) * B;
        priceCOVAXIN += doses[e];
    }
    for (int f = 1; priceCOVISHIELD <= X; f++)
    {
        int cost = C + (f - 1) * D;
        doses[e] = cost;
        e++;
        priceCOVISHIELD += cost;
    }

    int sortdoses[X];
    for (int z = 0; z < e - 1; z++)
    {
        int sample = doses[z];
        int mini = doses[z];
        for (int y = z + 1; y < e - 1; y++)
        {
            mini = fmin(doses[y], mini);
        }
        for (int k = z + 1; k < e - 1; k++)
        {
            if (doses[k] == mini)
            {
                doses[k] = sample;
                break;
            }
        }
        sortdoses[z] = mini;
    }

    
    int ans = 1;
    int coins = 0;
    for (ans; coins <= X; ans++)
    {
        coins += sortdoses[ans];
    }
    int answer[X];
    answer[1] = ans - 2;

    printf("%d\n", answer[1]);
    
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
    for (int f = 1; priceCOVISHIELD <= X; f++)
    {
        int cost = c[g] + (f - 1) * d[g];
        doses[e] = cost;
        e++;
        priceCOVISHIELD += cost;
    }

    for (int z = 0; z < e - 1; z++)
    {
        int sample = doses[z];
        int mini = doses[z];
        for (int y = z + 1; y < e - 1; y++)
        {
            mini = fmin(doses[y], mini);
        }
        for (int k = z + 1; k < e - 1; k++)
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

    printf("%d\n",answer[g]);

    }
    


    return 0;
}