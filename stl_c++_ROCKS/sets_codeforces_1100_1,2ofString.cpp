//https://codeforces.com/problemset/problem/1917/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        
        ll n;
        cin>>n;
        string st;
        cin>>st;
        set<char> s;
        ll sum=0;
        for(int i=0;i<n;i++){
            s.insert(st[i]);           //ek ek krke different no of occurances find krte jao of st[i]
            sum+=s.size();
        }
        cout<<sum<<endl;
        
    }
}