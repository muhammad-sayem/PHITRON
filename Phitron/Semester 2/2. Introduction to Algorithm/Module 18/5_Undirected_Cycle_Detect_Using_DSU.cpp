#include<bits/stdc++.h>
using namespace std;

int parent[1000];
int parentLevel[1000];

void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        parentLevel[i] = 0;
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
        int leaderA = findLeader(a);
        int leaderB = findLeader(b);
        if(leaderA == leaderB){
            cout << "Cycle detected between: " << a << " " << b << endl;
        }
        else{
            dsu_union(a, b);
        }
    }
    
    return 0;
}


