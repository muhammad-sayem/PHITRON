class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        int i;

        for(i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                
                else{
                    if(s[i] == ')' && st.top() == '('){
                        st.pop();
                    }
                    else if(s[i] == '}' && st.top() == '{'){
                        st.pop();
                    }
                    else if(s[i] == ']' && st.top() == '['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        if(st.empty()) return true;
        else return false;

    }
};


// -------------------------------------------------------------------------- //
/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        if(s.size() == 1) return false;

        for(char c: s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                
                else{
                    if(c == ')' && st.top() == '('){
                        st.pop();
                    }
                    else if(c == '}' && st.top() == '{'){
                        st.pop();
                    }
                    else if(c == ']' && st.top() == '['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(st.empty()) return true;
        else return false;

    }
};
*/
