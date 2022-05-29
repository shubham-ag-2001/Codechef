// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int M, X;
//         cin >> M >> X;
//         if (M == 1)
//         {
//             for (int i = 1; i <= X; i++)
//             {
//                 cout << i << " ";
//             }
//             cout << "\n";
//         }
//         else if (M==2)
//         {
//             for (int i = 1; i <= X; i++)
//             {
//                 cout << "1 ";
//             }
//             cout << "\n";
//         }
//         else
//         {
//             if (M & 1)
//             {
//                 for (int i = 1; i < M; i++)
//                 {
//                     cout << i << " ";
//                 }
//                 for (int i = M; i <= X; i++)
//                 {
//                     cout << M - 1 << " ";
//                 }
//             }
//             else
//             {
//                 for (int i = 1; i < M - 1; i++)
//                 {
//                     cout << "1 ";
//                 }
//                 for (int i = M - 1; i <= X; i++)
//                 {
//                     cout << "2 ";
//                 }
//             }
//             cout << "\n";
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M, X;
        cin >> M >> X;
        if (M == 1)
        {
            for (int i = 1; i <= X; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else if (M==2)
        {
            for (int i = 1; i <= X; i++)
            {
                cout << "1 ";
            }
            cout << "\n";
        }
        else
        {
            if(M<X){
            if (M & 1)
            {
                for (int i = 1; i < M; i++)
                {
                    cout << i << " ";
                }
                for (int i = M; i <= X; i++)
                {
                    cout << M - 1 << " ";
                }
            }
            else
            {
                for (int i = 1; i < M - 1; i++)
                {
                    cout << "1 ";
                }
                for (int i = M - 1; i <= X; i++)
                {
                    cout << "2 ";
                }
            }
            cout << "\n";
            }
        }
    }
    return 0;
}