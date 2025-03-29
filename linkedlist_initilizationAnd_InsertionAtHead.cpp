#include <iostream>               //SUPER COOL smjh me aagaya tha yr :)

using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this -> data=data;
        this -> next= NULL;            // starting me hmesha null se he originate krate h node ke next ko..
    }                                  //fir need ke hisab se usko alag alag jagah pr insert kra lete h..
    
};
    void insertHead(node* &head,int d ){            //try to avoide same termology as used in the class itself otherwise use this
        node *temp= new node(d);                //node ke ander he node ke constructor ko call ke rahe h yr :(  WRONG INFO ye ek aalg function h :)  
        temp -> next=head;
        head = temp;
    }
    
    void print(node* &head){
        node* tmp=head;                            // iske kaam ke liye ek  naya pointer define kra gaya
        
        while(tmp != NULL){
           cout<< tmp -> data<<" ";
           tmp=tmp->next;
           
        }
        cout<<endl;
        
    }


int main()
{
    node* n1=new node(10);
    cout<<n1 ->data <<endl;
    cout<<n1 ->next <<endl;
    node* head=n1;                   //ek pointer jo ki head (hmesha strting ko) ko point krta h
    insertHead(head,15);
    print(head);
    insertHead(head,155);
    insertHead(head,156);
    insertHead(head,157);
    print(head);
    return 0;
}