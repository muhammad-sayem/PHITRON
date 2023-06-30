#include<bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val){           
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v.back();
    }

    int size(){
        v.size();
    }

    bool empty(){
        if(v.size() == 0) return true;
        else return false;
    }
};

int main()
{
    myStack st;

    int n, i;
    cin >> n;

    for(i=1; i<=n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(st.empty() == false){
        cout << st.top() << " ";        // 50 40 30 20 10 //
        st.pop();
    }

    return 0;
}


// ------------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// using namespace std;

// class myStack
// {
// public:
//     vector<int> v;

//     void push(int val){           
//         v.push_back(val);
//     }

//     void pop(){
//         v.pop_back();
//     }

//     int top(){
//         return v.back();
//     }

//     int size(){
//         v.size();
//     }

//     bool empty(){
//         if(v.size() == 0) return true;
//         else return false;
//     }

// };

// int main()
// {
//     myStack st;

//     st.push(10);
//     st.push(20);
//     cout << st.top() << endl;       // 20 //
//     st.pop();
//     cout << st.top() << endl;       // 10 //
//     st.pop();
//     cout << st.top() << endl;       // 134232647 (Garbage value, online judge e runtime error ba segmentation fault dey) //
    
//     return 0;
// }