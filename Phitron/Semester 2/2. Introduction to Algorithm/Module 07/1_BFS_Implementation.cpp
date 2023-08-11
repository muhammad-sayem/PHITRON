#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool visited[N];
vector<int> adj[N];
int level[N];

void bfs(int s){
    queue<int> q;
    q.push(s);

    level[s] = 0;
    visited[s] = true;

    while(!q.empty()){
        // Pop the first node from the queue and insert their neighbours to the queue //

        int u = q.front();       // 'u' variable for storing the front element of the queue //
        q.pop();

        cout << "Visiting Node: " << u << endl;

        for(int v: adj[u]){
            if(visited[v] == false){
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
            }
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

    bfs(1);

    for(i=1; i<=n; i++){
        cout << "Level of " << i << ": " << level[i] << endl;
    }
    
    return 0;
}