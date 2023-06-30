#include<iostream>
using namespace std;
int main()
{
    int val;
    cin >> val;

    switch(val)
    {
        case 1:
            cout << "One" << endl;
            break;                      // break use korte hobe must //
        case 2:
            cout << "Two" << endl;
            break;                  
        case 3:
            cout << "Three" << endl;
            break;                  
        case 4:
            cout << "Four" << endl;
            break;                  
        case 5:
            cout << "Five" << endl;
            break;
        default:
            cout << "Didn't match" << endl;               
    }

    return 0;
}

// ------------------------------------------------------------------- //

/// Vowel Consonant Check ///
/*
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    switch(ch)
    {
        case 'a':
            cout << "Vowel" << endl;
            break;
        case 'e':
            cout << "Vowel" << endl;
            break;
        case 'i':
            cout << "Vowel" << endl;
            break;
        case 'o':
            cout << "Vowel" << endl;
            break;
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }

    return 0;
}
*/

// -------------------------------------------------------------------- //

// Even Odd Check //
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    switch(n%2)
    {
        case 0:
            cout << "Even" << endl;
            break;
        
        // case 1:
        //     cout << "Odd" << endl;
        //     break;

        default:
            cout << "Odd" << endl;
    }

    return 0;
}
*/