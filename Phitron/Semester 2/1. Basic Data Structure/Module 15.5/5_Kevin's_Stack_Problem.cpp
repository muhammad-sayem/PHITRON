#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char> st;
	string str;
	int i;

	for(i=0; i<s.size(); i++){
		st.push(s[i]);
	}

	while(!st.empty()){
		str.push_back(st.top());
		// str += st.top();         // Same kaj kore //
		st.pop();
	}

	return str;
}
