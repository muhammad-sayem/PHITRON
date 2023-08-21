#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int level[N];
bool visited[N];
vector<int> adj[N];

void bfs(int src){
    queue<int> q;
    q.push(src);

    visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

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
    int n, e, i, j;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    for(i=1; i<=n; i++){
        cout << "Level of " << i << ": " << level[i] << endl;
    }
    
    return 0;
}