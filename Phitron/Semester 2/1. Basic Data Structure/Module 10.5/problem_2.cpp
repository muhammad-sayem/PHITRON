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

void insert_at_tail(Node* &head, Node* &tail, int v){
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

void reverse_doubly_linked_list(Node* head, Node* tail){
    Node* i = head;
    Node* j = tail;

    while(i != j && i->next != j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

void print_normal(Node* head){          // O(N) //
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head, tail, val);
    }

    reverse_doubly_linked_list(head, tail);
    print_normal(head);
    
    return 0;
}