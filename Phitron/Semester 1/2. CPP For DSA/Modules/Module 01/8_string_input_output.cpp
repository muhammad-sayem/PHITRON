#include<iostream>
using namespace std;
int main()
{
    char s[100];
    
    // cin >> s;

    cin.getline(s, 100);

    cout << s << endl;

    return 0;
}