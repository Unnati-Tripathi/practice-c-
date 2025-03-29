

#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>> adj;               
    void addedge(int kahase,int kahatk,int dire){
        //1=directed
        //0=non-directed
        
        adj[kahase].push_back(kahatk);
        if(dire==0){                        // no dire to dono taraf se add hogi..
        adj[kahatk].push_back(kahase);
        }
        
    }
    
    void print(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{   
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
        
    }
    g.print();
    
}










//GENERALIEZD GRAPH...

// #include <bits/stdc++.h>
// using namespace std;
//template <typename t> ;    //  kisi bhi type ka map bnane ke liye   #general type
// class graph{
//     public:
//     unordered_map<t,list<t>> adj;               
//     void addedge(t kahase,t kahatk,int dire){
//         //1=directed
//         //0=non-directed
        
//         adj[kahase].push_back(kahatk);
//         if(dire==0){                        // no dire to dono taraf se add hogi..
//         adj[kahatk].push_back(kahase);
//         }
        
//     }
    
//     void print(){
//         for(auto i:adj){
//             cout<<i.first<<"-> ";
//             for(auto j:i.second){
//                 cout<<j<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main()
// {   
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
    
//     graph g<int>;
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         g.addedge(u,v,0);
        
//     }
//     g.print();
    
// }














//le bhai tu input bhi lele... > <

// 5
// 8
// 1 2
// 1 5
// 1 4
// 2 3 
// 2 5
// 3 5
// 3 4
// 5 4















//Alternate
// vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {        // by using vector
//   

//     vector<int> ans[n];                              // creating n no. of vector at a time
//     for(int i=0;i<m;i++){
//         // int u=edges[i][0];
//         // int v=edges[i][1];
//         ans[edges[i][0]].push_back(edges[i][1]); //check
//         ans[edges[i][1]].push_back(edges[i][0]);
//     }
//     vector<vector<int>> adj(n);                   //abhi pta ni h lekin (n) zruri h..verna runtime error..
//     for( int i=0;i<n;i++){
//         adj[i].push_back(i);
//         for(int j=0;j<ans[i].size();j++){
//             adj[i].push_back(ans[i][j]);
//         }
//     }
//     return adj;


// }


