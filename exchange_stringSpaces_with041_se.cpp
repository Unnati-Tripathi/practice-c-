#include <string>
#include<vector>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   vector<char> ans; //sekha ki kabhi bhi koshish krke vector ki string mt lo.
  
   for( int i=0;i< s.length();i++){
      if(s[i]==' '){
          ans.push_back('@');    //string me push krne ke liye ' 'me likhna pdta h
          ans.push_back('4');       // char ki string h tabhi 1 char at a time
          ans.push_back('2');
         
       }
       else{
           ans.push_back(s[i]);
        }
   }
    for( int i=0;i<ans.size();i++){     //size of vector s.size()
   cout<<ans[i];
}
    return 0;
}
// #include <string>            // vector of char bhi le skte h done by mam
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    string s;
//    getline(cin,s);
//    vector<string> ans; //sekha ki kabhi bhi koshish krke vector ki string mt lo.
  
//    for( int i=0;i< s.length();i++){
//       if(s[i]==' '){
//           ans.push_back("@42");    //string me push krne ke liye ' 'me likhna pdta h
//         //   ans.push_back("4");       // char ki string h tabhi 1 char at a time
//         //   ans.push_back("2");
         
//        }
//        else{
//            cout<<s[i]<<endl;
//            string a=to_string(s[i]);
//            ans.push_back(a);
//            cout<<a<<endl;
//         }
//    }
//     for( int i=0;i<ans.size();i++){     //size of vector s.size()
//          cout<<ans[i];
// }
//     return 0;
// }
