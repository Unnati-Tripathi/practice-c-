// Cover in Water

// Filip has a row of cells, some of which are blocked, and some are empty. He wants all empty cells to have water in them. He has two actions at his disposal:

// 1 — place water in an empty cell.
// 2 — remove water from a cell and place it in any other empty cell.
// If at some moment cell i
//  (2≤i≤n−1) is empty and both cells i−1 and i+1
//  contains water, then it becomes filled with water.

// Find the minimum number of times he needs to perform action 1
//  in order to fill all empty cells with water.

// Note that you don't need to minimize the use of action 2
// . Note that blocked cells neither contain water nor can Filip place water in them.

// algo:-
// hmme aise streek dhundni  h jisme bs 3 . . . consucative aate ho
//to usme apne aap he paani baar baar bharta rhega
//otherwise jitne bhi .. alag alag point h count krke answer print krado...



#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
         cin>>s;
         int count=0, flag=0;
         for(int i=0;i<n ;i++){
            
                 //cout<<"right\n";
                 if(i+2<n && s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){           //#important 
                    // cout<<" special condio ";
                     cout<<2<<endl;flag++;
                     break;
                 }
                 
             
             
                 if( s[i]=='.'){
                     count++;
                 
             }
         }
         if(flag==0){
             cout<<count<<endl;
         }

   
}
}
