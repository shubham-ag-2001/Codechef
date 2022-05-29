// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(0);
//     int t; cin >> t;
//     int x =0;
//     while (t--){
//         x++;
//         string I,P;
//         cin >>I >> P;
//         int slI = I.length();
//         int slP = P.length();
//         if(slI > slP){
//         cout << "case #x: IMPOSSIBLE";
//         }
//         else if(slI==slP){
//             if(I==P)
//             cout << "case #x: 0";
//             else
//             cout << "case #x: IMPOSSIBLE";
//         }
//         else{
//             int count =0;
//             for (int i = 0; i < slP; i++)
//             {
//                 for (int j = 0; j < slI; j++)
//                 {
                    
//                 }
                
//             }
//             int extra_length = I.size() - P.size();

//         }

//         }
//     return 0;
// }



#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i,n) for(ll i=0;i<n;i++)
#define fm(i,n) for(ll i=n-1;i>=0;i--)
using namespace std;
void problem(ll t){
    string i,p;
    cin>>i>>p;
    vector<int> v;
    ll count=0;
    fr(j,p.size()){
        if(i[count]==p[j]){
            v.push_back(p[j]);
            count++;
        }
    }
    if(v.size()==i.size()){
       cout<<"Case #"<<t+1<<": "<<p.size()-v.size()<<endl;
    }else{
        cout<<"Case #"<<t+1<<": "<<"IMPOSSIBLE"<<endl;
    }
}
int main()
{
    fast;
    fs;
    ll t;
    cin >> t;
    for(ll i=0;i<t;i++){
        problem(i);
    }
return 0;
}