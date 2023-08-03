#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;
        cin.ignore();

        string str;
        string s;
        cin >> str;

        stack<char> st;

        for(i=0; i<str.size(); i++){
            if(st.empty()){
                st.push(str[i]);
            }
            else{
                if(str[i] == st.top()){
                    st.pop();
                }
                else{
                    if((st.top() == 'R' && str[i] == 'G') || (st.top() == 'G' && str[i] == 'R')){
                        s.push_back('Y');
                        st.pop();
                    }
                    else if((st.top() == 'R' && str[i] == 'B') || (st.top() == 'B' && str[i] == 'R')){
                        s.push_back('P');
                        st.pop();
                    }
                    else if((st.top() == 'B' && str[i] == 'G') || (st.top() == 'G' && str[i] == 'B')){
                        s.push_back('C');
                        st.pop();
                    }
                }
            }
        }
        if(n%2 != 0) s.push_back(str[str.size()-1]);

        // cout << s << endl;

        stack<char> newSt;
        stack<char> st2;

        for(i=0; i<s.size(); i++){
            if(newSt.empty()){
                newSt.push(s[i]);
            }
            else{
                if(newSt.top() == s[i]){
                    newSt.pop();
                }
                else{
                    newSt.push(s[i]);
                }
            }
        }

        if(newSt.empty()){
            cout << endl;
        }

        else{
            while(!newSt.empty()){
                st2.push(newSt.top());
                newSt.pop();
            }

            while(!st2.empty()){
                cout << st2.top();
                st2.pop();
            }
            cout << endl;
        }

    }
    
    return 0;
}