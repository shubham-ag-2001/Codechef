// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     int t; 
//     cin >>t;
//     while (t--)
//     {
//         char string[100000];
//         cin >> string;
//         int a= strlen(string), ones=0;
//         if (a == 1)
//         {
//             cout << "NO\n";
//         }
//         else{
//             for (int i = 0; i < a-1; i++)
//             {
//                 if (string[i]=='1')
//                 {
//                     ones++;
//                     break;
//                 }
//             }
//             if (ones)
//             {
//                 cout << "YES\n";
//             }
//             else{
//                 cout << "NO\n"; 
//             }  
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >>t;
    while (t--)
    {
        string str;
        cin >> str;
        int ones=0, a= str.length();
        if (a == 1)
            cout << "NO\n";
        else{
            for (int i = 0; i < a-1; i++)
            {
                if (str[i]=='1')
                {
                    ones++;
                    break;
                }
            }
            if (ones)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}