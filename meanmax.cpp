#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        long double p=0, q=0;
        p = (accumulate(array, array + n, 0)) *1.0;
        p = (p - *max_element(array, array+n)) * 1.0;
        q = (*max_element(array, array+n))*1.0;
        n *= 1.0;
        long double sumi = (p/(n-1))*1.0 + q;
        cout << fixed << setprecision(6) << sumi << endl;
    }
    return 0;
}
