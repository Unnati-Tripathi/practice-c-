//3

    //2
    //1 2

    //4
    // 1 2 3 4

    // 3
    // 5 6 7



#include <bits/stdc++.h>

using namespace std;

void printin(vector<int> &v){             //btao he mt isko ki ab ye array chl ri ya fun loop me call ho raha ;)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter  the size";
    cin>>n;
    vector<int> v[n];
    for(int i=0;i<n;i++){       // just ek loop extra h
        int siz;

        cout<<"enter the size of "<<i+1<<" vector";
                cin>>siz;
        for(int j=0;j<siz;j++){
            
            int x;
            cin>>x;
            v[i].push_back(x);
            
        }
    }
    
    for(int i=0;i<n;i++){
    printin(v[i]);  //fn pass aise hoga mgr receive normal tareeke se he hoga.
}
}

