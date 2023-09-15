#include<bits/stdc++.h>
#define  pb  push_back
#define  ll  long long
using namespace std;

class Edge
{
    public:
        int a;
        int b;
        int w;
 
        Edge(int a, int b, int w){
            this->a = a;
            this->b = b;
            this->w = w;
        }
};

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}      

int parent[100005];
int parentSize[100005];

void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int findLeader(int node){
    while(parent[node] != -1){
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b){
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);

    if(leaderA != leaderB){

        if(parentSize[leaderA] > parentSize[leaderB]){
            parent[leaderB] = leaderA; 
            parentSize[leaderA] += parentSize[leaderB];
        }

        else{
            parent[leaderA] = leaderB; 
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    vector<Edge> ans;
    dsu_set(n);

    ll sum = 0;
    
    while(e--){
        int a, b, w;
        cin >> a >> b >> w;

        v.pb(Edge(a, b, w));
    }

    sort(v.begin(), v.end(), cmp);

    for(Edge val: v){
        int a = val.a;
        int b = val.b;
        int w = val.w;

        int leaderA = findLeader(a);
        int leaderB = findLeader(b);

        if(leaderA != leaderB){
            ans.pb(val);
            dsu_union(a, b);
        }
    }

    for(Edge value: ans){
        sum += value.w;
    }

    if(ans.size() == n-1) cout << sum << endl;
    else cout << "IMPOSSIBLE" << endl;
    
    return 0;
}