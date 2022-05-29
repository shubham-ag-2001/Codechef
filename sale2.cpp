#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n,x;
        cin >> n >> x;
        cout << n*x - (n/3)*x <<endl;
    }
    return 0;
}