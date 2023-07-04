class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;

        for(char c: s){
            if(c != '#'){
                st1.push(c);
            }
            else if(c == '#'  && st1.empty() == false){     // jodi '#' hoy && stack khali na hoy taholei remove korte parbe. Khali thaka obosthay pop korle runtime error dey //
                st1.pop();
            }
        }

        for(char ch: t){
            if(ch != '#'){
                st2.push(ch);
            }
            else if(ch == '#'  && st2.empty() == false){    // jodi '#' hoy && stack khali na hoy taholei remove korte parbe. Khali thaka obosthay pop korle runtime error dey //
                st2.pop();
            }
        }

        if(st1 == st2) return true;
        else return false;
    }
};