#include<bits/stdc++.h>
using namespace std;
 
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
    int n, e, i;
    cin >> n >> e;
    dsu_set(n);
 
    while(e--){
        int a, b;
        cin >> a >> b;
 
        dsu_union(a, b);
    }
 
    set<int> s;

    // for(i=1; i<=n; i++){
    //     int leader = findLeader(i);
    //     cout << "Leader of " << i << ": " << leader << endl;
    // }
 
    for(i=1; i<=n; i++){
        int leader = findLeader(i);
        s.insert(leader);
    }
 
    vector<int> v;
 
    for(auto it = s.begin(); it != s.end(); it++){
        v.push_back(*it);
    }
    
    cout << v.size()-1 << endl;
 
    for(i=0; i<v.size()-1; i++){
        cout << v[i] << " " << v[i+1] << endl;
    }
 
    return 0;
}