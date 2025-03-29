#include <bits/stdc++.h>

using namespace std;

void  printning( vector<pair<int,int>> &vp){                                          //change
    
    for(int i=0;i<vp.size();i++){
        
        cout<<vp[i].first<<","<<vp[i].second<<" ";                                   //change
    }
}

int main(){
    vector<pair<int,int>> vp;
    int n=5;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back(make_pair(x,y)); //vp.push_back({x,y});                              //cahnge
    }
    printning(vp);
    
}
