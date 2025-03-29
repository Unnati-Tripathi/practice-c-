#include <bits/stdc++.h>
using namespace std;
class shubh{
    public:
   char name;
   int level;
    
    shubh(int level,char name){
        cout<<"working\n";
        this->name=name;
        this->level=level;
        
     }
   
    void print(){
       cout<<level<<endl;
       cout<<name<<endl;
   }
};


int main()
 {
    shubh s(10,'u');                         //name call define time he constructor call hota h
                                             //class name ke saath he print option lgao na hr, baar q maatha pacchi krni h baar baar..
     s.print();
  
}

 /* output:- working 
             10
             u     */












 //                                                                         Mst chl ri ye to..

// #include <bits/stdc++.h>
// using namespace std;
// class shubh{
    
//    char name;
//    int level;
// //   shubh(char name,int level){
// //       this->name=name;
// //       this->level=level;
       
// //   }
// public:
//     char getname(){                   //this use kr?
//         return(name);
//      }
//      void setname(char nam){
//          this->name=nam;
//      }
//     shubh(){
//         cout<<"sahi chl raha \n";
//     }
//     shubh(int leve,char nam){        //local verible name he q use kre???
//         cout<<"working\n";
//       name=nam;
//         level=leve;
//         print();
       
//     }
//      void print(){
//       cout<<level<<endl;
//       cout<<name<<endl;
//   }
   
// };



// int main() {
//    shubh shiv(10,'u');                         //name call define time he constructor call hota h
//                                                 //class name ke saath he print option lgao na hr, baar q maatha pacchi krni h baar baar..
//     //  shiv.print();
//     //  cout<<s.level;
//     // shubh *s=new shubh(11,'s');
//     // s->print();
//     // cout<<s->level;
//     shubh Shiv;
//     Shiv.setname('s');
//     cout<<Shiv.getname();
//     Shiv.print();
//     // shubh s(shiv);
//     // s.print();
     
  
// }             