#include<bits/stdc++.h>
#define     pii    pair <int,int>
using namespace std;

const int INF = 1e9+5;
const int N = 1e5+5;
vector<pii> g[N];
int d[N];
int n, m;

void bellman_ford(int s){
    for(int i=1; i<=n; i++){
        d[i] = INF;
    }

    d[s] = 0;

    for(int i=1; i<n; i++){     // n-1 porjonto loop ta cholar jonno //
        // All edges relaxition //

        for(int u=1; u<=n; u++){
            for(pii vpair: g[u]){
                int v = vpair.first;
                int w = vpair.second;

                if(d[u] != INF && d[v] > d[u] + w){
                    d[v] = d[u] + w;
                }
            }
        }
    }   
}

int main()
{
    int i;          // int n, m egulo globally declare kora ase //
    cin >> n >> m;

    while(m--){
        int u, v, w;
        cin >> u >> v >> w;

        g[u].push_back({v, w});
    }

    bellman_ford(1);

    for(i=1; i<=n; i++){
        cout << "Distance of " << i << ": " << d[i] << endl;
    }
    
    return 0;
}

// ----------------------------------------------------------------------- //

/*
#include<bits/stdc++.h>
#define     pii    pair <int,int>
using namespace std;

const int INF = 1e9+5;
const int N = 1e5+5;
vector<pii> g[N];
vector<pair<pii, int>> list_of_edges;
int d[N];
int n, m;

void bellman_ford(int s){
    for(int i=1; i<=n; i++){
        d[i] = INF;
    }

    d[s] = 0;

    for(int i=1; i<n; i++){     // n-1 porjonto loop ta cholar jonno //
        // All edges relaxition //

        for(auto edge: list_of_edges){
            int u = edge.first.first;
            int v = edge.first.second;
            int w = edge.second;

            if(d[u] != INF && d[v] > d[u] + w){
                d[v] = d[u] + w;
            }
        }

    }   
}

int main()
{
    int i;          // int n, m egulo globally declare kora ase //
    cin >> n >> m;

    while(m--){
        int u, v, w;
        cin >> u >> v >> w;

        // g[u].push_back({v, w});
        list_of_edges.push_back({{u,v}, w});
    }

    bellman_ford(1);

    for(i=1; i<=n; i++){
        cout << "Distance of " << i << ": " << d[i] << endl;
    }

    return 0;
}
*/