#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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

    ll n, a, b, p, q, i, ans = 0;
    cin >> n >> a >> b >> p >> q;

    ll LCM = lcm(a,b);
    ll same = n/LCM;

    ans += (n/a)*p;
    ans += (n/b)*q;
    
    ans -= (same*(p+q));
    ans += (same*max(p,q));

    cout << ans << nl;

    return 0;
}