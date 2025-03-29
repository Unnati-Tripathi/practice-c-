// ITERATIVE WAY

//  vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> result;
//         stack<TreeNode*> s;
//         TreeNode* curr = root;
//         while(curr != nullptr || !s.empty()){
//             while(curr != nullptr){
//                 s.push(curr);
//                 curr = curr -> left;
//             }
//             curr = s.top();
//             s.pop();
//             result.push_back(curr -> val);
//             curr = curr -> right;
//         }
//         return result;
//     }







// RECURSIVE


//  vector<int> inorderTraversal(TreeNode* root) {
//         if (root == 0) { return result; }

//         inorderTraversal(root->left);
//         result.push_back(root->val);
//         inorderTraversal(root->right);

//         return result;
        
//     }