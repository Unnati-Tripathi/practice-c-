#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;                             //to get  a string we need not to right size form befere   even not brackets:)
    cin>>s;
    int end=5,start=0;
   while(end>start){
        swap(s[end],s[start]);
        end--;
        start++;
    }
    cout<<s;
}