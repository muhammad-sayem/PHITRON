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

void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printRecursively(Node* h){
    if(h == NULL) return;
    cout << h->val << " ";
    printRecursively(h->next);
}

void printReversely(Node* h){
    if(h == NULL) return;
    printReversely(h->next);
    cout << h->val << " ";
}

int main()
{
    int val;

    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head, tail, val);
    }

    printReversely(head);
    cout << endl;
    printRecursively(head);

    return 0;
}