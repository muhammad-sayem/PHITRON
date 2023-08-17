#include<bits/stdc++.h>
#define    pii    pair <int,int>
using namespace std;

const int N = 1e3+5;
const int INF = 1e9+10;
vector<pii> adj[N];
vector<int> dist(N, INF);
vector<bool> visited(N);

void dijkstra(int source){
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[source] = 0;
    pq.push({dist[source], source});

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        visited[u] = true;

        for(pii vpair: adj[u]){
            int v = vpair.first;        
            int w = vpair.second;       

            if(visited[v] == false){
                if(dist[v] > dist[u] + w){
                    dist[v] = dist[u] + w;      
                    pq.push({dist[v], v});
                }
            }
        }
    }
}


int main()
{
    int n, m, i;
    cin >> n >> m;

    while(m--){
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(1);

    for(i=1; i<=n; i++){
        cout << "Distance of " << i << ": ";
        cout << dist[i] << endl;
    }
    
    return 0;
}