#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       int ans=0;
       for(int  i=0,j=1,k=2;i<s.length()-2 && j<s.length()-1 && k<s.length();i++,j++,k++){
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                   if(s[k]=='a' || s[k]=='e' || s[k]=='i' || s[k]=='o' || s[k]=='u'){
                       ans++;
                   }
               }
           }
       }
       if(ans){
            cout<<"Happy";
       }
       else{
           cout<<"Sad";
       }
      cout<<endl;
    } 
    
}




//                          Alter Window Bnake....IThink not compleate yt... ni hogaya compleate....dublicate letters ki abhi soln ni kiya h



#include <bits/stdc++.h>
using namespace std;

void freq(string s,int len,int fsrq[]){            //function for counting frequency
    for(int i=0;i<len ;i++){//s.length()try
    int temp=s[i]-'a';
    fsrq[temp]++;
    }
    cout<<s<<endl;
    
}
int main() {
    
       string s;
       cin>>s;
       string v="aeiou";
       int len=5;
       int frq[26]={0};                  //vowels ki frequency
       int fres[26]={0};
       freq(v,len,frq);
       int m=2;
    
      freq(s,3,fres);                     // 3 digit tk s string ki frequency nikallo..
    
       
       int count=0;
       for(int i=0;i<26;i++){                  //agar starting he same h to fir return true..
           if(frq[i]!=fres[i]){
               count++;
               cout<<"this for "<<char(i+'a')<<endl;
            //   if(count>2){
            //       break;
            //   }
           
           }
           cout<<char(i+'a')<<" "<<frq[i]<<" "<<fres[i]<<endl;
           
           
       }
       
    //    cout<<"count"<<count<<endl;           //for checking the functionality
    //    cout<<"running2";
       if(count<=2){            //2 to alag honge he q ki vovel ki frequency 5 h or s ki abhi to 3 he h q ki min 3 line se koi bhi 3 vowel hone chaiye
           cout<<"Happy";
       }
       else{
           int counter=0;
           while(m<s.length()){                         //m=2 index ke aage ki baat krni h..
            //   cout<<"running3";
               m++;
               int temp=s[m]-'a';
               fres[temp]++;
               temp=s[m-3]-'a';
               cout<<char(temp+'a')<<endl;
               fres[temp]--;                    //iske baad upper wala process repeated
               int counte=0;                     //naya counter variable q ki last for me  pichle wale ki value kuch increase hogai hogi...
        for(int i=0;i<26;i++){
           if(frq[i]!=fres[i]){
               counte++;
             //   cout<<char(i+'a')<<" "<<frq[i]<<" "<<fres[i]<<endl;
           }
       }
       
       if(counte<=2){
           cout<<"Happy";
           counter++;
           break;
           
       }
       cout<<"running4";
           }
           if(counter==0){
               cout<<"Sad";
               
           }
       }
    
     
    
}