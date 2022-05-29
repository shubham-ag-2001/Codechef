#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--){
        int x;
        cin >>x;
        if(x%5 !=0 )
        cout << "-1\n";
        else{
            if(x%10==0)
            cout << x/10 <<endl;
            else
            cout << x/10 + 1 <<endl;
        }
    }
    return 0;
}