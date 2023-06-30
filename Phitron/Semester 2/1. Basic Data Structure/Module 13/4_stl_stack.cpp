#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n, i;
    cin >> n;

    for(i=1; i<=n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}

// ---------------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     if(!st.empty()) {
//         cout << st.top() << endl;       // jodi stack empty na thake taholei print korte parnbe top ke //
//     }
//     st.pop();
//     if(!st.empty()) {
//         cout << st.top() << endl;       
//     }

    
//     return 0;
// }