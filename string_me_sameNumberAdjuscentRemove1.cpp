 #include <bits/stdc++.h>
using namespace std;

int main() {
// 	int t;
// 	cin>>t;
// 	while(t){
// 	    t--;
	   // int frame;
	   // cin>>frame;
	    string a;
	    getline(cin,a);
	   // for(int i=0;i<frame;i++){
	   //     cin>>a[i];
	        
	   // }
	   cout<<a.length()<<endl;
	   for(int i=0;i<a.length();i++){
	       if( a[i] == ' '){
	            a.erase(i,1);
	           
	            cout<<"space removed\n";
	            
	        }
	   }
	   
	    int i=0,count=1;
	    if(a.length()==0){
	        count--;
	    }
	    int frame=a.length()-1;
	    while(i<a.length()){
	        
	        cout<<"every thing is ok\n";
	         if(i==0 && a[i]==a[i+1]){
	                a.erase(i,1);
	            i++;
	            
	        
	         }
	          if(i==(a.length()-1) && a[i]==a[i-1]){
	                a.erase(i,1);
	            i++;
	            
	        
	         }
	        
	        if( a[i]==a[i+1] || a[i]==a[i-1]){
	            a.erase(i,1);
	            i++;
	            
	        }
	        else{
	       
	            i++;
	            count++;
	        }
	    }
	    cout<<a.length()<<endl;
    
}
                      //string method



#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    t--;
	    int frame;
	    cin>>frame;
	    int a[frame];
	   // cin>>a;
	    for(int i=0;i<frame;i++){
	        cin>>a[i];
	        
	    }
	   
	    int i=0,count=0;
	    if(frame>=1){
	        count++;
	    }
	    frame--;
	    while(i<frame){
	        
	        if( a[i]==a[i+1]){
	           // a.erase(a[i],1);
	            i++;
	            
	        }
	        else{
	       
	            i++;
	            count++;
	        }
	    }
	    cout<<count<<endl;
    }
	
}
 //array method..........