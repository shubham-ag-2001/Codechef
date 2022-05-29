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
        int n;
        cin >> n;
        string str;
        cin >> str;
        string copy = str;
        sort(copy.begin(), copy.end());
        if (n & 1) {
            cout << "NO\n";
        }
        else
        {
            vector<int> array(26);
            for (int i = 0; i < n; i++)
            {
                array[str[i] - 97]++;
            }
            int maxi = *max_element(array.begin(), array.end());
            if (maxi > n/2)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
                for (int i = 0; i < n / 2; i++)
                {
                    cout << copy[i];
                }
                for (int i = n - 1; i >= n / 2; i--)
                {
                    cout << copy[i];
                }
                cout << endl;
            }
        }
    }
    return 0;
}