#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int, int>> v[N];
int dist[N];
bool visited[N];

void dijkstra(int s){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    dist[s] = 0;

    while(!pq.empty()){
        pair<int, int> parent = pq.top();
        pq.pop();

        int parentNode = parent.second;

        if(visited[parentNode] == true){
            continue;
        }

        visited[parentNode] = true;

        int parentCost = parent.first;

        for(int i=0; i<v[parentNode].size(); i++){
            pair<int, int> child = v[parentNode][i];

            int childNode = v[parentNode][i].first;
            int childCost = v[parentNode][i].second;

            if(parentCost + childCost < dist[childNode]){
                dist[childNode] = parentCost +childCost;
                pq.push({dist[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e, i;
    cin >> n >> e;

    while(e--){
        int a, b, w;
        cin >> a >> b >> w;

        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }

    for(i=1; i<=n; i++){
        dist[i] = INT_MAX;
    }

    dijkstra(1);

    for(i=1; i<=n; i++){
        cout << "Distance of " << i << ": " << dist[i] << endl;
    }

    return 0;
}