// code for c++ by me.......

// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct dequeue{
    
    
    int *arr;
    int front;
    int size;
    int rear;
    
    dequeue(int size){
        front=-1;
        rear=-1;
        this->size=size;
        arr=new int[size];
        
    }
    void push_back(){
        int data;
        cout<<front<<rear<<" ";
        cout<<"enter the value rear ";
        cin>>data;
        if(front==-1){ //first time..
            cout<<"first time...\n";
            front=0;
            rear=0;                     //update
            arr[rear]=data;            //value
            return;
        }
        if(rear==size-1 && front!=0){ //this is condition to be circular..
            rear=0;                   //update
            arr[rear]=data;          //value
            return;
        }
        if((front==0 && rear==size-1) || rear==((front-1)%(size-1))){ //iski second condition bhi also for circular else hmm sirf iski 1 wali likhte
            cout<<"overflow....\n";
            return;
        }
        rear++;                            //update
        arr[rear]=data;//normal case me..  //value
    }
    
    void push_front(){                           //front end se insertion..
        int data;
        cout<<front<<rear<<" ";
        cout<<"enter the value front ";
        cin>>data;
        if(front==-1){ //first time..
            cout<<"first time...\n";
            front=0;
            rear=0;                     //update
            arr[front]=data;            //value
            return;
        }
        if(rear!=size-1 && front==0){ //this is condition to be circular..
            front=size-1;                   //update
            arr[front]=data;          //value
            return;
        }
        if((front==0 && rear==size-1) || rear==((front-1)%(size-1))){ //iski second condition bhi also for circular else hmm sirf iski 1 wali likhte
            cout<<"overflow....\n";                                //checking full condition..
            return;
        }
        front--;                            //update
        arr[front]=data;                    //normal case me..  //value
    }  
    
    void pop_back(){
        cout<<front<<rear<<" ";
        if(front==-1 && rear==-1){              //now started yt
            cout<<"underflow";
        }
        else if(front==rear){                 //only one element is present..
            arr[rear]=0;
            front=-1;
            rear=-1;
        }
        else if(rear==0){                    //maintain cyclic nature..
            arr[rear]=0;
            rear=size-1;
        }
        else {
            arr[rear]=0;
            rear--;
        }
    }
    void pop_front(){
        cout<<front<<rear<<" ";
        if(front==-1 && rear==-1){              //now started yt
            cout<<"underflow";
        }
        else if(front==rear){                 //only one element is present..
            arr[front]=0;
            front=-1;
            rear=-1;
        }
        else if((front==size-1 && rear!=0)){                    //maintain cyclic nature..
            arr[front]=0;
            front=0;
        }
        else {
            arr[front]=0;
            front++;
        }
    }
    void printing(){
        //if(front<rear){
        int a=front;
        while(a!=rear){            //check!!
            cout<<arr[a]<<" ";
            a=(a+1)%size;                              ///////////####IMPORTANT>>>hr baar bhul jati ho...
        }
        cout<<arr[rear];
       
    }
};

int main(){
    dequeue de(5);
    de.push_front();
    de.push_front();
    de.push_front();
    de.push_front();
    de.push_front();
    de.push_front();
    de.printing();
    de.push_back();
    de.pop_front();
    //de.pop_front();
    de.printing();
}
    
    












//code for c.....by java point..
// #include <stdio.h>    
// #define size 5  
// int deque[size];    
// int f = -1, r = -1;    
// //  insert_front function will insert the value from the front    
// void insert_front(int x)    
// {    
//     if((f==0 && r==size-1) || (f==r+1))    
//     {    
//         printf("Overflow");    
//     }    
//     else if((f==-1) && (r==-1))    
//     {    
//         f=r=0;    
//         deque[f]=x;    
//     }    
//     else if(f==0)    
//     {    
//         f=size-1;    
//         deque[f]=x;    
//     }    
//     else    
//     {    
//         f=f-1;    
//         deque[f]=x;    
//     }    
// } 
// // insert_rear function will insert the value from the rear    
// void insert_rear(int x)    
// {    
//     if((f==0 && r==size-1) || (f==r+1))    
//     {    
//         printf("Overflow");    
//     }    
//     else if((f==-1) && (r==-1))    
//     {    
//         r=0;    
//         deque[r]=x;    
//     }    
//     else if(r==size-1)    
//     {    
//         r=0;    
//         deque[r]=x;    
//     }    
//     else    
//     {    
//         r++;    
//         deque[r]=x;    
//     }    
    
// }    
// void display()    
// {    
//     int i=f;    
//     printf("\nElements in a deque are: ");    
        
//     while(i!=r)    
//     {    
//         printf("%d ",deque[i]);    
//         i=(i+1)%size;    
//     }    
//      printf("%d",deque[r]);    
// }    
    
// // getfront function retrieves the first value of the deque.    
// void getfront()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else    
//     {    
//         printf("\nThe value of the element at front is: %d", deque[f]);    
//     }    
        
// }    
// // getrear function retrieves the last value of the deque.    
// void getrear()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else    
//     {    
//         printf("\nThe value of the element at rear is %d", deque[r]);    
//     }    
        
// }    
    
// // delete_front() function deletes the element from the front    
// void delete_front()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else if(f==r)    
//     {    
//         printf("\nThe deleted element is %d", deque[f]);    
//         f=-1;    
//         r=-1;    
            
//     }    
//      else if(f==(size-1))    
//      {    
//          printf("\nThe deleted element is %d", deque[f]);    
//          f=0;    
//      }    
//      else    
//      {    
//           printf("\nThe deleted element is %d", deque[f]);    
//           f=f+1;    
//      }    
// }    
//     // delete_rear() function deletes the element from the rear    
// void delete_rear()    
// {    
//     if((f==-1) && (r==-1))    
//     {    
//         printf("Deque is empty");    
//     }    
//     else if(f==r)    
//     {    
//         printf("\nThe deleted element is %d", deque[r]);    
//         f=-1;    
//         r=-1;    
            
//     }    
//      else if(r==0)    
//      {    
//          printf("\nThe deleted element is %d", deque[r]);    
//          r=size-1;    
//      }    
//      else    
//      {    
//           printf("\nThe deleted element is %d", deque[r]);    
//           r=r-1;    
//      }    
// }   
// int main()    
// {    
//     insert_front(20);
//     display();
//     insert_front(30);
//     display();
//     insert_front(330);
//     display();
//     insert_front(3056);
//     display();
//     insert_front(305);
//     display();
//     insert_front(303);
//     display();
//     getfront();  // Retrieve the value at front-end  
//      getrear();
//     display();
//     delete_front();
//     display();
//     delete_front();
//     display();
//     // insert_front(20); 
//     // display();
//     // insert_front(10); 
//     // display();
//     // insert_rear(30);    
//     // insert_rear(50);    
//     // insert_rear(80);    
//     // display();  // Calling the display function to retrieve the values of deque    
//     // getfront();  // Retrieve the value at front-end  
//     // getrear();  // Retrieve the value at rear-end   
//     // delete_front();    
//     // delete_rear();    
//     // display(); // calling display function to retrieve values after deletion   
//     // return 0;    
// }     





