#include <bits/stdc++.h>

class information{                           //information name ki class define kr li
    int name;                               //uske ander variables define kr diye..
    int rollno;
    int clas;
    public:                                //geter and setter to public ke ander hone he chaiye verna vo bhi private he rh jayenge
    int getName(){                            //fn he h ek tareeke se but under class and private  #for call
        return name;
    }
    void setName(int n){                      //void fn to  #fill/set the value
        name=n;
    }
};

using namespace std;

int main() {
    information info;
    cout<<info.getName()<<endl;          //get name ke aage tumhe " () " lgana pdega
    info.setName(21);                    //ekdm fn call ki tarah he 
    cout<<info.getName();

  
}



            //     for case of char type ke liye get set

// #include <bits/stdc++.h>

// class information{
//     char name;
//     int rollno;
//     int clas;
//     public:
//     char getname(){
//         return name;
//     }
//     void setname(char n){
//         name=n;
//     }
// };

// using namespace std;

// int main() {
//     information info;
//     cout<<info.getname()<<endl;
//     info.setname('s');
//     cout<<info.getname();
//}

//                            practice




// #include <iostream>

// using namespace std;
// class hero{
//   char name;
//   int age;
//   public:
//   int level;
//   void setage(int n){
//       age=n;
//   }
//   int getage(){
//       return age;
//   }
//   void setname(char n){
//       name=n;
//   }
//   char getname(){
//       return name;
//   }
// };

// int main()
// {
//     hero h;
//     h.level=4;
//     int x;
//     cout<<h.level<<endl;
//     cout<<"enter the name\n";
//     h.setname('s');
//     cout<<h.getname()<<endl;
//    cout<<"enter the age\n";
//    cin >>x;
//    h.setage(x);
//    cout<<h.getage();
    
   
//    return 0;
// }

//                                                         Above whole code with pointer:)


// #include <iostream>

// using namespace std;
// class hero{
//   char name;
//   int age;
//   public:
//   int level;
//   void setage(int n){
//       age=n;
//   }
//   int getage(){
//       return age;
//   }
//   void setname(char n){
//       name=n;
//   }
//   char getname(){
//       return name;
//   }
// };

// int main()
// {
//     hero *h=new hero;
//     (*h).level=4;
//     int x;
//     cout<<(*h).level<<endl;
//     cout<<"enter the name\n";
//     (*h).setname('s');
//     cout<<h->getname()<<endl;
//     return 0;
//}