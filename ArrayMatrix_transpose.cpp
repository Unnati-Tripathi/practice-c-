#include <iostream>

using namespace std;

int main()
{
    
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
      for(int j=0;j<i;j++){                      //sirf upper half ke liye he chlate h 
      
       swap(a[i][j],a[j][i]);                      //verna same answer return kr dega
    }
  }
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
    printf("\n");
}
    
   return 0;
}
