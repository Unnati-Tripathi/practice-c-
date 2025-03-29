#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;
    
    node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};

void addtree(node* &root, int data){
    
    if(root==NULL){
        node* temp= new node(data);
        root=temp;
        return;
    }
    
    if(root->data > data){
        addtree(root->left,data);
    }
    else{
        addtree(root->right,data);
    }
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
void construct(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        addtree(root,data);
        cin>>data;  // ye kuch naya h kyu ki pehle hme ye pta ni tha ki ek he variable me multiple times input liya ja skte h
    }
}
node* deletion(int data,node* root){
    if(root==NULL){
        return root; //mistake
    }
    if(root->data==data){
        //0 child
        if(root->left == NULL && root->right==NULL){
            delete root; //mistake
            return NULL;
        }
        
        //1 child
       else if(root->left != NULL && root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL && root->right!=NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        
        //2 child
        else if(root->left!=NULL && root->right != NULL){
        node* temp=root->right;//right sa sbse chota element(beta LOL)
        while(temp->left!=NULL){
            temp=temp->left;
        }
        int mini=temp->data;
        root->data=mini;
        root->right=deletion(temp->data,root->right); // q ki temp jo tha vo root ke right ka mini value wala node h..or upper se ye recursion h to aise he hawa me kuch bhi delete ni kr skte..like jaise maine pehle kiya tha.. in next line:(
        //delete temp;
        return root;
        
        }
    }
    if(root->data<data){
         deletion(data,root->right);
         return root;
    }
    else{
         deletion(data,root->left);
         return root; //check return root krna pda q ki ye non- void function h...
    }
}

int main() {
    node* root=NULL;
    construct(root);
    levelOrderTraversal(root);
    cout<<endl<<endl;
   root= deletion(10,root);
   levelOrderTraversal(root);
}
//10 8 21 7 27 5 4 3 -1 lo bhai bne bnaye inout bhi lelo... LOL