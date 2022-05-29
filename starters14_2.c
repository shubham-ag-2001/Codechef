#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int X, Y, Z;
        scanf("%d %d", &X, &Y);
        if (Y > X)
        {
            Z = Y - X;
        }
        if (X > Y)
        {
            Z = X - Y;
        }
        if (Z % 2 == 0 || X==Y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}