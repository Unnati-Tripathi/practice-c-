
//              https://www.codechef.com/problems/WARRIORCHEF



#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ll t;
    cin>>t;
    while(t--){

	int n,h;
	cin>>n>>h;
	vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end(),greater<int>());          //yaha se answer start ho raha h.. // sbse phle to sort krlo... q ki vo x se bdo se he subtract hoga na ki choto se.. 
                                                       // jo bhi value x se choti payijayegi usse h ko vaise bhi koi farak ni pdega
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			sum+=v[i];                            //jonsi bdi value ko h defeate ni kr payega.. vo he x q ki usse choti values se to h compteate he ni krega..
			
			if (sum>=h)
			{
				cout<<v[i]<<endl;
				break;
			}
			if (sum<h && i==n-1)
			{
				cout<<"0"<<endl;
				break;
			}
		}
}