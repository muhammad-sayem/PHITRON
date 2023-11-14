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

    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        int l = 0;
        int r = INT_MAX;            // Array er highest value nileo hobe //
        bool flag = false;

        while(l<=r){
            int mid = l + (r-l)/2;
            double ans = 1.0;

            for(i=0; i<n; i++){
                ans = ((double)a[i] / mid) * ans;
            }

            if(fabs(ans - 1.0) < 1e-15){
                flag = true;
                break;
            }
            else if(ans > 1.0){         // ans er value 1.0 er boro means x er value choto dhora hoise, barate hobe //
                l = mid + 1;
            }
            else{                       // ans er value 1.0 er choto means x er value boro dhora hoise, komate hobe //
                r = mid - 1;
            }
        }

        if(flag) yes;
        else no;
    }

    return 0;
}