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
      size=size+1; // array ki size bhi to increase honi h 
      int index=size;              //index=size;
      arr[index]=val;
      
      while(index> 1){                    //index>=0 // per 0 se shuru ni krenge q ki 0th index kisi or se swap ni ho skta we are already on the top index
          int parent=index/2;
          if(arr[index]>arr[parent]){
              swap(arr[index],arr[parent]);
              index=parent;
              
          }
          else{
              return;
              break;
          }
     }
  }
  void print(){
  for(int i=1;i<=size;i++){                   //i=1;i<=size;i++
            cout<<arr[i]<<" ";
        }
  }
  
  void deletion(){
      
       arr[1]=arr[size];size=size-1;
     
      int index=1;
      while(index<=size){
          int leftchild=index*2;
          int rightchild=(index*2)+1;
          if(arr[leftchild]>arr[index]){
              swap(arr[leftchild],arr[index]);
              index=leftchild;
          }
          else if(arr[rightchild]>arr[index]){
              swap(arr[rightchild],arr[index]);
              index=rightchild;
          }
          else{
              return;
      }
  }
  }
};

int main() {
    heap h;
    h.insertion(5);
     h.insertion(115);
      h.insertion(35);
      h.insertion(25);
        h.insertion(65);
        h.print();
        h.deletion();
        cout<<endl;
        h.print();
        h.deletion();
        cout<<endl;
        h.print();
    
}