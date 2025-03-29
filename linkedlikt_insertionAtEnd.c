// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *link;
};
 void inseart_at_last(struct node* head){
     struct node *temp=(struct node*)malloc(sizeof(struct node));
     printf("enter the element at hend of node");
     scanf("%d",& temp->data);
     temp->link=NULL;
     struct node *ptr=head;
     while(ptr->link != NULL){
        ptr= ptr->link;
     }
      ptr->link=temp;
 }
  struct node* inseart_at_head(struct node* head){
     struct node *temp=(struct node*)malloc(sizeof(struct node));
     printf("enter the element at head");
     scanf("%d",& temp->data);
     printf("ok");
    // struct node *ptr=head;
    temp->link=head;
    printf("ok");
    head=temp;
    return head;
    printf("ok");
  
 }
  void print(struct node* head){
     
     struct node *ptr=head;
     while(ptr != NULL){
       printf("%d",ptr->data);
       ptr=ptr->link;
     }
     
 }
 
int main() {
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("enter the 1 element");
    scanf("%d",& head->data);
    head=head->link=NULL;
    
   inseart_at_last(head);
    inseart_at_last(head);
    inseart_at_last(head);
    print(head);
   // head=inseart_at_head(head);
    print(head);
    return 0;
}