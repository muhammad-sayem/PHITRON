class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> newQ;
        int lastElement;

        while(!q.empty()){
            int k = q.front();
            q.pop();

            if(q.empty()){
                // jodi true hoy tar maane eitai last element //
                lastElement = k;
                break;
            }
            newQ.push(k);
        }

        q = newQ;
        return lastElement;
    }
    
    int top() {
        queue<int> newQ;
        int lastElement;

        while(!q.empty()){
            int k = q.front();
            q.pop();

            if(q.empty()){
                // jodi true hoy tar maane eitai last element //
                lastElement = k;
            }
            newQ.push(k);
        }

        q = newQ;
        return lastElement;
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