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


int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    // Connection //

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;

    b->right = d;

    d->left = f;
    d->right = g;
    
    h->right = i;

    levelOrder(root);       // Left to Right: 10 20 30 40 90 50 60 100 70 80 //
    //levelOrder(root);    // Right to Left: 10 30 20 50 90 40 80 70 100 60 (Children push er line ta ulta kore dilei hoy) //

    return 0;
}