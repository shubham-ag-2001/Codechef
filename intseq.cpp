#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        if (ceil(log2(k))==floor(log2(k)))
        {
            cout << ceil(log2(k)) << endl;
        }
        else if(!(k & 1))
        {
            int temp = 0;
            for (int i = 1; k%2 == 0; i++)
            {
                k = k/2;
                temp++;
            } 
            cout << temp << endl; 
        }
        else{
            cout << "0\n";
            }
    }
    return 0;
}