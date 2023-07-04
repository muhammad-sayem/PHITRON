#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    stack<int> st;

    for(i=0; i<n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    queue<int> q;

    for(i=0; i<m; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    if(n != m) cout << "NO" << endl;        // Size checking. Cause size samer na hoile same houa possible na
    
    else{
        bool flag = true;

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