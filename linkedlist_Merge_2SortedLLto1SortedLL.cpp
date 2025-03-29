

#include <bits/stdc++.h>            //# WHOLE CODE WRITTEN BY ME ITSELF.....

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
    cout<<endl;
}

int counting(struct node* head){
    struct node* temp=head;
    int count=0;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    return count;
}


// struct node* sorti(struct node* head,struct node* head2){           //this method for sorting without creating a new ll, purane wale me he update...
    
//     struct node*curr1=head;
//     struct node*curr2=head2;
//     struct node*next1=head->next;
//     struct node*next2=head2->next;
//     cout<<"thoda";
//     while(curr2 !=NULL && next1!=NULL){
        
//         if(curr2->data > curr1->data && curr2->data <= next1->data){
//             curr1->next=curr2;
//             next2=curr2->next;
//             curr2->next=next1;
//              curr1=curr2;
//              curr2=next2;
//              cout<<"working";
//         }
//         else{
//             cout<<"work ";
//             curr1=next1;
//             next1=curr1->next;
//             if(next1==NULL){  //ye bahar bhi ho skta h
//                 curr1->next=curr2;
//                 return head;
//             }
//         }
//      }
//      return head;
// }



int main()
{
     struct node* head=new node;
     head->next=NULL;
     head->data=0;
     struct node* ptr=head;
     ptr=head;
  
      
      
      ptr=insert(ptr,1);
      ptr=insert(ptr,2);
     ptr=insert(ptr,6);
      ptr=insert(ptr,11);
       ptr=insert(ptr,15);
      ptr=insert(ptr,20);
      ptr=insert(ptr,21);
      ptr=insert(ptr,200);

         ptr=head;
        print(head);
       
        
        
      struct node* head2=new node;
      head2->next=NULL;
      head2->data=1;
      struct node*ptt=head2;
      ptt=insert(ptt,4);
      ptt=insert(ptt,5);
      ptt=insert(ptt,7);
      ptt=insert(ptt,14);
      ptt=insert(ptt,40);
      print(head2);
      ptr=head;
      ptt=head2;
      int i= counting(head);
      int j= counting(head2);
      cout<<i<<" "<<j<<head->data<<" "<<head2->data<<" "<<endl;

     while( ptr!=NULL && ptt!=NULL){
         //cout<<"working";
         if(ptr->data < ptt->data){                      //simple jo chota ho usko print krwado or fir next pe chle chlo..
             cout<<ptr->data<<" ";
             ptr=ptr->next;
             i--;
             continue;                   //ye likhna zruri h q ki bina continue ke vo fir se dusari condition bhi check krne pahuch jayega.. without checking while ki condition..
             
         }
         if(ptr->data > ptt->data){
            cout<<ptt->data<<" ";
            ptt=ptt->next;
            j--;
             continue;
         }
         
         if(ptr->data == ptt->data){
             cout<<ptr->data<<" ";
             ptr=ptr->next;
             i--;
              cout<<ptt->data<<" ";
            ptt=ptt->next;
            j--;
             continue;
         }
     }
     if(i>j){
        while(i!=0){
          cout<<ptr->data<<" ";
          ptr=ptr->next;
          i--;
        }
     }
      if(i<j){
        while(j!=0){
          cout<<ptt->data<<" ";
          ptt=ptt->next;
          j--;
        }
     }



       
      // if(head->data > head2->data){                  // method 2 ka function call...
      //     cout<<"check";
      //     head=sorti(head2,head);
      // }
      // else{
      //      cout<<"check";
      //    head= sorti(head,head2);
      // }
      // print(head);
       

    return 0;
}
