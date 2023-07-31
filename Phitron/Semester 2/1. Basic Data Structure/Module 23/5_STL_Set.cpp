#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        s.insert(x);        // O(logN), n songkhok er jonno O(NlogN) and only unique values e insert hoy //
    }

    if(s.count(10)) cout << "Present" << endl;      // O(logN) s.count(value) return kore 0 and 1. orthat true or false //
    else cout << "Not Present" << endl;

    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout << *it << " ";         
    // }
       
    return 0;
}