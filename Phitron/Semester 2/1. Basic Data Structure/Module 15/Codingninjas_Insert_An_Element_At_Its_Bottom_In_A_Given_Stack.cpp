#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int> newSt;

    while (!st.empty()) {
      newSt.push(st.top());
      st.pop();
    }

    st.push(x);
    // newSt.push(x);           // eta diyeo logic build hoy //

    while(!newSt.empty()){
        st.push(newSt.top());
        newSt.pop();
    }

    return st;
}
