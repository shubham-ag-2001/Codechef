#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int index = ((n - k) / 2) + k + 1;
        if (n - k == 1)
        {
            printf("-1\n");
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                printf("%d ", i);
            }
            if ((n - k) % 2 == 0)
            {
                for (int j = n; j >= k + 1; j--)
                {
                    printf("%d ", j);
                }
            }
            else
            {
                for (int l = n; l >= k + 1; l--)
                {
                    if (l == n)
                    {
                        printf("%d ", index);
                    }
                    else if (l == index)
                    {
                        printf("%d ", n);
                    }
                    else
                    {
                        printf("%d ", l);
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}