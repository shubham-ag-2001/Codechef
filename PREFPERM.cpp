#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n,k;
        cin >>n>>k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >>arr[i];
        }
        for (int i = arr[0]; i > 0; i--)
        {
            cout << i <<" ";
        }      
        for (int i = 1; i < k; i++)
        {
            for (int j = arr[i]; j > arr[i-1]; j--)
            {
                cout << j << " ";
            }           
        }
        cout << endl;
    }
    return 0;
}