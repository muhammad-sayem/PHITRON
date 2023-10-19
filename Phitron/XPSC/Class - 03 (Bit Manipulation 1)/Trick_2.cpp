/*
        Even & 1 = 0;
        Odd & 1 = 1;
*/

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int x, y;
    cin >> x, y;

    int ans1 = x&1;
    int ans2 = y&1;

    cout << "Ans 1: " << ans1 << endl;
    cout << "Ans 2: " << ans2 << endl;

    return 0;
}