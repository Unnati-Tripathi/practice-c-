#include<bits/stdc++.h>
using namespace std;


string ev_od(int x){                    //oh woa.. string me bhi return kr skta h ye to...

    if(x%2==0){
        return "true";
    }
    else{
        return "false";
    }
}

int main(){

    int a;
    cin>>a;
    cout<<ev_od(a)<<endl;
    char ch[3]={'1','a','#'};
    cout<< ch[2]<<endl;
}