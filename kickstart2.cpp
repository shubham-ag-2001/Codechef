// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     long long t;
//     cin >> t;
//     long long x=1; 
//     while (x <= t)
//     {
//         long long n;
//         cin >> n;
//         long long m = n;
//         long long sum = 0, fdigit = 0, tdigits=0;
//         for (long long i = 0; n > 0; i++)
//             {
//                 tdigits++;
//                 fdigit = n % 10;
//                 sum += fdigit;
//                 n = n / 10;
//             }
//             int req = 9 - (sum % 9);
//             if (m%9==0){
//                 long long l = pow(10,tdigits-1);
//                 long long k = m%l;
//                 cout <<"case #" <<x << ": " << fdigit << "0" << k  << endl;
//             }
//             else if (fdigit < req)
//             {
//                 cout <<"case #" << x << ": " << m << req << endl;
//             }
//             else
//             {
//                 cout << "case #" << x << ": " << req << m << endl;
//             }
//         x++;
//     }
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
void solved(ll t){
  string s;
  cin>>s;
  vector<ll> v;
  ll sum=0;
  fr(i,s.length()){
      sum=sum+s[i]-'0';
  }
  ll dif=sum/9;
  if(sum%9==0){
      cout<<"Case #"<<t+1<<": ";
      cout<<s[0]<<'0';
      for(ll i=1;i<s.length();i++){
          cout<<s[i];
      }
      cout<<endl;
  }else{
    ll dif=sum%9;
    dif=9-dif;
    
    cout<<"Case #"<<t+1<<": ";
    ll index=0;
    string ans="";
    fr(i,s.length()){
        if((dif<(s[i]-'0')&& index==0)){
            ans+=dif+'0';
            ans+=s[i];
            index=1;

        }else if((i==s.length()-1)&& index==0){
            ans+=s[i];
            ans+=dif+'0';
            index=1;
        }
        else{
            ans+=s[i];
        }
    }
    cout<<ans<<endl;
  }
}
int main()
{
    fast;
    fs;
    ll t;
    cin >> t;
    for(ll i=0;i<t;i++){
        solved(i);
    }
return 0;
}