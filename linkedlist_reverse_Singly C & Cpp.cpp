
#include <bits/stdc++.h>

using namespace std;
#define ll long long

struct node
{
   int data;
 struct node* next;
   
};


struct node* reverse( struct node* head ){
    
    
     struct node* current=head;
     struct node* forward=NULL;
      struct node* prev=NULL;
      cout<<"head 0";
      while(current!=NULL){
         forward=current->next;
          current->next=prev;
         prev=current;
          current=forward;
      }
          head=prev;
          return head;
       
     
}



struct node*insertion(struct node* ptr,int data){
    
   struct node* temp=new node;                    // ye line yaad krlo..
    temp->data=data;
    temp->next=NULL;
    ptr->next=temp;
    ptr=temp;
    return ptr;

}

void print(struct node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}


int main()
{
   struct node* head=new node;
   head->next=NULL;
   head->data=10;
   
   struct node* ptr= head;
   
   ptr=insertion(ptr,33);
   ptr=insertion(ptr,35);
   ptr=insertion(ptr,37);
   ptr=insertion(ptr,90);
   ptr=insertion(ptr,300);
   
   ptr=head;

   print(ptr);
   
   

   head=reverse(head);


  ptr= head;
  print(ptr);
   

 
}
    
    