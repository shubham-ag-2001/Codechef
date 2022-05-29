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
    int priceCOVAXIN = 0, priceCOVISHIELD = 0;
    int doses[I];
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
    int sortdoses[I];
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
    printf("%d\n", ans-2);
    return 0;
}