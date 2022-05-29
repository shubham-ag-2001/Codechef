#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n,a;
        cin >> n >> a;
        if (n == 1)
        {
            if (a%2 == 0)
            {
                cout << "EVEN\n";
            }
            else{
                cout << "ODD\n";
            }    
        }
        else{
            if (a %2 !=0 && n%2 !=0)
            {
                cout << "ODD\n";
            }
            else if (a %2 !=0 && n%2 ==0)
            {
                cout << "EVEN\n"; 
            }
            else{
                cout << "IMPOSSIBLE\n";
            }  
        }
    }
    return 0;
}