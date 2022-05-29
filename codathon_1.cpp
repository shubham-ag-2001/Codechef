#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        long long n, even=0, odd=0;
        cin >> n;
        long long cost[n];
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
            long long a = ceil(log2(cost[i]));
            if (a&1)
                odd++;
            else
                even++;
        }
        long long ans = pow(2,even) - 1 ; // odd wale bache h
        cout << ans % 1000000007 << endl ;
    }
    return 0;
}