#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int level[N];
bool visited[N];
vector<int> adj[N];

void dfs(int src){
    visited[src] = true;
    cout << src << " ";

    for(int i=0; i<adj[src].size(); i++){
        int child = adj[src][i];
        if(visited[child] == false){
            dfs(child);
        }
    }
}

int main()
{
    int n, e, i, j;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);

    
    return 0;
}