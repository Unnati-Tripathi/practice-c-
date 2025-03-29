//https://leetcode.com/problems/path-sum-ii/









class Solution {
public:
// temp me hmmne & use ni kiya h kyu ki hmm alag alag depth ki list alag alag store krna chate the.. without interference of node of other branch..

void solve(TreeNode* root, int targetSum,vector<vector<int>> &ans,vector<int> temp){
    if(root==NULL) return;
        targetSum-=root->val;
        
        temp.push_back(root->val);
        if(targetSum==0 &&root->left==NULL && root->right==NULL){
            ans.push_back(temp);
        }
        solve(root->right,targetSum,ans,temp);
         solve(root->left,targetSum,ans,temp); 


}

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
         solve(root,targetSum,ans,temp);
        return ans;

    }
};