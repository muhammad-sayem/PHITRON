#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool visited[N];
int dist[N];
vector<int> v[N];

void dfs(int u){
    visited[u] = true;

    for(int child: v[u]){
        if(visited[child] == false){
            dfs(child);
        }
    }
}

int main()
{
    int n, e, i;
    cin >> n >> e;
    vector<int> vec;

    while(e--){
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int connectedComponents = 0;

    for(i=1; i<=n; i++){
        if(visited[i] == false){
            connectedComponents++;
            vec.push_back(i);
            dfs(i);
        }
    }

    cout << "Number of connected components: " << connectedComponents << endl;
    
    for(int val: vec){
        cout << val << " ";
    }
    
    return 0;
}