#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest=i;
    int child1=2*i;
    int child2=2*i +1;
    if(child1<n && arr[largest]<arr[child1]){
        largest=child1;
    }
    if(child2<n && arr[largest]<arr[child2]){
        largest=child2;
    }
    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
    
   while(n>1){                       // hmm 1 ko concider he ni kr rahe h...
    swap(arr[1],arr[n]);          // n he size h heap ka q ki hmne -1 phle he kr diya h..
    n--;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
}


int main(){
    int arr[6]={-1,2,3,3,34,5};
    int n=6-1;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    heapsort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}