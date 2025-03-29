

#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int,int> p;
    p={3,2};
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int ,string> parr[3];
    parr[0]={34,"sdf"};                     //just like an array indexing pe he value insert hogi..
    parr[1]={44,"5a5"};
    parr[2]={24,"sd"};
    
    for (int i=0;i<3;i++){
        cout<<parr[i].first <<" "<< parr[i].second;
        cout<<endl;
    }

    return 0;
}
