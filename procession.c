#include <stdio.h>

int main()
{
    int R;
    scanf("%d", &R);
    while (R--)
    {
        int L;
        scanf("%d", &L);
        char sequence[L];
        scanf("%s", sequence);
        int dots = 0, heads = 0, tails = 0, validity = 0, invalidity = 0;
        int i;
        for (i = 0; i < L; i++)
        {

            switch (sequence[i])
            {
            case '.':
                dots++;
                break;

            case 'T':
                tails++;
                invalidity++;
                break;

            case 'H':
                heads++;
                for (int j = i + 1; j < L; j++)
                {
                    switch (sequence[j])
                    {
                    case '.':
                        dots++;
                        break;

                    case 'H':
                        heads++;
                        invalidity++;
                        break;

                    case 'T':
                        tails++;
                        validity++;
                        break;
                    }
                    if (validity > 0 || invalidity > 0)
                    {
                        break;
                    }
                }
                break;
            }
            if (invalidity > 0)
            {
                break;
            }
        }

        if (invalidity > 0 || heads > tails)
        {
            printf("Invalid\n");
        }
        else if ((dots == L) || (validity > 0 && heads == tails))
        {
            printf("Valid\n");
        }
    }

    return 0;
}