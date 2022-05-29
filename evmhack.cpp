#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        int votes = 0;
        int total = p+q+r;
        int diff1 = p-a;
        int diff2 = q-b;
        int diff3 = r-c;
        if (diff1 >= diff2 && diff1 >= diff3)
            votes = p + b + c;
        else if (diff2 >= diff1 && diff2 >= diff3)
            votes = q + a + c;
        else if (diff3 >= diff1 && diff3 >= diff2)
            votes = r + b + a;
        else
            votes = a + b + c;
        if (2 * votes > total)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}