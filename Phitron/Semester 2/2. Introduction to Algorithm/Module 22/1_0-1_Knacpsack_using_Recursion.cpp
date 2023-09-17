#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int s, int v[], int w[]){
    // Base Case //
    if(n == 0 || s == 0){
        return 0;
    }

    if(w[n-1] <= s){
        int op1 = knapsack(n-1, s-w[n-1], v, w) + v[n-1];        // nibo, ar nile oi value ta plus korte hoy //
        int op2 = knapsack(n-1, s, v, w);        // nibo na // 
        return max(op1, op2);
    }

    else{
        return knapsack(n-1, s, v, w);
    }
}

int main()
{
    int n, i;
    cin >> n;
    int v[n+5];     // array for values //
    int w[n+5];     // array for wights //

    for(i=0; i<n; i++){
        cin >> v[i];
    }

    for(i=0; i<n; i++){
        cin >> w[i];
    }

    int s;          // s holo koto tuku weight er capacity asy ase //
    cin >> s;

    cout << "Maximum Value: " << knapsack(n, s, v, w) << endl;
    
    return 0;
}