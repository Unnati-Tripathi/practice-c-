// A. Milica and String
// Milica has a string s
//  of length n
// , consisting only of characters A and B. She wants to modify s
//  so it contains exactly k
//  instances of B. In one operation, she can do the following:

// Select an integer i
//  (1≤i≤n
// ) and a character c
//  (c
//  is equal to either A or B).
// Then, replace each of the first i
//  characters of string s
//  (that is, characters s1,s2,…,si
// ) with c
// .
// Milica does not want to perform too many operations in order not to waste too much time on them.

// She asks you to find the minimum number of operations required to modify s
//  so it contains exactly k
//  instances of B. She also wants you to find these operations (that is, integer i
//  and character c
//  selected in each operation).
//we have to return index not no. of A/B required..
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,coub=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                coub++;
            }
        }
        if(coub==k){
            cout<<"0";
        }
        else{
            cout<<1<<endl;
            if(coub<k){
                int counta=0;
                for(int i=0;i<n;i++){
                   if(s[i]=='A'){
                       counta++;
                   } 
                   if(counta==(k-coub)){
                       cout<<i+1<<" B";
                       break;
                   }
                }
            }
            if(coub>k){
                 int countb=0;
                for(int i=0;i<n;i++){
                   if(s[i]=='B'){
                       countb++;
                   } 
                   if(countb==(coub-k)){
                       cout<<i+1<<" A";
                       break;
                   }
                }
               
            }
        }
        
        cout<<endl;
    }
    
}