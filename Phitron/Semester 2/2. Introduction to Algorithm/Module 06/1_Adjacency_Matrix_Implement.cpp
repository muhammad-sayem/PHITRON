// Without wight //

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int adjmat[N][N];

int main()
{
    int n, m, i, j;            // number of nodes (n) and number of edges (m) //
    cin >> n >> m;

    while(m--){         // m porjonto cholbe //
        int u, v;
        cin >> u >> v;

        adjmat[u][v] = 1;
        // adjmat[v][u] = 1;        // undirect hole ei line dite hoy //
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// ----------------------------------------------------------------------- //

// With wight // 

/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int adjmat[N][N];

int main()
{
    int n, m, i, j;            // number of nodes (n), number of edges (m), wights (w) //
    cin >> n >> m;

    while(m--){         // m porjonto cholbe //
        int u, v, w;
        cin >> u >> v >> w;

        adjmat[u][v] = w;
        adjmat[v][u] = w;        // undirect hole ei line dite hoy //
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
*/