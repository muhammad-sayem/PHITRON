#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N]; 
int depth[N];   
int height[N];   

void dfs(int u){
    visited[u] = true;
    // cout << "Visting node: " << u << endl;

    for(int v: adj[u]){
        if(visited[v] == false){
            depth[v] = depth[u]+1;
            dfs(v);

            if(height[v]+1 > height[u]){
                height[u] = height[v] + 1;
            } 

            // height[u] = max(height[u], height[v]+1);
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

    for(i=1; i<=n; i++){
        cout << "Depth of Node " << i << ": " << depth[i] << endl;
    }

    cout << "***********************************************************\n";

    for(i=1; i<=n; i++){
        cout << "Height of Node " << i << ": " << height[i] << endl;
    }

    return 0;
}