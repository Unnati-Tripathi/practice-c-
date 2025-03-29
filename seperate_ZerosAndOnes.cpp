#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6]={ 1, 1, 1, 0, 0, 0};
    int m=0;
    for(int i=0;i<5;i++){
        // if(a[m]==1){
        //     i--;
        // }
        // else{
        //       m++;
        
        // }
        for(int j=0;j<5-i;j++){
            if(a[j]==0){
                break;
            }
            else if(a[j]==1) {
                swap(a[j],a[j+1]);
            }
             for(int i=0;i<6;i++){
    cout<<a[i];
    }
    cout<<endl;

        }
    }
       for(int i=0;i<6;i++){
    cout<<a[i];
    }
}
      // Not Bad solution h ye bhi....
      
      //sir wala
      int main(){
        int s[6]={1, 1, 1, 0, 0, 0};
        int i,j;
        while(  i<6 && j>0){                            // yaha pe i,j ko define krna
             if(s[i]==0){
                break;
             }
             if(s[j]==1){
                j--;
             }
             else if(s[i]==1 && s[j]==0){
                swap(s[i],s[j]);
             }
        }
      }