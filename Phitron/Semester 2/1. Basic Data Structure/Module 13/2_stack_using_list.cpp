#include<bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list <int> l;

    void push(int val){           
        l.push_back(val);
    }

    void pop(){
        l.pop_back();
    }

    int top(){
        return l.back();
    }

    int size(){
        l.size();
    }

    bool empty(){
        if(l.size() == 0) return true;
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
