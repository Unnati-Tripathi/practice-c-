
//         https://www.naukri.com/code360/problems/largest-bst-subtree_893103?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar



class info{
    public:
    int size;
    int maxi;
    int mini;
    bool isbst;
};

class soln{
public:
info soln(TreeNode * root,int &ans){
    if(root==NULL){        // base case for leaf nodes
      return {0, INT_MIN, INT_MAX,true};
    }
    info left=soln(root->left,ans); // post order call     OR   tukde tukde me tod lo
    info right=soln(root->right,ans);

    info curr;                                         // present node ki information(info  update krdo..)
    curr.size=left.size+right.size+1;
    curr.maxi=max(right.maxi,root->data); // check dono ka ans daalke...
    curr.mini=min(root->data,left.mini);

    if((root->data>=left.maxi) &&(root->data<=right.mini) && left.isbst && right.isbst ){ //check
        curr.isbst=true;
    }
    else{
        curr.isbst=false;
    }

    //updating ans...
    if(curr.isbst && ans<curr.size){
        ans=curr.size;
    }



    //sb hone ke baad....
    // ab curr ko bhi return krdo next process hone ke liye... q ki hr case base case ni hota..
    return curr;

}
int largestBST(TreeNode *root) {
    // Write your code here.
    int ans = 0, max = 0;
    // solve(root,max,sum);
    soln(root, ans);
    return ans;
}
};