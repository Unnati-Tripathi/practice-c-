#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev ;
     struct Node* next ;
};
void printt(struct Node *head){
    struct Node *ptr=head;
    while(ptr!=NULL){
    printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    printf(" \n");
}

struct Node* Atend(struct Node *ptr,int data){
    struct Node *temp= malloc(sizeof(struct Node));
    temp->data=data;
    temp->prev=ptr;
    ptr->next=temp;
    temp->next=NULL;
    return temp;
}

int main(){
    struct Node *head= malloc(sizeof(struct Node));
    head->next=NULL;
    head->prev=NULL;
    head->data=20;
    printt(head);
    struct Node *ptr= head;
    ptr = Atend(ptr,12);
      printt(head);
      ptr=Atend(ptr,132);
        printt(head);
}