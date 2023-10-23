#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int x;              // koto tomo bit er value jante chai sheta //
    cin >> x;

    int mask = 1<<x;    // joto tomo bit er value jante chai mask ber korte hole 1 ke toto bar left shit korte hoy //
    
    if((n&mask) == 0) cout << 0 << endl;
    else cout << 1 << endl;

    return 0;
}