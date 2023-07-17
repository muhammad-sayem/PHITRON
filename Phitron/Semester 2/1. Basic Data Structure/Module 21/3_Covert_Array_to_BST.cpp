#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void levelOrder(Node* root){

    if(root == NULL){
        cout << "No Tree Available" << endl;
        return;
    }

    queue<Node*> q;             // ekhane proti ta parent er under e child thake. int er under e na. tai queue Node* type er banate hoy //
    q.push(root);

    while(!q.empty()){
        // 1. Line theke ber kora //

        Node* f = q.front();        // Line theke ber kore age store kore pore pop korte hoy, store na korle hariye jay //
        q.pop();

        // 2. Jabotiyo ja ja kaj ase shegulo kora //

        cout << f->val << " ";

        // 3. Tar children gulo ke rakha //

        if(f->left) q.push(f->left);        // if(f->left != NULL) q.push(f->left);
        if(f->right) q.push(f->right);      // if(f->right != NULL) q.push(f->right);
    }
}

Node* convert(int a[], int n, int l, int r){

    if(l > r) return NULL;

    int mid = (l+r)/2;

    Node* root = new Node(a[mid]);

    Node* leftRoot = convert(a, n, l, mid-1);
    Node* rightRoot = convert(a, n, mid+1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

int main()
{
    int n, i; 
    cin >> n;
    int a[n];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);           // must sort korte hoy //

    Node* root = convert(a, n, 0, n-1);      // a[] holo array, n holo size, 0 holo l, n-1 holo r //
    levelOrder(root);
    
    return 0;
}


