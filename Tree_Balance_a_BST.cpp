//https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1

class Solution{                                            // BRUTE force code aaram se Height of left-Height of right krke ans nikal liya
                                                           // but T.C = 0(n^2)
    
    private:
    
    int height(Node *root){
        //struct Node* temp=root;
        
        if(root == NULL){
            return 0;
        }
        
        
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right);
        ans++;
        return ans;
        
    }
    public:
    //Function to check whether a binary tree is balanced or not.
     bool isBalanced(Node *root){
        
        struct Node* temp=root;
        if(temp==NULL){
            return true;
        }
        bool left=isBalanced(temp->left);
        bool right=isBalanced(temp->right);
        bool check=abs(height(temp->left)-height(temp->right)) <=1 ?1:0  ; 
        if(check !=1){
            return false;
        }
        else if(check && right && left){
            return true;
        }
        else{
            return false;
        }
      
};





//                  Advanced solution using Pair for both functions simentaneously

class Solution{

    public:
    //Function to check whether a binary tree is balanced or not.
    pair<int,bool> is(Node *root)
    {
        //  Your Code here
        pair<int,bool> p;
        if(root==NULL){
            pair<int,bool> p1=make_pair(0,true);
            return p1;
        }
        pair<int,bool> left=is(root->left);
        pair<int,bool> right=is(root->right);
        
        bool l=left.second;
        bool r=right.second;
        bool check=abs(left.first - right.first)<=1 ? 1 :0;
        pair<int,bool> ans;
        ans.first=max(left.first,right.first)+1;
         if(check && r && l){
            ans.second=true;
        }
        else{
            ans.second=false;
        }
        return ans;
    }
    bool isBalanced(Node *root){
        return is(root).second;
    }
};