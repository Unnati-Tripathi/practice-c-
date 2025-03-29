#include<bits/stdc++.h>
using namespace std;
//#define void lower;
void lower(string s ){                                  //saari string ko ek he capslock me likhne ke liye
    for(int i=0;i<s.length();i++){
        if(s[i]>'Z'&&s[i] <'A'){
            s[i]=s[i]+'a'-'A';
        }
    }
}
void freq(string s,int a[]){
    int fre;
    for(int i=0;i<s.length();i++){
    fre=s[i]-'a';
    a[fre]++;
        
    }
}
int main(){
    string s;
    getline(cin,s);
    lower(s);
    int a[26]={0};                                    //1 int array for every alphabet having 26 jagah all initialized with 0
    freq(s,a);
    int max=INT_MIN,maxi;
    for(int i=0;i<26;i++){
        if(max<a[i]){
            max=a[i];
            maxi=i;
            
        }
    }
    char ans=maxi+'a';                       // last me fir se char me convert kr diya
    cout<<ans;
    return 0;
}