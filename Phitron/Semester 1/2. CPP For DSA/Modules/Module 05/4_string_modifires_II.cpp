#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "HelloWorld";

    // s = "World";
    // s.assign("World");       /// s = "World" er motoi kaj kore ///  
    
    // s.erase(4, 3);           /// 2 ta parameter ney. prothom ta holo kon index theke de lete korte chai, ar porer ta holo koyta character delete korte chai ///
    // cout << s << endl;       /// Hellrld ///

    // s.replace(4, 3, "PQ");      /// erase + replace kore. Pothom 2 ta parameter diye erase function er moto same kaj kora hoy. Ar 3rd parameter e bole dite hoy je kon strng ta diye replace korte chai ///    
    // cout << s << endl;          /// HellPQrld ///

    s.insert(5, "ABCDE");        /// first parameter e je number deya ho, oi index er por theke insert kore ///  
    cout << s << endl;          /// HelloABCDEWorld ///

    return 0;
}