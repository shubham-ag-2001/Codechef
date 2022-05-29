#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        int deposits[N];
        for (int i = 0; i < N; i++)
        {
            cin >> deposits[i];
        }
        sort(deposits, deposits + N, greater<int>());
        if (accumulate(deposits, deposits + N, 0) < X)
        {
            cout << "-1\n";
        }
        else
        {
            int sum = 0, done = 0, ans = 0;
            for (int i = 0; i < N; i++)
            {
                sum += deposits[i];
                if (sum >= X)
                {
                    ans = i + 1;
                    break;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}