#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int zeroes =0, ones =0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
            zeroes++;
            else
            ones++;
        }
        if(ones==zeroes || (ones + 1 == zeroes) || (zeroes + 1 == ones))
        cout << n << endl;
        else{
            if(zeroes > ones){
                cout << 2*ones + 1 <<endl;
            }
            else{
                cout << 2*zeroes + 1 <<endl;
            }   
        }
    }
    return 0;
}