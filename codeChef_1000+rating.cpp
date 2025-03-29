//https://www.codechef.com/practice/course/arrays-cpp/PCPPAR01/problems/CS2023_STK

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        ll sumo=0,suma=0,aa=0,bb=0;
        for(auto &v:a){
            cin>>v;
        }
         for(auto &v:b){
            cin>>v;
        }
        
	for(int i=0;i<n;i++){
	    if(a[i]==0){
	        aa=max(aa,sumo);
	        sumo=0;
	        
	        continue;
	        
	    }
	    sumo++;
	}
	aa=max(aa,sumo);
	for(int i=0;i<n;i++){
	    if(b[i]==0){
	        bb=max(bb,suma);
	        suma=0;
	        continue;
	        
	    }
	    suma++;
	}
	  bb=max(bb,suma);
	if(aa>bb){
	  cout<<"Om";
	}
	else if(aa<bb){
	      cout<<"Addy";
	}
	else{
	    cout<<"Draw";
	}
	cout<<endl;
}
}
