class MinStack {
public:
    int Stack[10000];
    int minStack[10000];
    int i=-1;
    
    MinStack() {
        i=-1;
    }
    
    void push(int val) {
        i++;
        Stack[i] = val;
        if(i>0)
            minStack[i] = min( minStack[i-1] , val ) ;
        else
            minStack[i] = val;
    }
    
    void pop() {
        i--;
    }
    
    int top() {
        return Stack[i];
    }
    
    int getMin() {
        return minStack[i];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */