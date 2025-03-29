#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        // int n;
        // cin>>n;
        // //int va;vo;
        // // int count=10;
        // // while(count==0){

        // // }
        // if(n%3==0){
        //     cout<<"Second";
        // }
        // else{
        //     cout<<"First";
        // }
                              // THIS ONE UPPER WALA WORKS YAAR....:)



        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>n;
        }
        int max=0,min=INT_MAX;
        if(n==0 || n==1){
            cout<<0;

        }
        else{
        for(int i=0;i<n;i++){
            if(n%i==0){
                for(int j=0;j<n;j+i){
                    int sum=0;
                    sum=a[i]+a[i+1]+a[i+2];
                    if(sum>max){
                        max=sum;
                    }
                    if(sum<min){
                        min=sum;
                    }

                }
            }
        }
        cout<<max-min;
    }
    }
}

