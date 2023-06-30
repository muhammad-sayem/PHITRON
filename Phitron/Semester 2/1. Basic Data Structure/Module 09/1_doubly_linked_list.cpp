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

void print_normal(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_reverse(Node* tail){
    Node* temp = tail;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;

    // Connection //
    
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    print_normal(head);     // 10 20 30 //
    print_reverse(tail);    // 30 20 10 //
    
    return 0;
}