#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,flag=0,pwr=0;
    cin>>n;
    int m=3;
    while(n!=1 && n!=0){
        m=n%2;
        //cout<<m<<endl;
        if(m==1){
            flag++;
        }
        pwr++;
        n/=2;

    }
    if (flag==0){
    cout<<"yes it can be..\n";
    cout<<"2 ki power"<<" "<<pwr;
    }
    else{
        cout<<"it ca't be";
    }
    

} 