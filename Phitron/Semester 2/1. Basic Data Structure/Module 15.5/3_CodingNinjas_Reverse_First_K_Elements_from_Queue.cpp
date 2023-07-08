#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    queue<int> newQ;
    stack<int> st;
    int i;

    for(i=1; i<=k; i++){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        newQ.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        newQ.push(q.front());
        q.pop();
    }

    return newQ;


}
