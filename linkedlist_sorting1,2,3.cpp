
     
     

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


void print(struct node* p){
    struct node* ptr=p;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

struct node* insert_tail(struct node* t,struct node* ptr){
    t->next=ptr;
    t=ptr;
    cout<<t->data<<" "<<"insert"<<endl;
     return t;
}






int main()
{
     struct node* head=new node;
     head->next=NULL;
     head->data=2;
      struct node* ptr=head;
      
     ptr=head;
      ptr=insert(ptr,0);
      ptr=insert(ptr,2);
     ptr=insert(ptr,2);
     ptr=insert(ptr,1);
     ptr=insert(ptr,0);
     ptr=insert(ptr,0);
      ptr=insert(ptr,1);
      ptr=insert(ptr,2);

   
    ptr=head;
    print(ptr);
    ptr=head;
     
     
        struct node* oh=new node;
        oh->data=-1;
     
         struct node* ot=oh;
          struct node* zh=new node;
        
        zh->next=NULL;
         struct node* zt=zh;
          struct node* th=new node;
          th->data=-1;
   
         struct node* tt=th;
        
        ptr=head;
        struct node*forw=head;
       
        
        
        
         while(ptr!=NULL){
            if(ptr->data == 0){
                  forw=ptr->next;
                  ptr->next=NULL;
                zt=insert_tail(zt,ptr);
                  ptr=forw;
                print(zh);
                cout<<endl;
            }
             if(ptr->data == 1){
                 forw=ptr->next;
                 ptr->next=NULL;
                ot=insert_tail(ot,ptr);
                 ptr=forw;
                 print(oh);
                cout<<endl;
            }
             if(ptr->data == 2){
                 forw=ptr->next;
                 ptr->next=NULL;
                tt=insert_tail(tt,ptr);
                 ptr=forw;
                 print(th);
                cout<<endl;
            }
         }

        if(oh != ot){
            zt->next=oh->next;
            ot->next=th->next;
            
        }
        else{
            zt->next=th->next;
        }
        ptr=head;
       print(zh->next);



         // cout<<endl;
        // int c1=0,c2=0,c0=0;                 //alternate to alter the values..
        // ptr=head;
        // while(ptr->next!=NULL){
        //     if(ptr->data==1){
        //         c1++;
        //     }
        //      if(ptr->data==0){
        //         c0++;
        //     }
        //      if(ptr->data==2){
        //         c2++;
        //     }
        //     ptr=ptr->next;
        // }
        // ptr=head;
      
        // while(ptr->next!=NULL && c0!=0){
        
        //     ptr->data=0;
        //     c0--;
        //     ptr=ptr->next;
        // }
       
        //  while(ptr->next!=NULL && c1!=0){
        
        //     ptr->data=1;
        //     c1--;
        //     ptr=ptr->next;
        // }
        
        //  while(ptr->next!=NULL && c2!=0){
        
        //     ptr->data=2;
        //     c2--;
        //     ptr=ptr->next;
        // }
        // ptr=head;
        // print(ptr);
    
    
    
    
       