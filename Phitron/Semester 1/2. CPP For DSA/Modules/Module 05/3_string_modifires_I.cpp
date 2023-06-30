#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";

    s1 += s2;                       /// s1 = s1+s2 ///
    // s1.append(s2);               /// s1 = s1+s2 er moto same kaj e kore ///

    cout << s1 << endl;             /// HelloWorld ///
    cout << s2 << endl;             /// Hello ///

    s2.push_back('Y');              /// String er las e ekta character push kore dey ///
    cout << s2 << endl;             /// WorldY ///

    s2.pop_back();                  /// Last er index er character ta ke remove kore dey ///
    cout << s2 << endl;             /// World ///

    s2.pop_back();                  
    cout << s2 << endl;             /// Worl ///

    return 0;
}