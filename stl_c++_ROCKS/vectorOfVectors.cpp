

#include <bits/stdc++.h>

using namespace std;

void printin(vector<int> &v){             //btao he mt isko ki ab ye array chl ri ya fun loop me call ho raha ;)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<vector<int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector <int> temp;             //temperarory vector jisko baad me main stream ke vector he me thoos denge...
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            int t;
            cin>>t;
            temp.push_back(t);
         }
         v.push_back(temp);          //thoos do..
         v[0].push_back(10);
    }
    for(int i=0;i<n;i++){
        printin(v[i]);
    }
}

