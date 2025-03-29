// 2 input string h agar of same size, if ek jaise he alphabets ek he index pe dono ke present ho to "G" otherwise "B" print krao


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n){
        n--;
    
	string a,b;
	cin>>a>>b;
	
	for(int i=0;i<5;i++){
	    if(a[i]==b[i]){
	        cout<<"G";
	    }
	    else{
	        cout<<"B";
	    }
	    
	    
	}
	cout<<endl;
    }
}


// sample input:-
// 3
// ABCDE
// EDCBA
// ROUND
// RINGS
// START
// STUNT
//outputs:-
// BBGBB
// GBBBB
// GGBBG