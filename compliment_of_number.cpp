#include<bits/stdc++.h>
using namespace std;

int main(){

    long long x,bin,an=0,rem=0,r;
    cin>> x;
    bin=x;
    while(bin){
        r=(bin%2);
        rem=rem*10+r;
        bin/=2;
        
    }
    //bin=x|0;
    cout<<rem<<endl;
    while(rem){
       rem/=10;
        an =(an*10)+1;
     
    }
    
     cout<<an<<endl;
    int flag=0,dec=0;
    while(an){
        int a=an%10;
        dec=dec+(a*pow(2,flag));
        an=an/10;
        flag++;
    }
     cout<<dec<<endl;
    int answer= ~x;
    cout<<"it is answer"<<answer<<endl;
    answer=answer&dec;
    cout<<answer<<endl;

}