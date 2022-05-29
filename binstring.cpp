#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >>n >> s;
        int repeat=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                for (i=i+1; i < n; i++)
                {
                    if(s[i]=='0'){
                    i--;
                    break;
                    }
                    else{
                    repeat++;
                    }
                }   
            }
            else{
                for (i=i+1; i < n; i++)
                {
                    if(s[i]=='1'){
                    i--;
                    break;
                    }
                    else{
                    repeat++;
                    }
                } 
            }
        }
        if(repeat)
        cout << n-repeat<<endl;
        else
        cout << n-1-repeat<<endl;  
    }
    return 0;
}