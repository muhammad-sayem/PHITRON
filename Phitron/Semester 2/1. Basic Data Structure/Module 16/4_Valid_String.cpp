#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        string str;
        cin >> str;
        stack<char> st;
        int i;

        for(i=0; i<str.size(); i++){
            if(st.empty()){
                st.push(str[i]);
            }
            else{
                if(str[i] == st.top()){
                    st.push(str[i]);
                }
                else{
                    st.pop();
                }
            }
        }
        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}

