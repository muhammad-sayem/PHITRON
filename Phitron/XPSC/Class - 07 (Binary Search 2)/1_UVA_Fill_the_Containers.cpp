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

bool isValid(ll a[], ll n, ll cap, ll m){
    ll container = 1, sum = 0, i;

    for(i=0; i<n; i++){

        if(a[i] > cap){
            return false;
        }

        sum += a[i];
        
        if(sum > cap){
            container++;
            sum = a[i];
        }

        if(container > m){
            return false;
        }
    }
    return true;
}

int main()
{
    fastIO;

    int n, m, i, ans;
    while(cin >> n >> m){
         
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        ll l = 0;
        ll r = 1e9;

        while(l<=r){
            ll cap = l + (r-l)/2;       // mid (capacity) //
            
            if(isValid(a, n, cap, m)){
                ans = cap;
                r = cap - 1;
            }
            else{
                l = cap + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}