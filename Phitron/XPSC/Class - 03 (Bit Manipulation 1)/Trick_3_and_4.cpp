// Count Set Bit //

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

    int n;
    cin >> n;
    int ans = 0;

    while(n > 0){
        int bit = n & 1;
        n = n >> 1;
        ans += bit;                 // if(bit == 1) ans++;

        /*
        ans += n&1;
        n >>= 1;
        */
    }

    cout << ans << endl;

    return 0;
}