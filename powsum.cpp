#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        long long b=0;
        long long sum = accumulate(array, array + n, b);
        if (ceil(log2(sum)) == floor(log2(sum)))
        {
            cout << "0\n";
        }
        else
        {
            long long a = ceil(log2(sum));
            long long diff = pow(2, a) - sum;
            long long mini = *min_element(array, array + n);
            int index;
            for (int i = 0; i < n; i++)
            {
                if (array[i]==mini)
                {
                    index = i+1;
                    break;
                }   
            }    
            cout << "1\n1 " << (diff + mini)/mini << "\n" << index << endl; 
        }
    }
    return 0;
}