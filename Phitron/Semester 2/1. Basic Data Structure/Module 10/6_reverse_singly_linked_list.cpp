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

void reverse(Node* &head, Node* curr){

    if(curr->next == NULL){     // Last node checking. jodi last node e pouchay tahole last node kei head kore dite hobe //
        head = curr;
        return;
    }

    reverse(head, curr->next);

    curr->next->next = curr;
    curr->next = NULL;
}

void print_linked_list(Node* head){
    Node* temp  = head;

    while(temp!= NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    reverse(head, head);        // second parameter er head ta recieve korbe "Node* curr", jeta samne aganor jonno use kora hobe //
    print_linked_list(head);
    
    return 0;
}