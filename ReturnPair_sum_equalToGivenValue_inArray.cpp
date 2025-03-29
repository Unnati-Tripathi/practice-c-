#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[7] = {10, 20, 30, 50, 50, 100, 220};

    int k;
    cin>>k;
    int flag=0;
   // siz=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<7;i++){
     
        for(int j=i+1;j<7;j++){
            if((a[i]+a[j])==k){
                cout<<i+1<<" "<<j+1;
                cout<<endl;
                flag++;
               
                a[i]=-22345;
                a[j]=-22345;
                 break;
            }
        }
    }
    if(flag==0){
        cout<<"no such pair exist";
        return 0;
    }
}