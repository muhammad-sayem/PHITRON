#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool visited[N];
vector<int> adj[N];

bool dfs(int u, int p){
    visited[u] = true;

    bool cycleExists = false;

    for(int v: adj[u]){
        if(v == p){
            continue;
        }

        if(visited[v] == true){
            return true;
        }
        cycleExists = cycleExists | dfs(v, u);
    }

    return cycleExists;
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

    bool isCycle = false;

    for(i=1; i<=n; i++){
        if(visited[i] == false){
            isCycle |= dfs(i, -1);
        }
    }


    if(isCycle){
        cout << "Cycle Detected" << endl;
    }
    else{
        cout << "No cycle detected" << endl; 
    }

    return 0;
}