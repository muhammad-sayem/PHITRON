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

    int n, i, j;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    bool flag = false;

    for(i=0; i< (1 << n); i++){
        ll sum = 0;
        
        for(j=0; j<n; j++){
            int mask = 1 << j;
            if((i&mask) == 0){
                sum -= a[j];
            }
            else{
                sum += a[j];
            }
        }

        if(sum%360 == 0){
            flag = true;
            break;
        }
    }

    if(flag) yes;
    else no;

    return 0;
}