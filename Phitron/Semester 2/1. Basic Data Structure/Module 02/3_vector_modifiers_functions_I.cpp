#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Assign ///
    /*
    vector<int> v1 = {10, 20, 30, 40};
    vector<int> v2 = {1, 2, 3};

    v2 = v1;        // v1 er elements v2 te copy hoye gese. Complexity: O(N). But jodi duita same size er vector copy kora hoy tokhon Complexity: O(1) //

    cout << v2.size() << endl;      // 4 //

    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";       // 10 20 30 40 //
    }
    */

// --------------------------------------------------------------------------- //

    /// push_back() and pop_back ///

    /*
    vector<int> v = {10, 20, 30, 40};

    cout << v.size() << endl;       // 4 //
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";       // 10 20 30 40 //
    }
    cout << endl << endl;

    // push_back() //

    cout << "Push Back:\n";

    v.push_back(50);        // 5 //
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";       // 10 20 30 40 50 //
    }
    cout << endl;

    v.push_back(60);        // 6 //
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";       // 10 20 30 40 50 60 //
    }
    cout << endl << endl;

    // pop_back() //

    cout << "Pop Back:\n";

    v.pop_back();        // 5 //
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";       // 10 20 30 40 50 //
    }
    cout << endl;

    v.pop_back();        // 4 //
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";       // 10 20 30 40 //
    }
    cout << endl;

    v.pop_back();        // 3 //
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";       // 10 20 30//
    }
    cout << endl;
    */

// --------------------------------------------------------------------------- //

    /// Insert ///

    /*
    // single element insert //

    // vector<int> v = {1, 2, 3, 4, 5};
    // v.insert(v.begin()+2, 77);     // First parameter e jei position e insert korte chai shetar index er pointer dite hoy. Second parameter e je value insert korte chai sheta dite hoy //

    // for(int i=0; i<v.size(); i++){
    //     cout << v[i] << " ";        // 1 2 77 3 4 5 //
    // }

    // Multiple element insert //

    vector<int> v1 = {77, 88, 99};
    vector<int> v2 = {1, 2, 3, 4, 5};

    v2.insert(v2.begin()+3, v1.begin(), v1.end());      // First parameter e jei position e insert korte chai shetar index er pointer dite hoy. Second parameter e je vector ta copy korte chai tar shurur pointer ar shesh er pointer dite hoy //

    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";        // 1 2 3 77 88 99 4 5 //
    }
    */

// --------------------------------------------------------------------------- //

    /// Erase ///

    vector<int> v = {1, 2, 3, 4, 5};

    // v.erase(v.begin()+3);        // Ekta element erase kore. Jeta erase korte chai shetar index er pointer dite hoy //

    v.erase(v.begin()+1, v.begin()+4);      // Multiple elements remove korte. jekhan theke erase korte chai shetar shurur index er pointer ar jekhane shesh korte chai shetar last er ager index e pointer //

    for(int x: v){      // Range based loop or shortcut loop //
        cout << x << " ";       // 1 5 //
    }






    return 0;
}