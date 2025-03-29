#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while (t){

        t--;
        long long d,s,k;
        cin>>s;
        cin>>d;
        cin>>k;
        long long bun,patty,cheese;
        while(s){
              bun+=2;
              patty++;
              cheese++;
            s--;
        }
       
        while(d){
              bun+=2;
             cheese+=2;
             patty+=2;
             d--;   
        }
        if(d!=0 || s!=0){
           bun--;
        }
        long long min = INT_MAX;
        if(min>bun){
            swap(min;bun);

        }
         if(min>patty){
            swap(min;patty);

        }
         if(min>cheese){
            swap(min;cheese);

        }
        cout<< min;

    }
}