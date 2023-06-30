#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    
    stringstream ss(str);

    // stringstream ss;
    // ss << str;

    string word;
    int cnt = 0;

    while(ss >> word){
        cout << word << endl;
        cnt++;
    }
    cout << endl; 

    cout << "Words: " << cnt << endl;
    
    return 0;
}