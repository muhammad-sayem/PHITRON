#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int v){
            val = v;
            next = NULL;
            prev = NULL;
        }
};

void insert_at_tail(Node* &head, Node* &tail, int v){       // O(1) //
    Node* newNode = new Node(v);

    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void print_normal(Node* head){          // O(N) //
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_reverse(Node* tail){         // O(N) //
    Node* temp = tail;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
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

    print_normal(head);
    print_reverse(tail);
    
    return 0;
}