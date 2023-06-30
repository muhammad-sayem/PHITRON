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

int getSize(Node* head){        // O(N) //
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void insert_at_position(Node* head, int pos, int v){        // O(N) //
    Node* newNode = new Node(v);

    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
}

void insert_at_head(Node* &head, Node* &tail, int v){       // O(1) //
    Node* newNode = new Node(v);

    // Jodi head NULL thake (maane prothom bar) tahole newNode e head hoye jabe //

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    // Connection //
    
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos, val;
    cin >> pos;
    cin >> val;

    // Position jodi size theke beshi hoy tahole doubly linked list e add kora jay na, size er shoman hole insert_at_tail() call korte hoy //
    
    if(pos > getSize(head)){
        cout << "Invalid" << endl;
    }

    else if(pos == 0){
        insert_at_head(head, tail, val);
    }

    else if(pos == getSize(head)){
        insert_at_tail(head, tail, val);
    }

    else{
        insert_at_position(head, pos, val);
    }

    print_normal(head);     
    print_reverse(tail);     
    
    return 0;
}