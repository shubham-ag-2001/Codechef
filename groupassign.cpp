#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n>>x;
        cout << 2*n - x + 1 <<endl; 
    }
    return 0;
}