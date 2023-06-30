#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    cout << str[1] << endl;                 /// Normally je kono index access ///
    cout << str.at(1) << endl;              /// Built-In function diye je kono index access ///
    cout << str.front() << endl;            /// First index access /// 
    
    cout << str[str.size()-1] << endl;      /// Last index access ///  
    cout << str.back() << endl;             /// Last index access ///
    return 0;
}