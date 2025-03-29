// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct cqueue{
    
    
    int *arr;
    int front;
    int size;
    int rear;

cqueue(int size){
     front=-1;
    rear=-1;
    this->size=size;
    arr=new int[size];
}
void push(int data){
    if(front==-1 && rear==-1){            //just shuru kiya h..
        rear=0;
        front=0;
        arr[rear]=data;
    }
    if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)))//q ki rear ki value na jaane kinni baar loop  me ghoom ghoom ke badhi hogi..
    {
        cout<<"overflow";
        cout<<endl;
        return;
    }
    if(front!=0 && rear==size-1){ // agar front kahi or h or rear leat tk pahuch gaya pr ye to circular queue h na..
        rear=0;
        arr[rear]=data;
        
    }
    else{
        
        rear++;
        arr[rear]=data;   //phle bdhao fir data daalo...
    }
        
    }
    
    
    bool isempty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    void pop(){
        if(front==-1){              // 1st ele
            cout<<"underflow";
            return;
        }
        arr[front]=-1;
        if(front==rear){             //last ele
            front=rear=-1;
        }
        if(front==size-1){            //last tk pahuch gai to isko circular bnane ke liye...
            
            front=0;
        }
        else{
            front++;
            
        }
    }
    void printing(){
        if(front==-1 ){
            cout<<"empty h bhai"<<endl;
            return;
        }
        int a=max(front,rear);
        int b=min(front,rear);
        while(b!=a){
            cout<<arr[b]<<" ";
            b++;
        }
    }

};
int main() {
    cqueue q(10);
    q.push(2);
    q.push(2);
    q.push(2);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.printing();

    return 0;
}