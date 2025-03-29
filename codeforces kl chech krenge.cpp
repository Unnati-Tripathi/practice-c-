

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        
        int ans=0;
         bool f=false;
         while(!f  && x.length()<10000){
        for(int i=0;i<n;i++){
           if(i+m<n){
              
               for(int j=0;j<m;j++){
                   if(x[i+j]!=s[i]){
                     
                       f=true;
                        break;
                   }
                  
                   
               }
                if (f){
                       break;
                   }
           }
           
           
                
        }
        if(f==true){
            cout<<ans;
        }
        else{
            ans++;
            x=x+x;
        }
        } 
        if(!f){
            cout<<"-1";
            
        }cout<<endl;
    }
        
        
       
        }
         
         

   


