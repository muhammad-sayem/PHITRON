#include<bits/stdc++.h>
#define    ll    long long
#define    nl    '\n'
#define    pb    push_back
using namespace std;

void divide(int node, int l, int r){
    cout << "Node: " << node << " " << "Left: " << l << " " << "Right: " << r << nl;

    if(l == r) return;              // Base Case //
    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;

    divide(leftNode, l, mid);
    divide(rightNode, mid+1, r);
}

int main()
{
    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    divide(1, 0, n-1);           // build(node, left, right) //
    
    
    return 0;
}