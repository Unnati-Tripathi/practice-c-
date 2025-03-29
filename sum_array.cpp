#include<bits/stdc++.h>
using namespace std;

int input_array(int a[] ,int size){
  
    for( int i=0;i<5;i++){                  // if we are not returning any thing in void then it will just give a warning
        cin>> a[i];                         //but code will run successfully
    }
}
int sum_of(int a[],int size){
    int sum=0;
    for ( int i=0;i<size;i++){
        sum=sum+a[i];
    }
    return sum;
}

int main(){
      int a[5];
    int n;
    cout<<"size of an array\n";
    
    
    
    input_array(a,5);
    cout<<sum_of(a,5);
}