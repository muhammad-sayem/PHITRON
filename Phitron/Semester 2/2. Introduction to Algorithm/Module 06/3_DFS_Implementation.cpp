#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];        // Globally declared tai initially shob false //

void dfs(int u){
    // Section 1: Actions just after entering node u //
    visited[u] = true;
    cout << "Visting node: " << u << endl;

    for(int v: adj[u]){
        // Section 2: Actions entering before a new neighbour //
        if(visited[v] == false){
            dfs(v);
        }
        // Section 3: Actions after exiting a neighbour //
    }
    // Section 4: Actions before exiting neighbour u //
}

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

    dfs(1);

    /*
    for(i=1; i<=n; i++){
        cout << "Node " << i << ": ";
        for(int j: adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    */
    

    return 0;
}

// ---------------------------------------------------------------------- //

// Clean code Without comments //
/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];    

void dfs(int u){
    visited[u] = true;
    cout << "Visting node: " << u << endl;

    for(int v: adj[u]){
        if(visited[v] == false){
            dfs(v);
        }
    }

}

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

    dfs(1);

    return 0;
}

*/

 
 