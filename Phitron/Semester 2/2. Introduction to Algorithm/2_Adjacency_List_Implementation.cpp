// Unwighted //

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];

int main()
{
    int n, m, i;         // number of nodes (n) and number of edges (m) //
    cin >> n >> m;

    while(m--){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);     // undirected hole use korte hoy //
    }

    // Printing //

    for(i=1; i<=n; i++){
        cout << "List " << i << ": ";
        for(int j: adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}

 // --------------------------------------------------------------------- //

// Weighted //
/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int, int>> adj[N];

int main()
{
    int n, m, i;         // number of nodes (n) and number of edges (m) //
    cin >> n >> m;

    while(m--){
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});     // undirected hole use korte hoy //
    }

    // Printing //

    for(i=1; i<=n; i++){
        cout << "List " << i << ": ";
        for(auto j: adj[i]){
            cout << "(" <<j.first << ", " << j.second << ") ";
        }
        cout << endl;
    }
    
    return 0;
}
*/