#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int, int>> v[N];
int dist[N];

void dijkstra(int s){
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int i=0; i<v[parent].size(); i++){
            pair<int, int> child = v[parent][i];

            int childNode = v[parent][i].first;
            int childCost = v[parent][i].second;

            if(dist[parent] + childCost < dist[childNode]){
                dist[childNode] = dist[parent] + childCost;
                q.push(childNode);
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