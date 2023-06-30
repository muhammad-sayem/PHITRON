#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Input Without space ///
    
    /*
    int n;
    cin >> n;

    vector<string> v;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    for(string str: v){
        cout << str << endl;
    }
    */

    /*
    int n;
    cin >> n;

    vector<string> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(string str: v){
        cout << str << endl;
    }
    */

// -------------------------------------------------------------------------- //

    /// Input With Spaces //

    int n;
    cin >> n;
    cin.ignore();

    vector<string> v(n);

    for(int i=0; i<n; i++){
        getline(cin, v[i]);
    }

    for(string str: v){
        cout << str << endl;
    }

    return 0;
}