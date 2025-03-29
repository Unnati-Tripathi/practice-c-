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

int main() {
    node* root=NULL;
    construct(root);
    levelOrderTraversal(root);
}




// fir se construction of tree...

// #include <bits/stdc++.h>

// using namespace std;
// class node{
//     public:
//     int val;
    
//     node* right;
//     node*left;
//    node(int val){
//         this->val=val;
//         right=NULL;
//         left=NULL;
//     }
// };

// void built(node* root){
//     // int val;
//     // cin>>val;
//     // root=new node(val);
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         node*    temp=q.front();
//         q.pop();
//         cout<<"enter data for left child";
//         int data;
//         cin>>data;
//         if(data!=-1){
//             temp->left=new node(data);
//             q.push(temp->left);
//         }
        
        
//         cout<<"enter data for right child";
//         int dat;
//         cin>>dat;
//         if(dat!=-1){
//             temp->right=new node(dat);
//             q.push(temp->right);
//         }
        
//     }
    
    
// }

// void level(node* root){
//     queue<node*> q;
//     if (root==NULL) return;
//     q.push(root);
//     while(!q.empty()){
//         node*temp= q.front();
//         q.pop();
//         cout<<temp->val;
//         if(temp->left) q.push(temp->left);
//         if(temp->right) q.push(temp->right);
//     }
// }

// int main() {
//     int data;
//     cin>>data;
//     node* root=new node(data);
//     built(root);
//     level(root);
    
// }
// // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1