//https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1
Node* solve(Node* root,int &k,int node){
    if(root==NULL){
        return NULL;
    }
    if(root->data==node){
        return root;
    }
   
    Node* leftans=solve(root->left,k,node);
    Node* rightans=solve(root->right,k,node);
    if(leftans!=NULL && rightans==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
            return leftans;
    }
    
    
    if(leftans==NULL && rightans!=NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        
            return rightans;
    }
    return NULL;
    
}
int kthAncestor(Node *root, int k, int node)
{
    
    Node* temp=solve(root,k,node);
    if(temp==NULL || temp->data==node){ // return left ans se ans sirf tb change hota h jb k<=0 hota h jo no ans me kabhi ni hoda.. iss liye ans kabhi left ans se change hokr ansestor ni bnega..
        return -1;
    }
    
    else{
        return temp->data;
    }
    
    }