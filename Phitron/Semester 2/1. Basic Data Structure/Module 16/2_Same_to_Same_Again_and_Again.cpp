#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for(i=1; i<=n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    for(i=1; i<=m; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;

    if(n != m) cout << "NO" << endl;
    else{
        while(!st.empty()){
            if(st.top() != q.front()){
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}