#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, cnt = 0;
    cin >> n;

    vector<int> v(n);

    for(i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(i=0; i<n-1; i++){
        auto it = find(v.begin()+i+1, v.end(), v[i]+1);

        if(it != v.end()) cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}