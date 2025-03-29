#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int si,c=0;
    for(int i=0;s[i]!='\0';i++){            //size pta krne ke liye..
        si++;
    }
      cout<<si<<endl;  
      for(int i=0;i<si/2;i++){
         if(s[i]!=s[si-i-1]){
             cout<<"not answer\n";
             c++;
              break;
              
         }
          
      }
                                                       
                                              //   ye bhi ek tareeka h...total fir hmare pass 2 mst tareeke h aise proublems ke liye..
                                              // 2 pointer approch
     // int ,end=si-1,start=0;                                             
    // while(end>start){
    //     if(s[start]=='/0'){
    //         start++;
    //     }
    //     if(s[end]!=s[start]){
    //         cout<<"not answer\n";
    //           c++;
    //         break;
          
    //     }
    //     end--;
    //     start++;
    // }
     if(c==0){
        cout<<"yes a palindrome";
    }
}
