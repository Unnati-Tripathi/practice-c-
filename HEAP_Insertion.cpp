#include <iostream>

using namespace std;
class heap{
    public:
  int arr[100];
  int size;
  heap(){
      arr[0]=-1;
      size=0;
  }
  void insertion(int val){
      size=size+1;
      int index=size-1;              //index=size;
      arr[index]=val;
      
      while(index>1){
          int parent=index/2;
          if(arr[index]>arr[parent]){
              swap(index,parent);
              
          }
          else{
              break;
          }
      }
  }
  void print(){
  for(int i=0;i<size;i++){                   //i=1;i<=size;i++
            cout<<arr[i]<<" ";
        }
  }
};

int main() {
    heap h;
    h.insertion(5);
    //  h.insertion(15);
    //   h.insertion(35);
    //   h.insertion(65);
    //     h.insertion(25);
        h.print();
    
}