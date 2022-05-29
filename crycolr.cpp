#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int N, R1, R2, R3, G1, G2, G3, B1, B2, B3;
        cin >> N >> R1 >> G1 >> B1 >> R2 >> G2 >> B2 >> R3 >> G3 >> B3;
        int swapped = 0;
        // int RED = R1, GREEN = G2, BLUE = B3;
        if (R1==N && G2==N && B3==N)
        {
            cout <<"0\n";
        }
        else{
            if(G1 != 0 && R2 != 0)
            {
                swapped += min(G1, R2);
                R1 += min(G1, R2);
                G2 += min(G1, R2);
            }
            if (B1 != 0 && R3 != 0)
            {
                swapped += min(B1, R3);
                R1 += min(B1, R3);
                B3 += min(B1, R3);
            }
            if (G3 != 0 && B2 != 0)
            {
                swapped += min(G3, B2);
                G2 += min(G3, B2);
                B3 += min(G3, B2);
            }
            if (R1==N && G2==N && B3==N)
            {
                cout << swapped << endl;
            }
            else{
                cout << 2*(N-R1) + swapped << endl;
            }
        }
        
        
    }
    return 0;
}