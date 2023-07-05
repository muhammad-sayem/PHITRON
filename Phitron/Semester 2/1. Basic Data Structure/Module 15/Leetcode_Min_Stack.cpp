class MinStack {
public:
    MinStack() {
        
    }
    
    stack<int> st;
    stack<int> mn;

    void push(int val) {
        if(st.empty() && mn.empty()){
            st.push(val);
            mn.push(val);
            return;
        }
        else{
            st.push(val);
            mn.push(min(val, mn.top()));
        }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
            mn.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
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