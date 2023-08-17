#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool visited[N];
vector<int> adj[N];
int level[N];
int parent[N];

// Complexsity of BFS: O(n+m) //

void bfs(int s){
    queue<int> q;
    q.push(s);

    level[s] = 0;
    visited[s] = true;
    parent[s] = -1;

    while(!q.empty()){
        // Pop the first node from the queue and insert their neighbours to the queue //

        int u = q.front();       // 'u' variable for storing the front element of the queue //
        q.pop();

        // cout << "Visiting Node: " << u << endl;

        for(int v: adj[u]){
            if(visited[v] == false){
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
                parent[v] = u;
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

    int s, d;
    cin >> s >> d;

    bfs(s);

    cout << "Distance: " << level[d] << endl;

    // for(i=1; i<=n; i++){
    //     cout << "Parent of " << i << ": " << parent[i] << endl;
    // }

    // Path Finding: Complexity --> O(n) //

    vector<int> path;
    int current = d;

    while(current != -1){
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());

    cout << "Path: "; 

    for(int val: path){
        cout << val << " ";
    }

    return 0;
}