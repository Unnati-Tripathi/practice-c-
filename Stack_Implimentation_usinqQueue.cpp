class MyStack {
public:
    int size;     // jo jo use krne wale ho btadio pehle he....
    int *arr;
    int tp;
    int rear;
    int front;
    MyStack() {   //constructor me sabhi variables ko intitlise krdo taki saare objects unko use kr ske
        size=100;
        arr=new int[size];
        tp=-1;
        rear=-1;
        front=-1;
    }
    
    void push(int x) {
        // if(tp==size-1){
        //     return;
        // }
        
        rear++;
        tp++;
        if(front==-1){
            front++;
            
        }
        arr[rear]=x;

    }
    
    int pop() {
        if(front<0){
            return -1;
        }
        if(front>rear){
            return -1;
        }
        if(front==rear){
            int x=arr[rear];
            rear=-1;
            front=-1;
            tp=front;
            return x;
        }
        int x=arr[rear];
        rear--;
        tp=rear;
        return x;
        
    }
    
    int top() {
        if(front<0){
            return -1;
        }
        return arr[rear];
    }
    
    bool empty() {
        if(front==-1){
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */