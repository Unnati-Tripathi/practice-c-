//https://www.codechef.com/problems/CFMM?tab=statement


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        unordered_map<char,int> u;
        //cin>>s;
        for(int i=0;i<n;i++){
            string si;
            cin>>si;
            for(auto j:si){
                u[j]++;
            }
            
        }
        u['c']/=2;
        u['e']/=2;
        cout<<min({u['c'],u['o'],u['d'],u['e'],u['h'],u['f']});
	cout<<endl;
}
    
}





