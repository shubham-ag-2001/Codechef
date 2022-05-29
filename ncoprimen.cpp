#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int odds=0, atmost = round((2*n)/3);
        for (int i = 0; i < n; i++)
        {
            cin >>arr[i];
            if (arr[i]&1)
            {
                odds++;
            }  
        }
        if (odds<=atmost)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i]&1)
                    cout << "2 ";
                else
                    cout << arr[i]<<" ";
            }   
            cout <<endl;
        }
        else{
            int cnt=0,temp=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if ((arr[i] !=0) &&(arr[j]!=0)&&(arr[i]%arr[j]==0) || (arr[i] !=0) &&(arr[j]!=0)&&(arr[j]%arr[i]==0))
                    {
                        cnt++;
                        temp=arr[i];
                        break;
                    }
                } 
                if (cnt)
                {
                    break;
                } 
            } 
            for (int i = 0; i < n; i++)
            {
                if (arr[i]%temp==0 || temp%arr[i]==0)
                    {
                        cout << arr[i]<<" ";
                    }
                else
                    cout << temp<<" ";
            }
            cout <<endl;
        }
    }
    return 0;
}