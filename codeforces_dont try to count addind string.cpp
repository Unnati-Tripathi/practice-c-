//https://codeforces.com/problemset/problem/1881/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){

   
    
    bool flag=false;
    string x;
    string s;
    ll ans=0;
    cin>>x>>s;
    while(1){
        if(x.find(s)!=-1){
            break;
        }
        if((x.length()>2*s.length()) && ans!=0 ){
           
           ans=-1;
           break;
        }
        x=x+x;
        ans++;
    }
        cout<<ans;
       cout<<endl;

}
}