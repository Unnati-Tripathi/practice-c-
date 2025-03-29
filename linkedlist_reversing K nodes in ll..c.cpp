struct node* reverse( struct node* head,int k ){
    
    
    if(head==NULL){
        return NULL;
    }
    
     struct node* current=head;
     struct node* forward=NULL;
      struct node* prev=NULL;
      int count=0;
      while(current!=NULL && count<k){
         forward=current->next;
          current->next=prev;
         prev=current;
          current=forward;
          count++;
      }
     
          if(forward != NULL){
              head->next=reverse(forward, k);
          }
              head=prev;
          return head;

}