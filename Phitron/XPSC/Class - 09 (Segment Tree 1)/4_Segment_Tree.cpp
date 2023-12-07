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

int query(int node, int l, int r, int x, int y){
    // Case 1: Puro baad dibo //

    if(r<x || l>y){
        return 0;
    }

    // Case 2: Puro ta nibo //

    if(l>=x && r<=y){
        return tree[node];
    }

    // Case 3: kichu nibo ar kichu baad dibo // 

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;

    return query(leftNode, l, mid, x, y) + query(rightNode, mid+1, r, x, y);
}

void update(int node, int l, int r, int index, int val){
    if(index<l || index>r) {
        return;                     // ei side baad //
    }  

    if(l == r && l == index){
        tree[node] = val;
        return;
    }

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;

    update(leftNode, l, mid, index, val);
    update(rightNode, mid+1, r, index, val);
    
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
    
    int q;
    cin >> q;

    while(q--){
        int t;
        cin >> t;

        if(t == 0){
            int index, val;
            cin >> index >> val;
            index--;
            update(1, 0, n-1, index, val);
            
            for(i=1; i<=7; i++){
                cout << tree[i] << " ";
            }
        }
        else{
            int x, y;
            cin >> x >> y;
            x--;
            y--;

            cout << query(1, 0, n-1, x, y) << nl;
        }
    }

    return 0;
}