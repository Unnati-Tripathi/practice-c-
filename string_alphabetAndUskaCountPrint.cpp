//jo number jitni baar aaye uska count or vo no. print kro
//eg: aaabbcssseff
//>>>a3b2c1d3e1f2                       bss..sorted hone chaiye lexographically
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.length();i++){
        int temp=s[i]-'a';
        freq[temp]++;
    }
    for(int j=0;j<26;j++){
        if(freq[j]>1){
            int count=freq[j];
            int flag=1;
            char alpha=j+'a';
            cout<<alpha;
            while(count>1){
                count--;
                flag++;
                s.erase(s.find(alpha),1);
            }
             cout<<flag;
           
        }
        else if(freq[j]==1){
            char alpha=j+'a';
            cout<<alpha;
            cout<<1;
        }
    }
}