//youq que is to convert every 2 binary digits of a given string into 00->A , 01->T , 10->c , 11->G

#include<bits/stdc++.h>
using namespace std;
int main(){
    // int stlen;
    // cin>>stlen;
    string s;
    cin>>s;
    
    for (int i=0;i<s.length();i=i+1){                                    //i=i+2 krne ki need ni thi q ki hmm vaise bhi hr baar 1 index gayab kr dete h
        cout<<"i is working\n";
        cout<<s<<endl;
        if(s[i]=='0'){
            if(s[i+1]=='0'){
                s[i]='A';
                s.erase(i+1,1);                          //1 he index bdhane se kaam chljata h..
              }                                            // q ki next 1 index ko to hm vaise bhi erase kr dete h 
                
            
            else{
                 s[i]='T';
                s.erase(i+1,1);
        }
        }
        else{
            if(s[i+1]=='0'){
                s[i]='C';
                s.erase(i+1,1);
                
            }
            else{
                 s[i]='G';
                s.erase(i+1,1);
        }
            
        }
    }
    cout<<s;
    
}
