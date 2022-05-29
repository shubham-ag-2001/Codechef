#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int N,M,seats, row;
        cin >> N >> M;
        if (M % 2 == 0)
            seats = M/2;
        else 
            seats = M/2 +1;
        if (N % 2 == 0)
            row = N/2;
        else 
            row = N/2 +1;
        int ans = seats * row;
        cout << ans << endl;
    }
    return 0;
}