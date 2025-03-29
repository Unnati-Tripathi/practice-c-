

#include <iostream>
using namespace std;

struct stack{
    
    int size;
    int *arr;
    int top;
    
    stack(int size){
        this->size=size;                        // jo jo define kiya h unsb ko initilize kro..
        arr=new int [size];
        top=-1;
    }
    
    void push(int data){
        if(size-top >1){                        //space available h bhi ki ni..
            top+=1;
            arr[top]=data;
        }
        else{
            cout<<"stack is full overflow"<<endl;
        }
    }
    
    void pop(){
        if(top >= 0 ){                         //atleast 1 element to present hona chaiye to delete something...
        top=top-1;
        }
         else{
            cout<<"not possible stack underflow "<<endl;
        }
    }
    
    void peek(){
        if(top >=0 && top<size){               //range ke ander he return kr skte h.. uske bahar kaise..
            cout<<arr[top]<<endl;
            //cout<<top->data;                 //it is incorrect as top koi pointer ni h..
        }
        else{
            cout<<"not possible to peep "<<endl;
        }
        
    }
    
    bool isempty(){
        if(top<0){
            return 1;
        }
        else{
            return 0;
        }
    }
}; 


int main()
{
    
    stack st(10);
    
    st.peek();
    st.push(22);
    if( st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    st.peek();
    st.pop();
    st.pop();
    if( st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    st.peek();
    st.push(43);
    st.peek();
    st.push(92);
    st.push(102);
    st.push(112);
    st.push(132);
    st.push(162);
    st.push(172);
    st.pop();
    st.peek();
    

    return 0;
}
