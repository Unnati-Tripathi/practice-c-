#include<bits/stdc++.h>
using namespace std;

#define size 5
int arr[size];
int front=-1;
int rear=-1;


void push(){
    cout<<"enter the item";
    int data;
    cin>>data;
   // cout<<size<<rear;
    if(front==-1 && rear==-1){           //pehli baar initiate krne ja rahe...
        front=0;
        rear=0;
        cout<<"ye walw";
        arr[rear]=data;
    }
    else if(rear==size-1){
        cout<<"overflow";
        return;
    }
    else{
        rear++;           //check by applying
        arr[rear]=data;
        
    }
}
void pop(){
    
    if (front>rear || front==-1){
        front=0;
        rear=0;
        cout<<"underflow";
    }
    else{
        arr[front]=-1;
        front++;
    }
}
void printing(){
    int f=front;
    if(front==-1 &&rear==-1 ){
        cout<<"empty";
        return;
    }
     if(front>rear ){    // condition you were missing...//notpossible h ye to.
        cout<<"underflow";
        return;
    }
    
    else{
        
        while(f<=rear){
            cout<<" "<<front<<rear<<" ";
            cout<<arr[f];
            f++;
        }
        
    }
    
}
void isempty(){
    if(front==-1 && rear==-1){
        cout<<"Yes it is Empty\n";
    }
    else{
        cout<<"NO it is not Empty\n";
    }
}


int main ()  
{  
    int choice;
    int x=1;
    while(x){
      
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n5.Isempty\n");  
        printf("\nEnter your choice ?\n");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            push();  
            break;  
            case 2:  
            pop();  
            break;  
            case 3:  
            printing();  
            break;  
            case 4:  
            x=0;  
            break;
            case 5:  
            isempty();  
            break;
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    } 
}              


 //                                              this one is pakka perfect // using stack.....
//implemenntation using linkedlist

               
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
    //cout<<"push"<<front<<rear<<endl;
    if(front==-1 && rear==-1){            //just shuru kiya h..
        rear=0;
        front=0;
        arr[rear]=data;
        return;
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
        return;
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
        if(front==-1&& rear==-1){              // 1st ele
            cout<<"underflow"<<endl;
            return;
        }
        arr[front]=-1;
        if(front==rear){
            front= -1;
            rear=-1;
            return;
        }
        if(front==size-1){            //last tk pahuch gai to isko circular bnane ke liye...
            front=0;
            return;
        }
        
            front++;
          //  cout<<" oh bhaisaheb ";
        
    }
    void printing(){
        
        if(front==-1 && rear==-1 ){
            cout<<"empty h bhai"<<endl;
            return;
        }
        int a=front;
        
        while(a<=rear){
            
            cout<<arr[a]<<" ";
           //a++;
            a=(a+1)%size;
        }
        
    }

};
int main() {
    cqueue q(10);
    q.push(2);
    q.push(2);
    q.push(2);
     q.printing();
    q.pop();         
    q.pop();
    q.pop();        //yaha first=rear=-1 ho gaya h.....
    q.printing();
    cout<<endl;// yaha pr last element bhi
    q.pop();        //underflow
    q.pop();
    q.push(3);
   // q.pop();
    q.printing();

    return 0;
}