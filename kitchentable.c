#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &B[i]);
        }
        int students = 0;
        if (A[0] >= B[0])
        {
            students++;
        }
        for (int i = 1; i < N; i++)
        {
            if (B[i] <= (A[i] - A[i - 1]))
            {
                students++;
            }
        }
        printf("%d\n", students);
    }
    return 0;
}