#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e, i, j;
    cin >> n >> e;

    int adj[n+1][n+1];

    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            adj[i][j] = 0;
            if(i == j && i != 0){
                adj[i][j] = 1;
            }
        }
    }

    while(e--){
        int a, b;
        cin >> a >> b;

        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}