#include<bits/stdc++.h>
using namespace std;

int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};       // Leader ke source dhora hoy //

int findLeader(int n){

    while(parent[n] != -1){
        n = parent[n];
    }
    return n;
}

int main()
{
    cout << findLeader(5) << endl;
    cout << findLeader(6) << endl;
    cout << findLeader(1) << endl;
    cout << findLeader(3) << endl;
    
    return 0;
}


// -> Jokhon group ba component thakbe ebong leader thakbe tokhon e DSU use korte hoy //
