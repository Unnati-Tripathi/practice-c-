

#include <iostream>
using namespace std;

struct twostack{
    int *arr;
    int top1;
    int top2;
    int size;
    
twostack(int size){
    this->size=size;
    arr=new int[size];     // c me malloc function use hoga..
    top1=-1;
    top2=size;
} 
void push1(int d){
    if(top2 -top1>1){
        top1++;
        arr[top1]=d;
    }
    else{
        cout<<"overflow"<<endl;
    }
}
void push2(int d){
    if(top2 -top1>1){
        top2--;
        arr[top2]=d;
    }
    else{
        cout<<"overflow"<<endl;
    }
}
void pop1(){
    if(top1 >=0){
        top1--;
    }
    else{
        cout<<"underflow";
    }
}
void pop2(){
    if(top2 <size){
        top2++;
    }
    else{
        cout<<"underflow";
    }
}
void peek1(){
    if(top1>=0 && top1<size){
        cout<<arr[top1]<<endl;
    }
    else{
        cout<<"peek out of range"<<endl;
    }
}
void peek2(){
    if(top2>=0 && top2<size){
        cout<<arr[top2]<<endl;
    }
    else{
        cout<<"peek out of range"<<endl;
    }
}
};

int main()
{
    twostack st(10);
    
    st.peek1();
    st.push1(22);
    st.peek1();
    st.peek2();
    st.push2(43);
    st.peek2();
    st.push1(92);
    st.push1(102);
    st.push1(112);
    st.push1(132);
    st.peek1();
    st.push2(162);
    st.push2(172);
    st.push2(173);
    st.push2(175);
    st.push2(176);       // jayega he NI q ki uddher ki jagah phle he top1 ne occupy kr rakkhi h...
    // st.pop1();
    st.peek2();
    st.peek1();
    st.push1(135);      // jayega he he NI q ki jagah phle se he occupied h by top2..
    st.peek2();
    st.peek1();
    

    return 0;
}