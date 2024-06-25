#include<bits/stdc++.h>
using namespace std;

const int INF = 1e7;

int main()
{
    int n, e, i, j, k;
    cin >> n >> e;

    int dist[n+5][n+5];

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            dist[i][j] = INF;
            
            if(i==j){
                dist[i][j] = 0;
            }
        }
    }

    while(e--){
        int a, b, w;
        cin >> a >> b >> w;
        dist[a][b] = w;
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(dist[i][j] == INF){
                cout << 'X' << " ";
            }
            else{
                cout << dist[i][j] << " "; 
            }
        }
        cout << endl;
    }

    for(k=1; k<=n; k++){
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(dist[i][k]+dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k]+dist[k][j];
                }
            }
        }
    }

    cout << endl << "After Applying Floyd Warshall: " << endl;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(dist[i][j] == INF){
                cout << 'X' << " ";
            }
            else{
                cout << dist[i][j] << " "; 
            }
        }
        cout << endl;
    }
    
    return 0;
}