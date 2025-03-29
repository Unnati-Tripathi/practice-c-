#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    vector<pair<pair<int, int>, int>> ans;
    unordered_map<int,list<pair<int,int>>>adj;               // adjacency list to bn agi..
    for(int i=0;i<m;i++){
        int u=g[i].first.first;
        int v=g[i].first.second;
        int w=g[i].second;
        adj[u].push_back(make_pair(v,w));
         adj[v].push_back(make_pair(u,w));
    }
    vector<int> dist(n+1); //yaha input 1 se diya h 0 se ni or we take 1st vector define 1 wali information
    vector<int> parent(n+1); 
    vector<bool> visited(n+1); 
    for(int i=1;i<=n;i++){
        parent[i]=-1;
        dist[i]=INT_MAX;
        visited[i]=0;
    }
    //source would be 0 distance...
    dist[1]=0;
for(int k=1;k<=n;k++){
    int u,mini=INT_MAX;
    for(int i=1;i<=n;i++){
        if(mini>dist[i] && visited[i]==0){
            mini=min(mini,dist[i]);
            u=i;
        }

    }
    visited[u]=1;
    for(auto j:adj[u]){
        int v=j.first;
        int w=j.second;
        if (dist[v] > w && visited[v] == 0) {
            dist[v] = w;
            parent[v] = u;
        }
    }
    
}
for (int i = 2; i <= n; i++) {
        ans.push_back(make_pair(make_pair(parent[i],i),dist[i]));
    }
return ans;
}
