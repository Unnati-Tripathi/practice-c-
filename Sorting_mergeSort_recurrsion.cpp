#include<bits/stdc++.h>
#define ll long long
using namespace std;

void merge_sorted_manner(ll arr[],int s,int e){
    int mid=s-(s-e)/2;
    int l1=mid-s+1;                      // queki starting 0 se hoti h arr ki to length ke liye +1 krna pdta h
    int l2=e-(mid+1)+1;
    int *arr1=new int[l1];                  //(in malloc se memory lene me..) iss side disclose ni krte ki array bna rahe h= iss side krte h
    int *arr2=new int[l2];
    int mainArrayIndex=s;   //pta ni kaha ka tukda aaya ho..
    for(int i=0;i<l1;i++){
        arr1[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1; //check;
    for(int i=0;i<l2;i++){
        arr2[i]=arr[mainArrayIndex++];
    }
    int index1=0,index2=0;
    mainArrayIndex=s;     // jaha se shuru ho raha h waha se he values alter..
    while(index1<l1 && index2<l2 ){
        if(arr1[index1]<arr2[index2]){
            arr[mainArrayIndex++]=arr1[index1++];
        }
        else if(arr1[index1]>arr2[index2]){
            arr[mainArrayIndex++]=arr2[index2++];
        }
    }
    while(index1<l1){
        arr[mainArrayIndex++]=arr1[index1++];
    }
    while(index2<l2){
        arr[mainArrayIndex++]=arr2[index2++];
    }
    delete []arr1;                  // aaj pehli baar dekha h ki memory free bhi kaise karani padti h..
    delete []arr2;                     //thats the inly reason people say c++ is tough
    
}


void merge_sort(ll arr[],int s,int e){
    
    //base case...
    if(s>=e){     // agar 1 1 element me tut gaya h to or kuch krne ki zrurt ni h,,,and if s aage nikal gaya e se to bhi kuch mt krna,..
        return;
    }
    
    int mid=s-(s-e)/2;
    
    merge_sort(arr,s,mid);     // 1part s->mid
    merge_sort(arr,mid+1,e);   //2part mid+1->e      // recursion krne se tukde-tukde ho jate h..
    
    merge_sorted_manner(arr,s,e);
}

int main(){
    ll arr[6]={1,2,6,3,0,5};
    int s=0,e=6-1;
    merge_sort(arr,s,e);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
}