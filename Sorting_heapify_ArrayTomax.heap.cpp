

#include <iostream>

using namespace std;

void heapify(int arr[],int n,int i){
    int largest = i;
    int child1=2*i;
    int child2=(2*i) +1;
    
    if(arr[largest]<arr[child1] && child1<n){ //km se km child size se to chota he ho..
        largest=child1;
    }
    if(arr[largest]<arr[child2] && child2<n){ //km se km child size se to chota he ho..
        largest=child2;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        heapify(arr,n,largest); // check kr lo child ke child to isse bde ni h kahi...mtlb largest sch me largest h na...
    }
}

int main()
{
    int arr[6]={-1,23,45,75,84,33};
    int n=5;
    cout<<arr[n/2]<<endl;
    for(int i=n/2;i>0;i--){              //for parent node....
        heapify(arr,n,i);              /* sawal aaya ki sbse phle he sbse bda q ni bhej dete.. 
                                        because clild branching me h na.. saare 1 he baar me kaise check h jate*/
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}








// minimum me cumvert...i.e.smallest element at top..



#include <iostream>

using namespace std;

void heapify(int arr[],int n,int i){
    int largest = i;
    int child1=2*i;
    int child2=(2*i) +1;
    
    if(arr[largest]>arr[child1] && child1<n){ //km se km child size se to chota he ho..
        largest=child1;
    }
    if(arr[largest]>arr[child2] && child2<n){ //km se km child size se to chota he ho..
        largest=child2;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        heapify(arr,n,largest); // check kr lo child ke child to isse bde ni h kahi...mtlb largest sch me largest h na...
    }
}

int main()
{
    int arr[6]={-1,233,455,175,84,313};
    int n=5;
    cout<<arr[n/2]<<endl;
    for(int i=n/2;i>0;i--){              //for parent node....
        heapify(arr,n,i);              /* sawal aaya ki sbse phle he sbse bda q ni bhej dete.. 
                                        because clild branching me h na.. saare 1 he baar me kaise check h jate*/
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
