#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    sort(str.begin(), str.end());       /// (string er shurur pointer , ekdom null er pointer) diye dilam

    cout << str << endl;
    
    return 0;
}