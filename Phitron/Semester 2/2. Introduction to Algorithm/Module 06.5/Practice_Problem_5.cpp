#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int height[N];

void dfs(int u){
    visited[u] = true;

    for(int v: adj[u]){
        if(visited[v] == false){
            dfs(v);
            height[u] = max(height[u], height[v]+1);
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

    cout << "Height of " << x << " = " << height[x];
    
    return 0;
}