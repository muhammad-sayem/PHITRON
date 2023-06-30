#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Capacity ///

    /*
    vector<int> v;
    
    // cout << v.max_size() << endl;   // 1073741823 (Kintu online compiler e eto dey na......10^6 porjonto dey normally) //
    
    cout << v.capacity() << endl;       // 0 //

    v.push_back(10);
    cout << v.capacity() << endl;       // 1 //

    v.push_back(20);
    cout << v.capacity() << endl;       // 2 //

    v.push_back(30);
    cout << v.capacity() << endl;       // 4 //

    v.push_back(40);
    cout << v.capacity() << endl;       // 4 //

    v.push_back(50);
    cout << v.capacity() << endl;       // 8 //
    */

    /// Clear ///

    /*
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.clear();          // Value gula ignore kore. Clear korle memory theke delete kore dey na, shudhu size 0 kore dey //
    
    cout << v.size() << endl;       // 0 //

    // for(int i=0; i<v.size(); i++){
    //     cout << v[i] << " ";            // 10 20 30 40 50 //
    // }

    cout << v[0] << endl;       // 10 (evabe dhore dhore access kora jay)//    
    cout << v[3] << endl;       // 40 //
    */

    /// Resize///

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(2);        // size komaite chaile joto porjonto rakhte chai shei number ta dite hoy //
    v.resize(7, 100);   // first parameter e joto size korte chai sheta, second parameter e kon value dite chai sheta //

    cout << v.size() << endl;       // 7 //

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";            // 10 20 100 100 100 100 100 //
    }


    return 0;
}