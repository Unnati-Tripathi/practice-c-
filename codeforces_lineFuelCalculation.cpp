//https://codeforces.com/problemset/problem/1901/A


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        //string s;
        cin>>n;
         cin>>x;
         int a[n];
         for(int i=0;i<n;i++){
             cin>>a[i];                                                          //input le liya...n ko
             //cout<<"input\n";
         }
         int dis=0, ans=-1;
         for(int i=n-1;i>=0 ;i--){                                           //ulti n ki array traverse karai taki last element of array ke distance ko 2 times kr saku
            // cout<<"entrt in loop\n";
             if( i==n-1){                                                    //last elament
                // cout<<a[n-1]<<endl;
                 dis=abs((x-a[n-1])*2);
                 // cout<<dis<<endl;   
                 
                  if(ans<dis){                                     // -->
                 ans=dis;
             }}
                 
            if( i==0){                                                        // if 1st element h to bhi 0 se sub krke he distance aa jayegi..
                 dis=abs(0-a[0]);
                   //cout<<dis<<"  2nd "<<endl;   
             
              if(ans<dis){                                      //-->
                 ans=dis;
             }
            }
             else {
                 dis=abs(a[i]-a[i-1]);
             
             if(ans<dis){                                         //-->
                 ans=dis;
             }}
         }
         cout<<ans<<endl;

   
}
}

