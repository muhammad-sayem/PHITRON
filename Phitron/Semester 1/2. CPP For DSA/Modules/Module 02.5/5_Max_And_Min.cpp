#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minn = min({a,b,c});
    int maxx = max({a,b,c});
    
    cout << minn << " " << maxx << endl;

    return 0;
}