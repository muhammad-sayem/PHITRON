#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
int depth[N];
bool visited[N];

void dfs(int u){
    visited[u] = true;

    for(int v: adj[u]){
        if(visited[v] == false){
            depth[v] = depth[u] + 1;
            dfs(v);
        }
    }
}

int main()
{
    int n, m, i, j;
    cin >> n >> m;

    while(m--){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int x;
    cin >> x;

    dfs(1);

    cout << "Depth of " << x << " = " << depth[x];
    
    return 0;
}