//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbVppcnZEWms1am1CalFVMk84MVptVGx4WUp6UXxBQ3Jtc0trUFVLLTFSb3M0WG1GMmVwaE5CSUhlUlRpQkJQTmhHYUg2MjBBZGZNVi1qVkVVR1Z3VTIwUHdHclh0d2xMdklvMkgwUEg0UXY4MVFaNjk3aTljNVdOYXdkSTZreUVnUWkxSEF4cVBoS2RjVzA4cW5OVQ&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Ffirst-non-repeating-character-in-a-stream1216%2F1&v=_gJ3to4RyeQ

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    queue<char> q;
    vector<char> ans;
    map<char,int> count;
    
    for(int i=0;i<s.length();i++){
        
        char a=s[i];
        count[a]++;                //count 1 baar bdhgaya to bdh gaya...never returns back...
        q.push(a);                   // inserted from back i.e. rear end..
        while(!q.empty()){         //queue ko traverse krne ka 1 matra tareeka ..
        
            if(count[q.front()] >1){  //ab item agar kisi iteration me repeate hogaya i.e. >1 then remove hoga ab vo kabhi answer to vo vaise bhi ni bn payega..
                q.pop();           //front se
            }
            else{
                ans.push_back(q.front());
                break;
            }
            
        }
        if(q.empty()){
            ans.push_back('#');
        }
        
    }
    for(auto i:ans){
        cout<<i;
    }

    return 0;
}
