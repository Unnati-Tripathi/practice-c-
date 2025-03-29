////https://codeforces.com/problemset/problem/1881/B


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
    
    ll a,b,c;
    cin>>a>>b>>c;
    if(b<a && b<c){
        swap(a,b);
    }
    if(c<a && c<b){
        swap(a,c);
    }
     
     if((b%a==0 && c%a==0) && ((b/a)+(c/a)-2)<=3) {
         cout<<"YES";
     }
    else{
        cout<<"NO";
    }
       cout<<endl;

}
}