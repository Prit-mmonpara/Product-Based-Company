
class MyStack {
public:
    queue<int> q, q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int x;
        while(!q.empty())
        {
            x = q.front();
            q.pop();
            if(!q.empty())
                q1.push(x);
        }

        while(!q1.empty())
        {
            q.push(q1.front());
            q1.pop();
        }

        return x;
    }
    
    int top() {
        int x;
        while(!q.empty())
        {
            x = q.front();
            q.pop();
            q1.push(x);
        }

        while(!q1.empty())
        {
            q.push(q1.front());
            q1.pop();
        }

        return x;
    }
    
    bool empty() {
        return q.empty();
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
