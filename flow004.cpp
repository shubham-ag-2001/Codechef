#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, a, digits=0, last = 0, first = 0;   
        cin >> n;
        a=n;
        last = n%10;
        while(n)
        {
            digits++;
            n = n/10;
        }
        if (digits > 1)
        {
            int po = pow(10, digits-1);
            first = a/po;
            cout << last + first << endl;
        }
        else
        cout << 2*last << endl;
    }
    return 0;
}