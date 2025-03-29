//https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1


// class Solution{
//     public:
//     //Function to store the zig zag order traversal of tree in a list.
//     vector <int> zigZagTraversal(Node* root)
//     {
//     	// Code here
//     	queue<Node*> q;
//     	q.push(root);
//     	vector<int>ans;
//     	 bool LeftRight=1; // kept on switching depeding on level..
//     	while(!q.empty()){
    	   
//     	    int size=q.size();
//     	    vector<int>temp(size); //ek temporary ans bna lenge..jo instaneous level ke saare nodes store kre
//     	    for(int i=0;i<size;i++){
//     	        struct Node* fron=q.front();
//     	        q.pop();
//     	        int index=(LeftRight) ? i : size-i-1; // kaise values save krani h
//     	        temp[index]=fron->data;
    	        
//     	        if(fron->left !=NULL){
//     	            q.push(fron->left);
//     	        }
//     	        if(fron->right !=NULL){
//     	            q.push(fron->right);
//     	        }
//     	    }
//     	    for(auto i:temp){
//     	        ans.push_back(i);
//     	    }
//     	    LeftRight=!(LeftRight);
    	    
//     	}
//     	return ans;
    	
//     }
// };