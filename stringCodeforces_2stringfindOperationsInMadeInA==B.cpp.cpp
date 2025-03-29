/*agar koi 2 string di h to a,s to s ke saare element jb tk a me ni aa ajte tb tk a=a+a krte rho or last me output do kimkitni baar add krna pda a ko to get all elements in s**/

#include <iostream>

using namespace std;

int main()
{
    string a,s;
    cin>>a; 
    cin>>s;
    
     int fres[26]={0};
     int ret=0,answer=0;
      for(int i=0;i<s.length();i++){
         int temp=s[i]-'a';
         fres[temp]++;
     }
     while(!ret){
         int frea[26]={0};
     for(int i=0;i<a.length();i++){
         int temp=a[i]-'a';
         frea[temp]++;
     }
    
     for (int j=0;j<26;j++){
         frea[j]=frea[j]-fres[j];
        // cout<<frea[j]<<endl;
         //  cout<<fres[j]<<endl;
         if(frea[j]<0){
             ret=0;
             a=a+a;
             answer++;
             break;
             
         }
         else{
             ret=1;
             
         }
     }
}
cout<<answer;
cout<<"done";
    return 0;
}
