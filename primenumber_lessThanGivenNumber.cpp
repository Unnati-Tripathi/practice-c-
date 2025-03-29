#include <iostream>

using namespace std;
int prime(int x){
    for (int i=2;i<x;i++){
        if(x%i==0){
            return 0;
            
        }
        
    }
    return 1;
}

int main()
{
    int r;
    cin>>r;
    for(int i=2;i<r;i++){
       if (prime(i)){
           cout<<i<<" ";
       }  
    }
  
    
}


                                                                  //UNDER TLE wala soln :)    ALTERNATE

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;                 //if given no. bhi prime ki list me include krna h to..
    //n++  ;                //#krlo:)
   vector<bool>prime(n,true);
   prime[1]=prime[0]=false;
   int count=0;
   for(int i=2;i<n;i++){
       if(prime[i]){
           count++;
           cout<<i<<endl;
           for(int j=i*2;j<n;j=j+i){
               prime[j]=false;
           }
       }
       
   }
   cout<<count;
    
}
