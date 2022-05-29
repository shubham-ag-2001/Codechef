#include<bits/stdc++.h>
// main header file
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  // for interactive console
    cin.tie(NULL);  // for all outputs at once
    int t;
    cin >> t;
    while (t--)
    {
        int T1, T2, R1, R2;
        cin >> T1 >> T2 >> R1 >> R2;
        if (pow(T1,2)*pow(R2,3) == pow(T2,2)*pow(R1,3))
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
    return 0;
}