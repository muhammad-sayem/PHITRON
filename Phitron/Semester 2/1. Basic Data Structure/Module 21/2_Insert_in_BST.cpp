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

Node* inputTree(){
    int val;
    cin >> val;
    Node* root;

    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;

    if(root != NULL) q.push(root);     

    while(!q.empty()){
        // 1. Ber kore ana //

        Node* p = q.front();        // p diye parent bujhacche. // 
        q.pop();

        // 2. Jabotiyo ja ja kaj ase kora //

        int l, r;
        cin >> l >> r;

        Node* myLeft;
        Node* myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. Children gulo ke ber kore ana //

        if(p->left != NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
    }

    return root;
}

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

void insert(Node* &root, int x){
    if(root == NULL){           // Base Case //
        root = new Node(x);
        return;
    }

    if(x < root->val){
        if(root->left == NULL){
            root->left = new Node(x);
        }
        else{
            insert(root->left, x);
        }
    }

    else if(x > root->val){
        if(root->right == NULL){
            root->right = new Node(x);
        }
        else{
            insert(root->right, x);
        }
    }

}

int main()
{
    Node* root = inputTree();
    // int x;
    // cin >> x;

    // insert(root, x);
    // levelOrder(root);

    insert(root, 13);
    insert(root, 32);
    insert(root, 22);
    insert(root, 27);

    levelOrder(root);
    
    return 0;
}