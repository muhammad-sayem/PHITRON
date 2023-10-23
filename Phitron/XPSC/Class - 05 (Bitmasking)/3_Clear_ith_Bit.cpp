#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i;          // koto tomo bit //
    cin >> i;

    int x = 63;         // 2 er power er ager je kono value er shb bit 1 thake //
    
    int mask = 1<<i;
    int newMask = (x^mask);     // Reverse Mask //

    int finalAns = (n & newMask);

    cout << finalAns << endl;

    return 0;
}