//proublem named rook

//https://codeforces.com/problemset/problem/1907/A





#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
       string s; 
       cin>>s;
       char alpha=s[0];
       
       int num=s[1]-'0';
      for(int i=1;i<=8;i++){
          char a;
          a=i+'a'-1;
         
          
          if(a!=alpha){
             
              cout<<a<<num<<endl;
          }
      }
        for(int i=1;i<=8;i++){
         
          
          if( num!=i){
              cout<<alpha<<i<<endl;
             
          }
      }
    }
   
}
    
    /*  if d5: soln:-

d1
d2
b5
g5
h5
d3
e5
f5
d8
a5
d6
d7
c5
d4

    */
   

