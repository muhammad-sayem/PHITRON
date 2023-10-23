#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;

    int mask = 1<<x;
    int ans = n^mask;

    cout << ans << endl;
    
    return 0;
}