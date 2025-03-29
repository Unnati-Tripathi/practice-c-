#include <iostream>

using namespace std;

int main()
{
   int x[5]={1,2,3,4,4};
   int a;
   a=sizeof(x)/sizeof(x[0]);
   int flag=0;
   for(int i=0;i<a;i++){
       for(int j=i+1;j<a;j++){               //j ko i+1 se start hona chaiye..  otherwise flag hmesha he 0 return krega.. j=i se he shuru hoga na
           if(x[i]==x[j]){
             flag++;                         //edge case ke liye h ye...
             cout<<"no is "<<x[i]<<endl;
             
           }
           
       }
      
       }
        if(flag==0){
           cout<<"no such number exist";
   }
   
}

                                              #    ALTERNATE    #

 #include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x[5]={1,2,2,3,4};
    int answer=0;
    for(int i=0;i<5;i++){
        answer=answer^i^x[i];
    }
    cout<<"the number is "<<answer;
    return 0;
}                                                 

                                              #VECTOR pdh liya ho to fir galti btao..
                                              
                                              
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>ve[5];
    // while(cin>>""){
        
    // }
    for(int i=0;i<ve.size();i++){
        cin>> ve[i];
    }
    int answer=0;
    for(int i=0;i<ve.size();i++){
        answer=answer^i^ve[i];
    }
    cout<<answer;
}