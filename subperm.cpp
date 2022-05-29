#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int N,K;
        cin >> N >> K;
        if(N==1){
        cout << "1\n";}
        else if (N==2 && K==2)
        {
            cout << "1 2 \n";
        }
        else if(K < 2 || K > N){
        cout << "-1\n";}
        else{
            for (int i = 1; i < K; i++)
            {
                cout << i << " ";
            }
            for (int i = N; i >= K; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}