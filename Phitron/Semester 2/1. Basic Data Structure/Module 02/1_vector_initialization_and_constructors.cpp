#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1 //
    /*
    vector<int> v;
    cout << v.size() << endl;       // 0 //
    */

    // 2 //
    /*
    vector<int> v(7);        // () er moddhe size dile oi size er vector create hoy //
    cout << v.size() << endl;       // 7 //
    */

    // 3 //
    /*
    vector<int> v(7);       // kichu na diie vitore shob 0 thake //
    cout << v.size() << endl;       // 7 //

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";        // 0 0 0 0 0 0 0 //
    }
    */

    // 4 //
    /*
    vector<int> v(7, 10);       // first parameter e size ar scond parameter e joto diye initialize korte chai sheta dite hoy //
    cout << v.size() << endl;       // 7 //

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";        // 10 10 10 10 10 10 10 //
    }
    */

    // 5 //
    /*
    vector<int> v1(5, 100);
    vector<int> v2(v1);         // v1 vector ta v2 te copy hoye gese //

    cout << v2.size() << endl;       // 5 //

    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";        // 100 100 100 100 100 //
    }
    */

    // 6 //
    /*
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a+5);      // sort er moto shuru ar shesh er pointer diye dite hoy // 

    cout << v.size() << endl;

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";        // 1 2 3 4 5  //
    }
    */

    // 7 //

    vector<int> v =  {3, 5, 6, 9};      // Initialization //
    
    cout << v.size() << endl;       // 4 //

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";        // 3, 5, 6, 9  //
    }

    return 0;
}
 
// --------------------------------------------------------------------------- //

/*

/// Phitron(Rahat Khan Pathan Vai's code) ///

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; type 1
    // vector<int> v(5); type 2
    // vector<int> v(5,10); type 3
    // vector<int> v2(5,100); type 4
    // vector<int> v(v2); type 4

    // int a[6]={1,2,3,4,5,6};
    // vector<int> v(a,a+6);
    vector<int> v={2,10,3};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    return 0;
}
*/