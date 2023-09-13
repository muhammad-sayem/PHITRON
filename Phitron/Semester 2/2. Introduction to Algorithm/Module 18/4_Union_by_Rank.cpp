#include<bits/stdc++.h>
using namespace std;

int parent[1000];
int parentLevel[1000];

void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        parentLevel[i] = 1;
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

        if(parentLevel[leaderA] > parentLevel[leaderB]){
            // A leader hoise // 
            parent[leaderB] = leaderA; 
        }

        else if(parentLevel[leaderB] > parentLevel[leaderA]){
            // B leader hoise // 
            parent[leaderA] = leaderB; 
        }
        else{
            // Jekono ekta ke Leader korlei hoy //
            parent[leaderB] = leaderA; 
            parentLevel[leaderA]++;     // leaderB ke leader banaile parentLevel[leaderB]++; dite hoito //
        }

    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    while(e--){
        int a, b;
        cin >> a >> b;

        dsu_union(a, b);
    }
    cout << findLeader(6) << endl;
    
    return 0;
}

/* 
   --> Leader ekjon hoilei hoise, union by size othoba union by rank er khetre 
   same input e dui jaygay dui rokom leader ashte pare, eita somossa nai.

   --> DSU er khetre union by size othoba union by rank diye korte hoy....
   karon ei duitar complexity onek valo. Noraml union er complexty er chaite //

*/


