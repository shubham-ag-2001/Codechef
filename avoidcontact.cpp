#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        int c = x-y;
        if (!y)
        {
            cout << x <<endl;
        }
        else if (!c)
        {
            cout << 2*y - 1 <<endl;
        }
        else{
            cout << 2 + c + 2*(y-1) << endl;
        } 
    }
    return 0;
}