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

    //cout << tail->val << endl;
}

void insert_at_head(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    Node* temp = head;
    newNode->next = head;
    head = newNode;

    //cout << head->val << " ";
}

int main()
{
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while(Q--){
        int x, val;
        cin >> x;
        cin >> val;
 
        if(x == 0) {
            insert_at_head(head, tail, val);
        }
        else {
            insert_at_tail(head, tail, val);
        }
        cout << head->val << " " << tail->val << endl;
    }
    
    return 0;
}