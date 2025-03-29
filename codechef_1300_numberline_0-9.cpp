
//   https://www.codechef.com/problems/LPC



#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ll t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>n>>m;
        string s;
        string k;
     cin>>s>>k;
      ll sum=INT_MAX;
        for(ll i=0;i<n;i++){
            ll tsum=0;
            for(ll j=0;j<m;j++){
             ll x=s[i+j]-'0';
             
                ll y=k[j]-'0';
                ll a=abs(x-y);
                ll big=max(x,y);
                x=min(x,y);
                y=big;
                ll b=abs(x-y+10);
              
               // cout<<a<<"a "<<b<<"b "<<endl;
                ll temp=min(a,b);
                //cout<<temp<<endl;
                tsum+=temp;
            }
            sum=min(sum,tsum);
           // cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}
