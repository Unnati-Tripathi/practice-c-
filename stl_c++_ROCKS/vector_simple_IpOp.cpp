#include <bits/stdc++.h>

using namespace std;

void printing(vector<string> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<string> v;                     //vector of string h ye to..
    int n;
    cout<<"enter the size";
    cin>>n;
    for (int i=0;i<n;i++){
        string x;
        cout<<"enter the "<<i+1<<" element";

        cin>>x;
        v.push_back(x);
        
    }
    printing(v);
    v.push_back("end");
    printing(v);

    return 0;
}
