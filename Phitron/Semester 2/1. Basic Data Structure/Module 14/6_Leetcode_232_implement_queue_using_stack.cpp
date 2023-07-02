class MyQueue {
public:

    stack<int> st;

    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> newSt;
        int lastElement;

        while(!st.empty()){
            int k = st.top();
            st.pop();

            if(st.empty()){
                lastElement = k;
                break;
            }
            newSt.push(k);
        }
        
        while(!newSt.empty()){
            int val = newSt.top();
            st.push(val);
            newSt.pop();
        }

        return lastElement;
    }
    
    int peek() {
        stack<int> newSt;
        int firstElement;

        while(!st.empty()){
            int k = st.top();
            st.pop();

            if(st.empty()){
                firstElement = k;
            }
            newSt.push(k);
        }
        while(!newSt.empty()){
            int val = newSt.top();
            st.push(val);
            newSt.pop();
        }

        return firstElement;
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

// --------------------------------------------------------------------------- //

// class MyQueue {
// public:

//     stack<int> st;

//     MyQueue() {
        
//     }
    
//     void push(int x) {
//         st.push(x);
//     }
    
//     int pop() {
//         stack<int> newSt;
//         int lastElement;

//         while(!st.empty()){
//             int k = st.top();
//             st.pop();

//             if(st.empty()){
//                 lastElement = k;
//                 break;
//             }
//             newSt.push(k);
//         }
        
//         while(!newSt.empty()){
//             st.push(newSt.top());
//             newSt.pop();
//         }

//         return lastElement;
//     }
    
//     int peek() {
//         stack<int> newSt;
//         int firstElement;

//         while(!st.empty()){
//             int k = st.top();
//             st.pop();

//             if(st.empty()){
//                 firstElement = k;
//             }
//             newSt.push(k);
//         }
//         while(!newSt.empty()){
//             st.push(newSt.top());
//             newSt.pop();
//         }

//         return firstElement;
//     }
    
//     bool empty() {
//         return st.empty();
//     }
// };

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */