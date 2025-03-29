//agar adjuscent me ek jaise element mile to remove krdo dono ko...
// eg assdssd
//1 ke baad add
//2 ke baad a..
#include<bits/stdc++.h>
using namespace std;


int main(){
   string s;
  
   getline(cin,s);
for (int i=0;i<s.length();i++){                //traversing
    for(int j=i;j<(i+2);j++){                  //traversing of 2 element ka window
      
        if(j==(s.length()-1)){           //agar last wala element hoga to j+1 se compare ni krana hota
            if(s[j]==s[j-1]){
            s.erase(s.find(s[j]),j-1);           //ek jaise miljaye to mitado saale ko..
        }
        }
        if(j==0){                       //j=0 ke liye mt he krao kyon ki j-1 se 1st index ke liye check ho he jayega
            continue;
        }
        else if(s[j]==s[j+1]){
            s.erase(s.find(s[j]),j+1);
        }
        else if(s[j]==s[j-1]){
            s.erase(s.find(s[j]),j-1);
        }
        
    }
   
}
 cout<<s;
}    
      
