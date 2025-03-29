//creating binary tree... by using function..

#include <bits/stdc++.h>
using namespace std;


struct node{
    struct node* right;
    int data;
    struct node* left;
    
    
    node(int data){                   //constructor
        this->data=data;
        right=NULL;
        left=NULL;
    }
};

struct node* built_tree(struct node* root){
    
    
    int data;
    cout<<"enter data";
    cin>>data;             // base case ke liye phle define krna hota h data ko...HEY BHAGAWAAN..ITNI FUDDU LDKI H
    
    if(data==-1){          // base condition jb bol de ki -1 h data mtlb tb ruk jao 
        return NULL;          //pta chle ki puchte he chle ja rahe h ki iska left..iska left..iska left..iska left......
    }
    
    root=new node(data);
    cout<<"for left child of "<<root->data<<endl;
    root->left=built_tree(root->left);
    cout<<"for right child of "<<root->data<<endl;
    root->right=built_tree(root->right);
    return root;
    
}

int main()
{
    struct node* root;                   // km se km 1 node to bnao fir decide krenge ki left or right pointer ka kya krna h...
    root=built_tree(root);          //#IMPORTANT kabhi bhi root me catch krana bhoolna mt...
    return 0;
}
