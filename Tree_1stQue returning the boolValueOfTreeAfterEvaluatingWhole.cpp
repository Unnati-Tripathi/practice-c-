//https://leetcode.com/problems/evaluate-boolean-binary-tree/solutions/4924199/evaluate-boolean-binary-tree/
//https://leetcode.com/problems/evaluate-boolean-binary-tree/description/
# Intuition

The intutiion is to go to each node and start evluating the values either by performing OR / AND operation. And with the help of recursion we successively perform the process starting from the end till the root node and return the value.

# Approach

first we write the base condition which is for leaf node (last node of tree). 
it could either be 1 or 0 so we return its value.

Next step is to traversing each node by using left and right bool variables.

Next step is to make a bool variable named as eval, in which we evaluate the the values comming from left and right child of node.

Hence return the final result which would stored into eval.

# Complexity
- Time complexity:
0(n)


# Code
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->val==0){
            return false;
        }
        if(root->val==1){
            return true;
        }
        bool left=evaluateTree(root->left);
        bool right=evaluateTree(root->right);
        bool eval;         
        if(root->val ==2 ){
            eval=left||right;
        }
        if(root->val ==3 ){
            eval=left&&right;
        }
        return eval;
        
    }
};
```