#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e, i, j;
    cin >> n >> e;
    vector<int> adj[n+1];

    while(e--){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(i=0; i<=n; i++){
        cout << "Elements of Node " << i << ": ";
        
        // for(j=0; j<adj[i].size(); j++){
        //     cout << adj[i][j] << " ";           // ekhane 'adj[i]' eita holo nijei vector. ar '[j]' diye index bujhaise //
        // }
        // cout << endl;

        for(int j: adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}