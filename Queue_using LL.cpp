

#include <bits/stdc++.h>

using namespace std;


struct node{
  int data;
  struct node* next;
  
};
struct node*front=NULL;
struct node*rear=NULL;


void push(){
    struct node*temp=new node;
    
    if(temp==NULL){
        cout<<"overflow";
    }
    int data;
    cout<<"enter the values";
    cin>>data;
    temp->data=data;
    temp->next=NULL;
   // temp=rear;
    
    if(front==NULL){            //check
        rear=temp;
        front=temp;
       // rear->data=data;
        //rear=rear->next;
        cout<<"YE wala "<<front->data<<endl;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
void pop(){
   
    if(front==NULL){
        cout<<"underflow"<<endl;
        return;
    }
    if(front==rear){ 
        cout<<endl<<front->data<<endl;// ek he element h       
        struct node*ptr=front;
        front=NULL;
        rear=NULL;
        delete(ptr);
    }
    else{     
       cout<<endl<<front->data<<endl;
       struct node*ptr=front;
       front=front->next;
       delete(ptr);
    }
    
}
void display(){
    struct node*ptr=front;
    if(ptr==NULL){
        cout<<"EMPTY";
        return;
    }
    else{
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}

int main()
{
    push();
   // push();push();push();
    display();
    // pop();
    // pop();
    // pop();
     pop();
    pop();
    display();

    return 0;
}
