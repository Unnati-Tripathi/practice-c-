// level order traversal and level orderme creation..

#include <bits/stdc++.h>

using namespace std;


struct node{
  int data;
  struct node* right;
  struct node* left;
  
  node(int data){
      this->data=data;
      right=NULL;
      left=NULL;
  }
};


void builtFromLevelOrder(struct node* &root){
    queue <struct node*> q;
    cout<<"enter the date for root "; // root abhi tk khali tha to koi value to daal do usme ...
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    
    while(!q.empty()){
        struct node* temp=q.front();
        q.pop();
        
        int leftdata;
        cout<<"enter the left data of "<<temp->data<<endl;
        cin>>leftdata;
        
        if(leftdata!=-1){          // koi -1 de raha h iska mtlb vo node null ke equal krni h..
             temp->left=new node(leftdata);
            q.push(temp->left);
        }
        
        int rightdata;
        cout<<"enter the right data of "<<temp->data<<endl;
        cin>>rightdata;
        
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
    //return root;            // if waha upper & na lga hota or ye void fn ki jagah struct node* fn hota 
}

void levelOrderTraversal(struct node* root){
    queue<struct node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        struct node* temp=q.front();
        q.pop();
        if(temp==NULL){ // temp->data null ni hota h blki temp he null hoti h..
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
                
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            
        }
    }
}

int main()
{
    struct node* root=NULL;
    builtFromLevelOrder(root);  // koi proublem ni h struct node* me bhi bs value ko return krana mt bhoolna...and pass by refrence me koi proublem ni h bs..bhoolna mt ki
    levelOrderTraversal(root);
    return 0;
}
