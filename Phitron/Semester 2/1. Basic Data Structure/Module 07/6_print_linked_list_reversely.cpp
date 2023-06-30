#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

        Node(int v){
            val = v;
            next = NULL;
        }
};

void print_recursively(Node* n){

    if(n == NULL) return;        // Base Case //
    cout << n->val << " ";
    print_recursively(n->next);
}

void print_reverse(Node* n){

    if(n == NULL) return;        // Base Case //
    print_reverse(n->next);
    cout << n->val << " ";
}


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_recursively(head);
    cout << endl;
    print_reverse(head);
    
    return 0;
}