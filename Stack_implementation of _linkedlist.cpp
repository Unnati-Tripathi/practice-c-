

#include <iostream>
using namespace std;

struct node{
    struct node* next;
    int data;
};

struct node* head = NULL;                               // ye to bhai bs kamal hai ....yr...

void push(){
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    struct node* temp=new node;
    temp->data=data;
    
    if(head == NULL){
        temp ->next=NULL;
        head=temp;
       // cout<<"ye chla "<<endl;
    }
    else{
        temp ->next=NULL;
        temp->next=head;
        head=temp;
       // cout<<" ab ye bhi chla "<<endl;
    }
}

void pop(){
    if(head == NULL){
        cout<<" underflow "<<endl;
    }
   

    else{
        struct node* temp =head;
       head=temp->next;
       delete(temp);
    }
}

void show(){
    if(head == NULL){
        cout<<" Null h bhai mere "<<endl;
    }
    

    else{
       
        struct node* temp =head;
        while(temp != NULL){
           cout<<temp->data<<endl;
           temp=temp->next;
       }
    }
}


int main()
{
   cout<<"stack implementation"<<endl;
   int choice =1;
   while(choice !=4){
    int x;
    cout<<" push-1 "<<" pop-2 " <<" show - 3 "<<" exit - 4 "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        show();
        break;
        case 4:
        choice=4;
        cout<<"******exit******";
        break;
        defalt:
        cout<<"Enter valid statement"<<endl;
    };
   }

    return 0;
}
