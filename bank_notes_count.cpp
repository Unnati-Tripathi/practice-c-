#include<bits/stdc++.h>
using namespace std;
 int main(){
    int abc ;
    cin>>abc;
    
          switch(abc>1000){
              
          case 1:
             int x;
             x=abc/1000;
             abc=abc-(x*1000);
         cout<<"notes of 1000:"<<" "<<x<<endl;}
         
         switch(abc>100){
             case 1:
              int x;
             x=abc/100;
             abc=abc-(x*100);
             cout<<"notes of 100:"<< " "<<x<<endl;}
         switch(abc>20){
            case 1:
             int x;
             x=abc/20;
             abc=abc-(x*20);
             cout<<"notes of 20:"<< " "<<x<<endl;}
        switch(abc>10){
            case 1:
             int x;
             x=abc/10;
             abc=abc-(x*10);
             cout<<"notes of 10:"<< " "<<x<<endl;}
        switch(abc>5){
            case 1:
             int x;
             x=abc/5;
             abc=abc-(x*5);
             cout<<"notes of 5:"<< " "<<x<<endl;}
         switch(abc>=0){
             case 1:
              int x;
             
             cout<<"notes of 1:"<< " " <<abc<<endl;
             break;
        default:
            cout<<"number is int valid";}

    
    return 0;
 }
