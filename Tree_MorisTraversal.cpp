#include <iostream>

using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;
}

Node* predss(Node* curr){
    Node* temp=curr;
    temp=temp->left;
    while(temp!=curr && temp!=NULL){
        temp=temp->right;
    }
    return temp;
}
void moris_traversal (node* root){
    Node* curr=root;
    while(curr !=NULL){
        if(curr->left == NULL){
            value.push_back(curr);
            curr=curr->right;
        }
        else{
            pred=predss(curr);
            if(pred->right==NULL){          // abhi temp bna rahe h..
                pred->right=curr;
                curr=curr->left;
                
            }
            else{
                pred->right=NULL;
                value.push_back(curr);
                curr=curr->right;
            }
        }
    }
}