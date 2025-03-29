

#include <bits/stdc++.h>

using namespace std;


struct node{
  
  int data;
  struct node* next;
    
};
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

bool isloop(struct node* head){
    struct node* temp=head;
    while(temp->next!=NULL ){
        if(temp->next==head){
            return 1;
            break;
        }
        cout<<"checking"<<" ";
        temp=temp->next;
    }
    return 0;
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
     struct node* cpt=head;

      ptr=insert(ptr,5);

      ptr=insert(ptr,6);
      ptr=insert(ptr,8);
      ptr=insert(ptr,9);
      ptr->next=cpt;
      
      
      
      
      if(isloop(head)){         // checking if loop is present or not..
          cout<<"loop is present"<<endl;
      }
      else{
          cout<<"loop is NOT present";
      }
     
     
     
      
    //   map<struct node*,bool> m;        // code for jaha se loop lga ho saala udher se puri ll ko kaat do....
    //   struct node* loc;
    //   ptr=head;
    //   while(ptr->next!=NULL){
    //       if(m[ptr]==false){
    //           m[ptr]=true; 
    //           ptr=ptr->next;
    //       }
    //       if(m[ptr]==true){
    //           loc= ptr;
    //           break; 
    //       }
         
    //   }
    //   ptr=head;
    //   while(ptr != loc){
    //       cout<<ptr->data<<" ";
    //       ptr=ptr->next;
    //   }
    
    
    
    
    
      map<struct node*,bool> m;                   // jaha se loop ho isko null se point krado to 
      struct node* loc;                          // mtlb ki ll ko seedha krdo..
      
      ptr=head;
      while(ptr->next!=NULL){
          if(m[ptr]==false){
              m[ptr]=true; 
              ptr=ptr->next;
          }
           if(m[ptr->next]==true){
              ptr->next=NULL;
              break; 
          }
         
      }
      ptr=head;
      while(ptr != NULL){
          cout<<ptr->data<<" ";
          ptr=ptr->next;
      }

    // ptr=head;
    // print(ptr);

    return 0;
}
