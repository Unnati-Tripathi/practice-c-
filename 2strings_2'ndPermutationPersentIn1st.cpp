//string d ka koi bhi permutation agar a me present ho to true else false 
#include<bits/stdc++.h>
using namespace std;
bool check(int chd[],int cha[]){               //function if a.lenght(temp wali) me d.length present h
    for (int i=0;i<26;i++){
        if(chd[i]!=cha[i]){
            return 0;
            
        }
    }return 1;
}
int main(){
    string a,d;
    cin>>a;
    cin>>d;
    int chd[26]={0};
        int cha[26]={0};
    for (int i=0;i<d.length();i++){                //d ke saare element ki frequency
        int temp=d[i]-'a';
        chd[temp]++;
    }
    int i=0,flag=0;                                    //flag for not present condition
    while(i<a.length() && i<d.length()){             //phle d.lenght ka he test krlo fir aage ke liye a me window/temp update krti rhna
        int temp=a[i]-'a';
        cha[temp]++;
        i++;
}
    if(check(chd,cha)){
          cout<<"present";
    
    
    }
    while(i<a.length()){
        int temp=a[i]-'a';
        cha[temp]++;                //naya index window mee add kr diya
        temp=a[i-d.length()]-'a';      //for eg window 3 ki h or ab 4th element daalna tha to char of a me to increase kr
                                         //diya per 1st index ko htane ke liye d ki lenght ko a ki length se minus kr do
        cha[temp]--;
          if(check(chd,cha)){
          cout<<"present/n";
          }
                  i++;
    }
    
}    
      