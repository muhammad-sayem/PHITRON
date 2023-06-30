#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello World";
    
    //1 
    // string s("Hello World");       /// works like a constructor ///
    
    //2
    // string s("Hello World", 7);       /// koto gula character dekhte chacchi second parameter a seta bole dite hbe ///
    
    // 3
    string s1 = "Hello World";      /// evabe onno ekta string er variable a rekhe nicher kaj krle 
    string s2(s1, 4);               // second parameter a bole dite hobe samne theke kotogulo char baad dite cacchi
    cout << s1 << endl;     /// o World 

    // 4 
    string str(10, 'Y');        /// ekta char joto baar chai, shei number ta first parameter e dite hobe, 2nd parameter e jei char dite chai sheta dite hobe //
    cout << str << endl;        /// YYYYYYYYYY ///
    
    return 0;
}