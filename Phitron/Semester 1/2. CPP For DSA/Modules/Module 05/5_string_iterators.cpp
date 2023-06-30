#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    cout << *str.begin() << endl;       /// 0-th index er char print kore //
    cout << *str.end() << endl;         /// NULL print kore ///
    cout << *(str.end()-1) << endl;     /// Last char ke print kore ///
    
    return 0;
}

// ----------------------------------------------------------------------- //

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    string:: iterator it;

    for(it = str.begin(); it<str.end(); it++){
        cout << *it << endl;            /// '*it' deya lagse karon eta pointer, dereference kore print kora lage ///
    }

    /// Evabe korle alada vabe upore iterator declare kora lage na ///
    
    // for(string:: iterator it = str.begin(); it<str.end(); it++){
    //     cout << *it << endl;            
    // }

    /// C++ version 11 er porer gulo te 'auto' diye kaj kora jay. eketre automatically detect kore ney /// 
    
    // for(auto it = str.begin(); it<str.end(); it++){
    //     cout << *it << endl;            
    // }
    
    return 0;
}
*/

// ------------------------------------------------------------------------ //

/*
str.begin() pointer hishabe kaj kore tai direct access kora jay na.
*str.begin() diye dereferrence kore value access kora lage.
str.begin() print korle address print korar kotha, kintu eita private property tai address dekha jay na.

str.end(), last char er porer je NULL ke point kore.
str.begin() er moto same vabe kaj kore 
*/