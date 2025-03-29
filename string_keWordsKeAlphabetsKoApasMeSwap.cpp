//for example the cat and this would give >>> eht tac
#include<bits/stdc++.h>
using namespace std;

int main ()
{
  string s;
  getline (cin, s);
  int a = s.length ();		//size of input string
  
  for (int i = 0; i <a; i++)               	//traversing input string
    
    {	
        int start=i;                        //string c for every single word..
       	   string c="";	                  // qki c ko hr baar naye se shuru krna h..
       	                                   //i ki value space tk vapas for loop se pass ni hone wali h    
     
      while (!(s[i] == ' '))                      
	{		                                      	//space se 1 word pura hoga
	  c+=s[i];                 //#IMPORTANT  c ki values me input krane ke liye [i]krne ki zrurt ni 
	                            //by defalt he push_back leta h vo..
	  i++;                   //i incriment kr diya yaha per he no need to go to for loop
	
	}
	

      if (s[i] == ' ')
	{                                         //word ko swap
	
	  int si;
	  si = c.length();
	  
	  for (int j = 0; j < (si / 2); j++)
	    {
	      swap (c[j], c[si - j - 1]);                     // cout<<c[i]<<" "<<c[si-i-1]<<'\n';
	    }
	  for (int j = 0; j < si; j++)
	    {		                                             	//ab reverse word ko original me save krane ke liye     

	      s[start] = c[j];
	      start++;

	    }

	}

    }
  cout << s;

}
//anshika mam ke room me jake poocha tha :)