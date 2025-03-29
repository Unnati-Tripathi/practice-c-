#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[2001],freq[10000];
    for (int i=0;i<2001;i++){
        cin>>a[i];

    }
    for(int i=0;i<2001;i++){
        for(int j=0;j<10000;j++){

            if(a[i]==j){
                freq[j];
                            }
        }

    }
    int len;
    len= sizeof(freq)/sizeof(freq[1]);
    sort(freq,freq+len);
     for(int j=1;j<10000;j++){
        if(ferq(j)==ferq(j-1) && freq[j]!=0){
           cout<<"NO"
        }
     }
     else(cout<<"YES");

}