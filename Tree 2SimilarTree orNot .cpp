// https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1


// class Solution
// {
    
//     private:
//     int val(Node *r){
//         return (r->data);
        
//     }
//     public:
//     //Function to check if two trees are identical.
//     bool isIdentical(Node *r1, Node *r2)
//     {
//         //Your Code here
//         if(r1 == NULL &&r2 == NULL){
//             return 1;
//         }
//         if(r1 == NULL &&r2 != NULL){
//             return 0;
//         }
//          if(r1 != NULL &&r2 == NULL){
//             return 0;
//         }
        
//         bool left1=isIdentical(r1->left,r2->left);
//         bool right1=isIdentical(r1->right,r2->right);
        
//         //int chq=(val(r1->left)==val(r2->left)) ? 1:0;   // ab left right me jaane ka koi point h??
//         int chk=(val(r1)==val(r2)) ? 1:0;
        
//         if(chk && right1 && left1){
//             return 1;
            
//         }
//         else{
//             return 0;
//         }
        
//     }
// };