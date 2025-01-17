
class MinStack {
public:

    stack<int> s, minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(minStack.empty() || minStack.top() >= val)
            minStack.push(val);
    }
    
    void pop() {
        int temp = s.top();
        if(!minStack.empty() && temp == minStack.top())
            minStack.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        if(!minStack.empty())
            return minStack.top();
        
        return -1;
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
