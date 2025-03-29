 //https://www.codechef.com/problems/DOTIFYPLAY?tab=statement

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        
    ll n,k,l;
    cin>>n>>k>>l;
    vector <int> mi;
     vector <int> li;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        mi.push_back(x);
         int y;
        cin>>y;
        li.push_back(y);
    }
    vector<int> ms;
    for(int i=0;i<n;i++){
        if(li[i]==l){
            int x=mi[i];
            ms.push_back(x);
        }
    }
    if(ms.size()<k){
        cout<<-1<<endl;
        continue;
    }
    
    sort(ms.begin(),ms.end(),greater<int>());
    ll ans=0;
    for(int i=0;i<k;i++){
        ans+=ms[i];
    }
    cout<<ans;

	cout<<endl;
}
    
}
