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

    double n;
    cin >> n;

    double l = 0.0;
    double r = n;

    while((r-l) >= 1e-15){
        double mid = l + (r-l)/2;
        double val = mid*mid;

        if(fabs(val - n) < 1e-15){
            cout << mid << endl;
            break;
        }
        else if(val > n){
            r = mid;
        }
        else{
            l = mid;
        }
    }

    return 0;
}