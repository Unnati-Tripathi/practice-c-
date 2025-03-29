

//1 2 4 6 7 8 9 -1 -1 -1 -1 -1 10 -1 11 -1 12 -1 13 -1 14 -1 -1 -1 3 5 -1 -1 -1


#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
    
    node(int d){
        data=d;
        struct node*left=NULL;
        struct node*right=NULL;
    }
    
};

struct node* built_tree(struct node* &root){
    
    
    int data;
    cout<<"enter data";
    cin>>data;             // base case ke liye phle define krna hota h data ko...HEY BHAGAWAAN..ITNI FUDDU LDKI H
    
    if(data==-1){          // base condition jb bol de ki -1 h data mtlb tb ruk jao 
        return NULL;          //pta chle ki puchte he chle ja rahe h ki iska left..iska left..iska left..iska left......
    }
    
    root=new node(data);
    cout<<"for left child of "<<root->data<<endl;
    root->left=built_tree(root->left);
    cout<<"for right child of "<<root->data<<endl;
    root->right=built_tree(root->right);
    return root;
    
}

void bfs(struct node*root){
    queue<struct node*> q;
    int height=0;
    struct node*temp;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        temp=q.front();
        q.pop();
        
        
        if(temp==NULL){
            cout<<endl;
            height++;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data;
            
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
    cout<<endl<<height;
}

int length(struct node* root){          // to calculate the max length of a tree..
    struct node*temp=root;
    if(temp==NULL){
        return 0;
    }
    int lh=length(temp->left);            // most ending ke left pr gaye
    int rh=length(temp->right);          // then most ending(same) ke rigth pr gaye
    int ans=max(lh,rh);                // fir lrft rigth ko compare kra liya and max wale ko ans me store kra liya
    ans++;                           //then ans ko 1 increment kr diya q ki ab vo apne se ek level upper wale node pr ja raha h...
    
    return ans;
    
}

int finding_width(struct node*root){
    struct node*temp=root;
    if(temp==NULL){
        return 0;
    }
    
    int op1=finding_width(temp->left);    //iska koi purpose ni hota h bs hm traversal ke liye depth me ja rahe the..
    int op2=finding_width(temp->right);
    int width=0;
    int opt3 =length(temp->left)+length(temp->right)+1;
   // width=max({opt3,op1,op2});
    width=opt3;
    //cout<<width<<" ";
    
    return width;
}




pair<int ,int> width(struct node* root){                  //very very advance her ewe get to know that length and width functions were very similar so we had use.. 
                                                         // 1st side of pair me hm width count kr rahe the and second me hm height find kr rahe the
    struct node*temp=root;
    if(temp==NULL){
        pair<int ,int> p=make_pair(0,0);
        return p; 
    }
    pair<int,int> left=width(temp->left);
    pair<int,int> right=width(temp->right);
    
    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;
    
    pair<int ,int> ans;
    ans.first=max({op1,op2,op3});
    ans.second=max(left.second,right.second)+1;
    //cout<<ans.first<<" "<<ans.second<<" ";
    return ans;
    
}


int main() {
     struct node*root=NULL;
     built_tree(root);
     cout<<endl;
    bfs(root);
    cout<<endl;
    int x=length(root);
    cout<<x<<endl;
    cout<<finding_width(root)<<endl;
    cout<<width(root).first;
    
}














































// #include <iostream>
// using namespace std;

// struct twostack{
//     int *arr;
//     int top1;
//     int top2;
//     int size;
    
// twostack(int size){
//     this->size=size;
//     arr=new int[size];     // c me malloc function use hoga..
//     top1=-1;
//     top2=size;
// } 
// void push1(int d){
//     if(top2 -top1>1){
//         top1++;
//         arr[top1]=d;
//     }
//     else{
//         cout<<"overflow"<<endl;
//     }
// }
// void push2(int d){
//     if(top2 -top1>1){
//         top2--;
//         arr[top2]=d;
//     }
//     else{
//         cout<<"overflow"<<endl;
//     }
// }
// void pop1(){
//     if(top1 >=0){
//         top1--;
//     }
//     else{
//         cout<<"underflow";
//     }
// }
// void pop2(){
//     if(top2 <size){
//         top2++;
//     }
//     else{
//         cout<<"underflow";
//     }
// }
// void peek1(){
//     if(top1>=0 && top1<size){
//         cout<<arr[top1]<<endl;
//     }
//     else{
//         cout<<"peek out of range"<<endl;
//     }
// }
// void peek2(){
//     if(top2>=0 && top2<size){
//         cout<<arr[top2]<<endl;
//     }
//     else{
//         cout<<"peek out of range"<<endl;
//     }
// }
// };

// int main()
// {
//     twostack st(10);
    
//     st.peek1();
//     st.push1(22);
//     st.peek1();
//     st.peek2();
//     st.push2(43);
//     st.peek2();
//     st.push1(92);
//     st.push1(102);
//     st.push1(112);
//     st.push1(132);
//     st.peek1();
//     st.push2(162);
//     st.push2(172);
//     st.push2(173);
//     st.push2(175);
//     st.push2(176);       // jayega he NI q ki uddher ki jagah phle he top1 ne occupy kr rakkhi h...
//     // st.pop1();
//     st.peek2();
//     st.peek1();
//     st.push1(135);      // jayega he he NI q ki jagah phle se he occupied h by top2..
//     st.peek2();
//     st.peek1();
    

//     return 0;
// }


























// // struct stack{
    
// //     int size;
// //     int *arr;
// //     int top;
    
// //     stack(int size){
// //         this->size=size;
// //         arr=new int [size];
// //         top=-1;
// //     }
    
// //     void push(int data){
// //         if(size-top >1){        //space available h bhi ki ni..
// //             top+=1;
// //             arr[top]=data;
// //         }
// //         else{
// //             cout<<"stack is full overflow"<<endl;
// //         }
// //     }
    
// //     void pop(){
// //         if(top >= 0 ){           //atleast 1 element to present hona chaiye to delete something...
// //         top=top-1;
// //         }
// //          else{
// //             cout<<"not possible stack underflow "<<endl;
// //         }
// //     }
    
// //     void peek(){
// //         if(top >=0 && top<size){      //range ke ander he return kr skte h.. uske bahar kaise..
// //             cout<<arr[top]<<endl;
// //             //cout<<top->data;            //it is incorrect as top koi pointer ni h..
// //         }
// //         else{
// //             cout<<"not possible to peep "<<endl;
// //         }
        
// //     }
    
// //     bool isempty(){
// //         if(top<0){
// //             return 1;
// //         }
// //         else{
// //             return 0;
// //         }
// //     }
// // }; 


// // int main()
// // {
    
// //     stack st(10);
    
// //     st.peek();
// //     st.push(22);
// //     if( st.isempty()){
// //         cout<<"stack is empty"<<endl;
// //     }
// //     else{
// //         cout<<"stack is not empty"<<endl;
// //     }
// //     st.peek();
// //     st.pop();
// //     st.pop();
// //     if( st.isempty()){
// //         cout<<"stack is empty"<<endl;
// //     }
// //     else{
// //         cout<<"stack is not empty"<<endl;
// //     }
// //     st.peek();
// //     st.push(43);
// //     st.peek();
// //     st.push(92);
// //     st.push(102);
// //     st.push(112);
// //     st.push(132);
// //     st.push(162);
// //     st.push(172);
// //     st.pop();
// //     st.peek();
    

// //     return 0;
// // }




























// #include <bits/stdc++.h>

// using namespace std;


// struct node{
  
//   int data;
//   struct node* next;
    
// };
//  struct node* insert( struct node* ptr,int d){
//        struct node* temp=new node;                                
//        temp->data=d;
//        temp->next=NULL;
//        ptr->next=temp;
       
//        return temp;
//  }


// void print(struct node* ptr){
//     while(ptr!=NULL){
//         cout<<ptr->data<<" ";
//         ptr=ptr->next;
//     }
// }

// bool isloop(struct node* head){
//     struct node* temp=head;
//     while(temp->next!=NULL ){
//         if(temp->next==head){
//             return 1;
//             break;
//         }
//         cout<<"checking"<<" ";
//         temp=temp->next;
//     }
//     return 0;
// }



// void dublicates(struct node* ptr){
//     while(ptr->next != NULL){
//         if(ptr->next->data == ptr->data){
//             cout<<"dublicates is present";
//             return;
//         }
//         ptr=ptr->next;
//     }
//     cout<<"dublicates is not present";

    
// }

// int main()
// {
//      struct node* head=new node;
//      head->next=NULL;
//      head->data=2;
//       struct node* ptr=head;
      
//          ptr=head;
//   //  print(ptr);
      
      
//       ptr=insert(ptr,0);
//       ptr=insert(ptr,2);
//   ptr=insert(ptr,2);
  

//       ptr=insert(ptr,1);
//        ptr=insert(ptr,0);

//       ptr=insert(ptr,0);
//       ptr=insert(ptr,1);
//       ptr=insert(ptr,2);

   
//     ptr=head;
//     print(ptr);
//  ptr=head;
//       dublicates(ptr);
//       cout<<endl;
      
//     //   map<int,bool> m;       
//     //   struct node* loc;
//     //   struct node* prev=head;
//     //   ptr=head;
//     //   while(ptr->next!=NULL){
//     //       if(m[ptr->data]==false){
//     //           m[ptr->data]=true;
//     //           cout<<ptr->data<<" ";
//     //           prev=ptr;
//     //           ptr=ptr->next;
//     //       }
//     //       if(m[ptr->data]==true){
//     //           loc= ptr->next;
//     //           delete(ptr);
//     //           prev->next=loc;
//     //           ptr=loc;
              
//         //       cout<<"dubli present by 2";
//         //       break; 
//     //    }
          
         
//     //  }


//         // if(loc==NULL){
//         //     cout<<"dub absent";
//         // }
        
//         cout<<endl;
//         int c1=0,c2=0,c0=0;
//         ptr=head;
//         while(ptr->next!=NULL){
//             if(ptr->data==1){
//                 c1++;
//             }
//              if(ptr->data==0){
//                 c0++;
//             }
//              if(ptr->data==2){
//                 c2++;
//             }
//             ptr=ptr->next;
//         }
//         ptr=head;
      
//         while(ptr->next!=NULL && c0!=0){
        
//             ptr->data=0;
//             c0--;
//             ptr=ptr->next;
//         }
       
//          while(ptr->next!=NULL && c1!=0){
        
//             ptr->data=1;
//             c1--;
//             ptr=ptr->next;
//         }
        
//          while(ptr->next!=NULL && c2!=0){
        
//             ptr->data=2;
//             c2--;
//             ptr=ptr->next;
//         }
//         ptr=head;
//         print(ptr);

//     //   ptr=head;
//     //   while(ptr != loc){
//     //       cout<<ptr->data<<" ";
//     //       ptr=ptr->next;
//     //   }
      
      
//     //   if(isloop(head)){         // checking if loop is present or not..
//     //       cout<<"loop is present"<<endl;
//     //   }
//     //   else{
//     //       cout<<"loop is NOT present";
//     //   }
     
     
     
      
//     //   map<struct node*,bool> m;        // code for jaha se loop lga ho saala udher se puri ll ko kaat do....
//     //   struct node* loc;
//     //   ptr=head;
//     //   while(ptr->next!=NULL){
//     //       if(m[ptr]==false){
//     //           m[ptr]=true; 
//     //           ptr=ptr->next;
//     //       }
//     //       if(m[ptr]==true){
//     //           loc= ptr;
//     //           break; 
//     //       }
         
//     //   }
//     //   ptr=head;
//     //   while(ptr != loc){
//     //       cout<<ptr->data<<" ";
//     //       ptr=ptr->next;
//     //   }
    
    
    
    
    
//     //   map<struct node*,bool> m;                   // jaha se loop ho isko null se point krado to 
//     //   struct node* loc;                          // mtlb ki ll ko seedha krdo..
      
//     //   ptr=head;
//     //   while(ptr->next!=NULL){
//     //       if(m[ptr]==false){
//     //           m[ptr]=true; 
//     //           ptr=ptr->next;
//     //       }
//     //       if(m[ptr->next]==true){
//     //           ptr->next=NULL;
//     //           break; 
//     //       }
         
//     //   }
//     //   ptr=head;
//     //   while(ptr != NULL){
//     //       cout<<ptr->data<<" ";
//     //       ptr=ptr->next;
//     //   }

//     return 0;
// }
