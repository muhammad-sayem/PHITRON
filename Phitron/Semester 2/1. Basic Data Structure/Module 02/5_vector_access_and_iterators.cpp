#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Elements access // 
    /*
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v[0] << endl;               // First Element //
    cout << v.front() << endl;          // First Element //
    cout << v.back() << endl;           // Last Element //
    cout << v[v.size()-1] << endl;      // Last Element //
    */

    // Elements Access //

    vector<int> v = {1, 2, 3, 4, 5};

    for(auto it = v.begin(); it <v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}