#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if(ch>='a' && ch<='z') cout << "ALPHA\n" << "IS SMALL\n";
    else if(ch>='A' && ch<='Z') cout << "ALPHA\n" << "IS CAPITAL\n";
    else cout << "IS DIGIT\n";
    
    return 0;
}