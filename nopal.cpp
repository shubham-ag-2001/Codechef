#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string s1 = "a";
        string s2 = "ab";
        string s3 = "abc";
        int a=N/3;
        for (int i = 1; i <= a; i++)
        {
            cout << s3;
        }
        if (N%3==1)
        {
            cout << "a";
        }
        else if (N%3==2)
        {
            cout << "ab";
        }
        cout << endl;
    }
    return 0;
}