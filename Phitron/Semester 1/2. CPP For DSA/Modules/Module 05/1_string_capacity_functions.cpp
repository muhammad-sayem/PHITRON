#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Hello World";

    cout << str.size() << endl;         /// string er length ba size ber korar jonno ///
    cout << str.max_size() << endl;     /// je machine e kaj kora hocche shei machine string er jonno maximum koto size nite parbe. Online compiler e 10^6 porjonto dey ///
    cout << str.capacity() << endl;     /// eta shurute kichu declare korle ek rokom thake. Er pore jodi input er maddhome size barai tahole automatically size + capacity dui tai barbe ///
    

    /*
    string str = "Hello";
    str.clear();                /// jodi str.clear() diye clear kore deya hoy tahole er age string e kichu initialize kore kore dileo empty e print kore ///
    if(str.empty() == true) cout << "Empty" << endl;
    else cout << "Not Empty" << endl;
    */

   /*
    string str;
    cin >> str;                 /// Input: abcdefghij ///

    str.resize(5);              /// first 5 ta ta character rekhe bakigula delete kore dibe ///
    cout << str << endl;        /// Output: abcde ///

    str.resize(10, 'Y');
    cout << str << endl;        /// Output: abcdeYYYYY ///
    */
    return 0;
}