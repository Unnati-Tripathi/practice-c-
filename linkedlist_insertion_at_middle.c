
#include <stdio.h>
#include<stdlib.h>
 struct node{
   int data;
   struct node*link;
 };
void insertion_at_middle(struct node* head,int position){
    struct node *ptr2=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=head;
    printf("enter the data");
    scanf("%d",&ptr2->data);
    // ptr2->data=5;
    ptr2->link=NULL;
    position--;                            //the most impotant steps...
    while(position!=0){                     //-->
        ptr=ptr->link;
        position--;
    }
    ptr2->link=ptr->link;                 
    ptr->link=ptr2;                   //<--
    
}
int main()
{
     struct node *head=(struct node *)malloc(sizeof(struct node));     //simple linkedlist foration
     head->data=2;                                                      //-->
     head->link=NULL;
     struct node *c=(struct node *)malloc(sizeof(struct node));
      c->data=12;
      head->link=c;
    // c->link=head;
      c=(struct node *)malloc(sizeof(struct node));
      c->data=39;
     head->link->link=c;
      c=head;
     while(c!=0){
         printf("%d  ",c->data);
         c=c->link;
     }
     printf("\n");                                                  //<--
     insertion_at_middle(head,2);           //function call..
     c=head;
     while(c!=0){
         printf("%d  ",c->data);
         c=c->link;
     }
     

    return 0;
}