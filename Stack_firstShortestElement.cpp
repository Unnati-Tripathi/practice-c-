#include <bits/stdc++.h>
using namespace std;


void printing(stack <int> st){
    if(st.empty()){
        return;
    }
    int num=st.top();
    st.pop();
    cout<<num<<" ";
    printing(st);
    st.push(num);
}

void shortest(int que[]){
    stack <int> a;
    stack <int> ans;
    a.push(-1);
    
    for(int i=4;i>=0;i--){
        int ch=que[i];
        
        if(a.top()<ch){
            ans.push(a.top());
            a.push(ch);
        }
        else{
            while(a.top()>ch ){
                a.pop();
            }
            ans.push(a.top());
            a.push(ch);
        }
        
        
    }
    printing(ans);
}


int main()
{
    //std::cout<<"Hello World";
    stack<int> s;
    s.push(34);
    s.push(45);
    s.push(2);
    s.push(12);
    s.push(1);
    printing(s);
    cout<<endl;
    
    int que[5]={34,4,2,12,1};
    shortest(que);
    
    
    
    
    return 0;
}