#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int mini = floor(log2(a));
        cout << a - mini - 1 << endl;
    }
    return 0;
}