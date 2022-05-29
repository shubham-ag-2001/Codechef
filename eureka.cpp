#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        double n; 
        cin >>n;
        long double total= 0;
        total = pow(0.143 * n, n);
        cout << round(total)<<endl;
    }
    return 0;
}