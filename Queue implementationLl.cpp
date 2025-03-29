#include <stdio.h>  
// Declaration of struct type node  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *front=-1;                                                                                                      //globaly declare
struct node *rear=-1;  

// function to insert the element in the Queue 

void enqueue(int x)  
{  
    struct node *newnode;  // declaration of pointer of struct node type.  
    newnode=(struct node *)malloc(sizeof(struct node));  // allocating the memory to the newnode  
    newnode->data=x;  
    newnode->next=0;  
    if(rear==-1)                    // checking whether the Queue is empty or not.  inital node first node 
    {  
        front=rear=newnode;  
        rear->next=front;  
    }  
    else  
    {  
        rear->next=newnode;  
        rear=newnode;  
        rear->next=front;  
    }  
}  
  
// function to delete the element from the queue  
void dequeue()  
{  
    struct node *temp;   // declaration of pointer of node type  
    temp=front;  
    if((front==-1)&&(rear==-1))                      // checking whether the queue is empty or not  
    {  
        printf("\nQueue is empty");  
    }  
    else if(front==rear)  // checking whether the single element is left in the queue  
    {  
        front=rear=-1;  
        free(temp);  
    }  
    else  
    {  
        front=front->next;                           //front ko aage bdhao or rear ko attach/link krao or bekar ko delete krdo
        rear->next=front;  
        free(temp);  
    }  
}  
  
// function to get the front of the queue  
int peek()  
{  
    if((front==-1) &&(rear==-1))  
    {  
        printf("\nQueue is empty");  
    }  
    else  
    {  
        printf("\nThe front element is %d", front->data);  
    }  
}  
  
// function to display all the elements of the queue  
void display()  
{  
    struct node *temp;  
    temp=front;                                       //front se shuru krke..ghuma ke front tk he leaao...
    printf("\n The elements in a Queue are : ");  
    if((front==-1) && (rear==-1))  
    {  
        printf("Queue is empty");  
    }  
  
    else   
    {  
        while(temp->next!=front)  
        {  
            printf("%d,", temp->data);  
            temp=temp->next;  
        }  
        printf("%d", temp->data);  
    }  
}  
  
void main()  
{  
    enqueue(34);   
    enqueue(10);  
    enqueue(23);  
    display();   
    dequeue();   
    peek();  
}  








// queue implementation of inked list

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
        rear->next=temp;                 // isme rear end ko aage bdhate jate h.. or usme naye aane wale temp ko link krate jate h..
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
    push();push();push();
    display();
     //pop();
    // pop();
    // pop();
     pop();
    pop();
    display();

    return 0;
}
