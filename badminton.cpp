#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        if(p & 1)
        cout << (p+1)/2 << endl;
        else
        cout << p/2 +1 << endl;
    }
    return 0;
}