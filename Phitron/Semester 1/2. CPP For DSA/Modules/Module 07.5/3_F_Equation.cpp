#include<bits/stdc++.h>
using namespace std;

void power(long x, long n){
    long long i, j, res = 0 , val = 1;

    for(i=2; i<=n; i+=2){
        for(j=1; j<=i; j++){
            val *= x;
        }
        res += val;
        val = 1;
    }

    cout << res << endl;
}

int main()
{
    long long x, n;
    cin >> x >> n;

    power(x, n);
    
    return 0;
}