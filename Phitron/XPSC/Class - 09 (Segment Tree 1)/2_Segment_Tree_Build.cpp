#include<bits/stdc++.h>
#define    ll    long long
#define    nl    '\n'
#define    pb    push_back
using namespace std;

const int mx = 1e5+5;
int tree[mx*3];

void build(int a[], int node, int l, int r){
    // cout << "Node: " << node << " " << "Left: " << l << " " << "Right: " << r << nl;

    if(l == r) {
        tree[node] = a[l];
        return;  
    }          
    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;

    build(a, leftNode, l, mid);
    build(a, rightNode, mid+1, r);

    // Value Set //

    tree[node] = tree[leftNode] + tree[rightNode];
}

int main()
{
    int n, i;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    build(a, 1, 0, n-1);           // build(array, node, left, right) //
    
    // for(i=1; i<=13; i++){
    //     cout << tree[i] << " ";
    // }
    
    return 0;
}