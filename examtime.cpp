#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int d1, d2, d3, s1, s2, s3, dsum, ssum;
        cin >> d1 >> d2 >> d3 >> s1 >> s2 >> s3;
        dsum = d1 + d2 + d3;
        ssum = s1 + s2 + s3;
        if (dsum>ssum || (dsum==ssum && d1 > s1) || (dsum==ssum && d1==s1 && d2>s2))
        {
            cout << "DRAGON\n";
        }
        else if(dsum==ssum && d1==s1 && d2==s2 && d3==s3) {  cout << "TIE\n"; }
        else { cout << "SLOTH\n"; }
    }
    return 0;
}