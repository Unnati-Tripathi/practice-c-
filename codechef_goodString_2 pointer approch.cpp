//https://www.codechef.com/problems/ADVITIYA4?tab=submissions

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       int l=0,r=0;
       int h=0;
       while(r<s.length()){
           if(s[l]==s[r]){
               h=max(h,r-l+1);
               r++;
            }
           else{
               
               l=r;
               r++;
           }
       }
       cout<<h<<" ";
       while(q--){
           char w;
           cin>>w;
           s.push_back(w);
           if(s[l]==s[r]){
              h=max(h,r-l+1);
               r++;
            }
           else{
               l=r;
               r++;
           }
         cout<<h<<" ";
       }
      cout<<endl; 
   }
   return 0;
}


///Alternate


// #include <bits/stdc++.h>
// #pragma GCC target("avx2")
// #pragma GCC optimization("O3")
// #pragma GCC optimization("unroll-loops")
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)

// using namespace std;

// void solve()
// {
//     int n, q;
//     cin >> n >> q;
//     string s;
//     cin >> s;

//     // Initialize variables to keep track of the longest equal substring
//     char max_char = s[0];
//     int max_len = 1, curr_len = 1;

//     // Traverse the string to find the initial longest equal substring
//     for (int i = 1; i < n; i++)
//     {
//         if (s[i] == s[i - 1])
//         {
//             curr_len++;
//         }
//         else
//         {
//             if (curr_len > max_len)
//             {
//                 max_len = curr_len;
//                 max_char = s[i - 1];
//             }
//             curr_len = 1;
//         }
//     }

//     // Check if the last sequence is the longest
//     if (curr_len > max_len)
//     {
//         max_len = curr_len;
//         max_char = s[n - 1];
//     }

//     // Output the initial result
//     cout << max_len << " ";

//     // Process the additional characters
//     for (int i = 0; i < q; i++)
//     {
//         char c;
//         cin >> c;
//         s += c;

//         // Update the current substring
//         if (c == s[n + i - 1])
//         {
//             curr_len++;
//         }
//         else
//         {
//             curr_len = 1;
//         }

//         // Update the longest equal substring if needed
//         if (curr_len > max_len)
//         {
//             max_len = curr_len;
//             max_char = c;
//         }

//         // Output the current result
//         cout << max_len << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     fast;

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
