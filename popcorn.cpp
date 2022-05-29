#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        int array[3];
        array[0]=a1+a2, array[1]= b1+b2, array[2]= c1+c2;
        int maxim = array[0];
        for (int i = 0; i < 3; i++)
        {
            maxim = max(array[i], maxim);
        }
        cout << maxim << endl;
    }
    return 0;
}