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

bool isValid(int diff, int a[], int n, int c){
    int cnt = 1;
    int last = 0;

    for(int i=1; i<n; i++){
        if(abs(a[i] - a[last]) >= diff){
            cnt++;
            last = i;
        }
    }

    if(cnt >= c) return true;
    else return false;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, c, i, ans;
        cin >> n >> c;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        int l = 0;
        int r = a[n-1] - a[0];

        while(l <= r){
            int mid = l + (r-l)/2;

            if(isValid(mid, a, n, c)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}