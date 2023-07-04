#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    stack<int> st1;

    for(i=0; i<n; i++){
        int x;
        cin >> x;
        st1.push(x);
    }

    int m;
    cin >> m;
    stack<int> st2;

    for(i=0; i<m; i++){
        int x;
        cin >> x;
        st2.push(x);
    }

    if(n != m) cout << "NO" << endl;        // Size checking. Cause size samer na hoile same houa possible na

    else{
        bool flag = true;

        for(i=0; i<n; i++){
            if(st1.top() != st2.top()){
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}