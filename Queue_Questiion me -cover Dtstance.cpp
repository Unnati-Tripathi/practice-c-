//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbTNFT3dhN1JySy1uMVRmNVp1WlhKRkl2ZWZxd3xBQ3Jtc0trVERMbV9jYk9tdmxONEk1aTY0VlRtX1JpOTZqTFIweW5tSmRfRXRaMUMybXBpRVBEOW9iX3cwOEI5ZS0xbzNCN0hfZXV0QTRiYTRScTBqcjNKaU96eVFpaEViNDhWeFE4MnozSTViLVFVSVFGa1JGWQ&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fcircular-tour%2F1&v=_gJ3to4RyeQa

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    deque<int> dq;
    int c[n];
    for(int i=0;i<n;i++){
        int x=a[i]-b[i];
        dq.push_back(x);               //sum ki arr bn gai..
    }
   
    cout<<endl;
    int sum=0;
    bool flag=0;
    int font=0,rer=0,ans=0;int i=-1;
    while(!dq.empty()){
        i++;
        cout<<i<<" ";
        sum+=dq.front();
        dq.pop_front();
        if(sum>=0){
           continue;           // sb sahi ja raha h kuch mt kro....
        }
        else if(sum<0){           // ab lo action..
            flag=1;
            //font=rer+1;
            dq.push_back(sum);
            sum=0;
            ans=i+1;
            
        }
    }
    cout<<endl;
    cout<<ans<<endl;
}
