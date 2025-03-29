#include<bits/stdc++.h>
using namespace std;

void print(stack<int> &s){         // finally maine khud se kabhi recurcive program likha h...:)
    //base case                   // #PRINTING
    if(s.empty()){
        return;
    }
    
    int x;
    x=s.top();
    cout<<x<<" ";
    s.pop();
    //recursive call
    print(s);
    s.push(x);
    
}

void insertAtPosition(stack<int> &s,int x){
    //base case
    if(s.empty() || (s.empty()!=1 && s.top()>x)){        // top ka element sbse bda hoga iska mtlb
        s.push(x);              //ya to khali ho to push krdo ya fir khali na ho magar apne aage wale no. se chota ho..
        return;
    }
    
    int n=s.top();
    s.pop();
    //recursive call
    insertAtPosition(s,x);
    
    s.push(n);
    
}


void sort(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();
    
    sort(s);
    
    insertAtPosition(s,x);
}


int main(){
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(46);
    s.push(67);
    s.push(400);
    s.push(54);
    s.push(43);
    s.push(98);
    print(s);
    cout<<endl;
    sort(s);
    print(s);
}