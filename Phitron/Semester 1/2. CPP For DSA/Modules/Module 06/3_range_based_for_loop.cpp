#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int i;

    // Index er maddhome char print korte chaike //
    for(i=0; i<s1.size(); i++){
        cout << s1[i] << " ";           // h e l l o //
    }
    cout << endl;

    // Shortcut Loop (Range Based Loop) er maddhome //
    string s2;
    cin >> s2;

    for(char ch: s2){           // Syntax: for(data type, variable name)
        cout << ch << " ";      // h e l l o //
    }

    
    return 0;
}