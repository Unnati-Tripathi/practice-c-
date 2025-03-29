#include <bits/stdc++.h> 

void dfs(int node,stack<int> &s,vector<bool> & visited,unordered_map<int,list<int>> adj ){

    visited[node]=1;
    for(auto i:adj[node]){
        if(visited[i]!=1){
            dfs(i,s,visited,adj);
        }
    }
    s.push(node);

}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    //creating adj list

    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);   //directed h...


    }
    vector<bool> visited(v);
    stack<int> s;
    for(int i=0;i<v;i++){
        if(visited[i]!=1){
            dfs(i,s,visited,adj);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        
        s.pop();
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return ans;
}