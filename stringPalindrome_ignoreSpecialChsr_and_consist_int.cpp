#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    cout<< s<<endl;
   int si=s.length();
      int si,c=0;
    for(int i=0;s[i]!='\0';i++){            //size pta krne ke liye..
        si++;
    }
    
   // tolower(s.begin(),s.end());                       //function sugested by anshika mam for tolower case
    for(int i=0;i<si;i++){                  //sbko lower case me change krne ke liye
        if(s[i]<='Z' && s[i]>='A'){
            char temp;
            temp=s[i];
            temp=temp+'a'-'A';
            s[i]=temp;
             //  cout<< s<<endl;
            
        }
         else{
                 continue;
             
             }
    }
      cout<<s<<endl;
   
        int end=si-1,start=0; 
        int INT_MIN;
    while(end>start){
        if(!(s[start]>='a'&& s[start]<='z')  ){            //start pe special character aaye to skip hojaye
             if(!(s[start]>='1' && s[start]<='9')){          // 1 and 9 are also characters as we are considering them in array
            start++;
             }
        }
        if(!(s[end]>='a'&& s[end]<='z') ){//agar end pe special character aaye to skip hojaye
           if(!(s[end]>='1' && s[end]<='9')){                  // q ki strimg yahi h ki ek he space occupy kre to 2 digit
           
            end--;
           }
        }
        if(s[end]!=s[start]){                                    //condition for all character palindrom check krne ki..
            cout<<"not answer\n";
              c++;
            break;
          
        }
        end--;                                   // sb hone ke baad end peeche 1 kdm
        start++;                            // sb hone ke baad start aage 1 kdm
    }
     if(c==0){
        cout<<"yes a palindrome";               // yes ka case print krane ke liye
    }
}