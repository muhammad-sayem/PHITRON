#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> v1(n);

    for(i=0; i<n; i++){
        cin >> v1[i];
    }

    int m;
    cin >> m;
    vector<int> v2(m);

    for(i=0; i<m; i++){
        cin >> v2[i];
    }

    int x;
    cin >> x;

    v1.insert(v1.begin()+x, v2.begin(), v2.end());

    for(i=0; i<n+m; i++){
        cout << v1[i] << " ";
    }

    return 0;
}