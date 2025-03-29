#include<bits/stdc++.h>
using namespace std ;

int QsortLr(int arr[],int s,int e){           // is function ka kaam h pivot ki sahi value ko return krna..
    int i=s,j=e;                         //q ki hmm s&e ko disturb ni krna chate..
    int p=s;
    while(i<j){                          // 1 he jaise condition baar baar lgti rhti h..-->
        while(i<e && arr[i]<=arr[p]){         //<=because == wale elements ko bhi to kahi jana hoga..    // agar arr[i] pivot element se chota h to jane do.. pr agar bda ho jaye to dhap lo..
            i++;
        }
        while(j>s && arr[j]>arr[p]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[p]);
    return j;
}

void quick(int arr[],int s,int e){
    
    // if(e<=s){                  // ye likhna zruri h verna for even length of array...
    //     return;
    // }

    if(s<e){                         // 1 he jaise condition baar baar lgti rhti h..-->
    int pivot=QsortLr(arr,s,e);        //itni puri array me usko (pivot ko) bs uski sahi jagah dedo..
    quick(arr,s,pivot-1);
    quick(arr,pivot+1,e);
    } 
}

int main(){
    int arr[5]={3,5,2,8,4};
    int s=0;
    int e=5-1;
    quick(arr,s,e);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}