#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count =0,po=0;
        for (int i = 0; n > 0; i++)
        {
            int digit = n%10;
            if(digit%2==0){
                count ++;
            }
            n=n/10;
            if(count==2){
                cout << "YES\n";
                po++;
                break;
            }
        }
        if(po)
        cout << "NO\n";    
    }
    return 0;
}