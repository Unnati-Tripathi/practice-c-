


//https://www.codechef.com/problems/CHOCOCHEF

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if(n%2==0){
	    
	        cout<<1<<" "<<1<<" "<<(n-2);
	    }
	        
	    
	    else{
	        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2;
	    }
	    cout<<endl;
	}

}
