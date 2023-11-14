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

double getDistance(int ax, int ay, int bx, int by){
    return sqrt(((ax-bx)*(ax-bx)) + ((ay-by)*(ay-by)));
}

bool isInside(int ax, int ay, int px, int py, double r){
    double d = getDistance(ax, ay, px, py);
    if((r-d) > 1e-15) return true;
    else return false;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        int px, py;
        cin >> px >> py;

        int ax, ay;
        cin >> ax >> ay;

        int bx, by;
        cin >> bx >> by;

        double l = 0.0;
        double r = INT_MAX*1.0;

        double ans;

        while((r-l) > 1e-15){           // (l<=r) er double e binary search chalanor form //
            double radius = l+(r-l)/2;      // mid

            // Case 1: Starting & Ending duitai A circle er moddhe ase //

            if(isInside(ax, ay, 0, 0, radius) && isInside(ax, ay, px, py, radius)){
                ans = radius;
                r = radius;
            }

            // Case 2: Starting & Ending duitai B circle er moddhe ase //
            
            else if(isInside(bx, by, 0, 0, radius) && isInside(bx, by, px, py, radius)){
                ans = radius;
                r = radius;
            }

            // Case 3: Starting A circle e & Ending B circle e & tader moddhe distance 2*r ba tar cheye kom //

            else if(isInside(ax, ay, 0, 0, radius) && isInside(bx, by, px, py, radius) && ((2*radius) - getDistance(ax, ay, bx, by)) > 1e-15){
                ans = radius;
                r = radius;
            }

            // Case 4: Starting B circle e & Ending A circle e & tader moddhe distance 2*r ba tar cheye kom //

            else if(isInside(bx, by, 0, 0, radius) && isInside(ax, ay, px, py, radius) && ((2*radius) - getDistance(ax, ay, bx, by)) > 1e-15){
                ans = radius;
                r = radius;
            }

            else{
                l = radius;
            }
        }
        cout << fixed << setprecision(10) << ans << endl;
    }

    return 0;
}