//https://codeforces.com/problemset/problem/1903/A



#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      vector<int> v(n);
            vector<int> vc;

      for(auto &i:v){
          
          cin>>i;
        
      
      }
      for(auto i=0;i<v.size();i++){
          vc.push_back(v[i]);
      } 
       
      
      
      sort(vc.begin(),vc.end());
      if(v==vc){
          cout<<"YES\n";
          continue;
      }
      if(k==0 || k==1){
          cout<<"NO\n";
         continue;
      }
      cout<<"YES\n";
      
    }
   
}
    
    
   

