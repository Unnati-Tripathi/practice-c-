#include<bits/stdc++.h>
using namespace std;

void rev_alt(int a[],int size){
    
    for (int i=0;i<size;i+=2){
        swap(a[i],a[i+1]);
    }

}
void print_arr(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    
}

int main(){
    int a[5]={1,2,3,4,5};
    int b[5];
    rev_alt(a,5);
    print_arr(a,5);
}