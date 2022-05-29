#include<bits/stdc++.h>
using namespace std;
int gcd(long long a, long long b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        long long b,c;
        cin >>b>>c;
        if (gcd(b,c)==1)
        {
            cout << b*c<<endl;
        }
        else{
        for(long long i=1; i>0; i++){
            if((i*b)%c==0){
                cout << i <<endl;
                break;
            }
        }
        }
    }
    return 0;
}