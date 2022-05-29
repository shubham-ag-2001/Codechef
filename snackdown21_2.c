#include <stdio.h>
#include <math.h>
int lcmfunc(int a, int b);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int X, K;
        scanf("%d %d", &X, &K);
        int min, max;
        min = X * 2;
        max = lcmfunc(X * K, X * K - 1);
        printf("%d %d\n", min, max);
    }
    return 0;
}

int lcmfunc(int a, int b)
{
    int m1 = a, m2 = b;
    int lcm;
    if (a % b == 0 || b % a == 0)
    {
        lcm = a;
    }
    else if (a > b)
    {
        for (int i = 2; m1 != m2; i++)
        {
            m1 = a * i;
            for (int h = 2; m2 < m1; h++)
            {
                m2 = b * h;
                if (m1 == m2)
                {
                    lcm = m1;
                }
            }
        }
    }
    else if (b > a)
    {
        for (int i = 2; m2 != m1; i++)
        {
            m2 = b * i;
            for (int h = 2; m1 < m2; h++)
            {
                m1 = a * h;
                if (m1 == m2)
                {
                    lcm = m1;
                }
            }
        }
    }
    return lcm;
}