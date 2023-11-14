#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> divisors;

    for(i=1; i*i<=n; i++){
        if(n%i == 0){
            divisors.push_back(i);
            if((n/i) != i){
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for(auto val: divisors){
        cout << val << " ";
    }
    
    return 0;
}