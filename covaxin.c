#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int I;
    Scan_f(&I);
    int T;
    int X, A, B, C, D;
    scan_f(&X, &A, &B, &C, &D);
    int P, Q, R, S, M;
    scan_f(&P, &Q, &R, &S, &T, &M);
    int totaldosecostin=0;
    int totaldosecostld=0;
    int dosecost[2*I];
    dosecost[0]=0;
    int u=1;
    for ( u = 1; totaldosecostin<=X; u++)
    {
        dosecost[u] = A + (u-1)*B;
        totaldosecostin += dosecost[u];
    }
    for ( int v =u; totaldosecostld<=X; v++)
    {
        dosecost[v] = C + (v-1)*D;
        u++;
        totaldosecostld += dosecost[v];
    }
    qsort(dosecost, u, sizeof(int), cmpfunc);
    int ans = 1;
    int coins = 0;
    for (ans; coins <= X; ans++)
    {
        coins += dosecost[ans];
    }
    printf("%d\n", ans-1);   
    return 0;
}