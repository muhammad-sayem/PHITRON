#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int GCD = __gcd(a,b);
    int LCM = (a/GCD)*b;
    
    //int LCM = (a*b)/GCD;

    cout << "GCD: " << GCD << endl;
    cout << "LCM: " << LCM << endl;
    
    return 0;
}