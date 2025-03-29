
//https://www.codechef.com/problems/AIRM

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        map<int ,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];                    //dono strings ko map ke ander dala 
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            int x=a[i];
            m[x]++;
        }
         for(int i=0;i<n;i++){                      
            int x=b[i];
            m[x]++;
        }
        
        
        // for(auto it:m){
        //     cout<<it.first<<" "<<it.second<<"\n";
            
        // }
        // cout<<endl;
        
        
        
        ll maxi=0;                         // amxi me max occ store krli...
       for(auto it:m){
           if(it.second > maxi){
               maxi=it.second;
           }
       }
       cout<<maxi;
        cout<<endl;
    }

}
