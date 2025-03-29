



#include <bits/stdc++.h>

using namespace std;


struct node{
  
  int data;
  struct node* next;
    
};


void dublicates(struct node* ptr){          //FOR SORTED LL
    while(ptr->next != NULL){
        if(ptr->next->data == ptr->data){
            cout<<"dublicates is present";
            return;                                            //void me khali Return kr skte h..
        }
        ptr=ptr->next;
    }
    cout<<"dublicates is not present";
}



 struct node* insert( struct node* ptr,int d){
       struct node* temp=new node;                                
       temp->data=d;
       temp->next=NULL;
       ptr->next=temp;
       
       return temp;
 }

void print(struct node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}



int main()
{
     struct node* head=new node;
     head->next=NULL;
     head->data=2;
      struct node* ptr=head;
      
         ptr=head;
  //  print(ptr);
      
      
      ptr=insert(ptr,3);
      ptr=insert(ptr,4);
      ptr=insert(ptr,5);
      ptr=insert(ptr,8);
      ptr=insert(ptr,8);
      ptr=insert(ptr,8);

   
    ptr=head;
    print(ptr);
    ptr=head;
      dublicates(ptr);      //function call
      cout<<endl;
      
       map<int,bool> m;            //MEthod 2..
      struct node* loc;
      ptr=head;
      while(ptr->next!=NULL){
          if(m[ptr->data]==false){
              m[ptr->data]=true; 
              ptr=ptr->next;
          }
          if(m[ptr->data]==true){
              loc= ptr;
              cout<<"dubli present by 2";
              break; 
          }
          
         
      }


        if(loc==NULL){
            cout<<"dub absent";
        }










           map<int,bool> m;        // REMOVING dublicates from unsorted and printing the updated LL 
      struct node* loc;          //MAP OF INT , BOOL
       struct node* prev=head;
      ptr=head;
      while(ptr->next!=NULL){
          if(m[ptr->data]==false){
              m[ptr->data]=true;
              cout<<ptr->data<<" ";
              prev=ptr;
              ptr=ptr->next;
          }
          if(m[ptr->data]==true){                     //use prev if dont want to destroy LL
              loc= ptr->next;                              // prev->next=loc ;          
              delete(ptr);
              ptr=loc;
              
       
           }
          
         
      }


      return 0;
}