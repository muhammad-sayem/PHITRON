#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
        int u;
        int v;
        int w;

        Edge(int u, int v, int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

int main()
{
    int n, e, i, j;
    cin >> n >> e;
    vector<Edge> v;

    while(e--){
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);

        // cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }

    int dist[n+5];

    for(i=0; i<=n; i++){
        dist[i] = INT_MAX;
    }

    dist[1] = 0;            // Source holo 1. Tai source er distance 0 kore deu=ya hoise //

    for(i=1; i<=n-1; i++){      // koto bar (n-1) relaxation hobe sheitar jonno ei loop //
        for(j=0; j<v.size(); j++){
            Edge ed = v[j];

            int a = ed.u;
            int b = ed.v;
            int w = ed.w;

            if(dist[a]+w < dist[b]){
                dist[b] = dist[a]+w;
            }
        }
    }

    for(i=1; i<=n; i++){
        cout << "Distance of Node " << i << ": " << dist[i] << endl; 
    }

    return 0;
}

