#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    map<int, int> mp;

    for(i=2; i*i<=n; i++){
        while(n%i == 0){
            mp[i]++;
            n /= i;
        }
    }

    if(n > 1){
        mp[n]++;
    }
    
    for(auto pair: mp){
        cout << pair.first << "^" << pair.second << endl; 
    }

    // for(auto [x, y]: mp){
    //     cout << x << "^" << y << endl;
    // }

    
    return 0;
}