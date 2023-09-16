#include<bits/stdc++.h>
#define  ll  long long
using namespace std;

const int N = 1e5+5;
ll save[N];

ll fibo(ll n){
    if(n<=1) return 1;

    // Memoization //

    if(save[n] != -1){
        return save[n];
    }
    else{
        ll ans1 = fibo(n-1);
        ll ans2 = fibo(n-2);
        save[n] = ans1 + ans2;
        return save[n];
    }

}

int main()
{
    ll n, i;
    cin >> n;

    for(i=0; i<=n; i++){
        save[i] = -1;
    }

    cout << fibo(n) << endl;

    for(i=0; i<=n; i++){
        cout << save[i] << " ";
    }

    return 0;
}