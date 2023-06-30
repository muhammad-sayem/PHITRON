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

void insert(Node* head, int pos, int v){        // O(n) //
    Node* newNode = new Node(v);
    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    // cout << temp->val << endl;       // temp er obosthan check korar jonno //
    
    newNode->next = temp->next;
    temp->next = newNode;

}


void insert_at_head(Node* &head, int v){        // O(1) karon kono loop chole na //
    Node* newNode = new Node(v);

    Node* temp = head;

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int v){       // O(1) karon kono loop chole na //
    Node *newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;

}

int getSize(Node* head){        //  O(n) //
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    return cnt;

}

void print_linked_list(Node* head){     // O(n) //
    Node* temp = head;

    while(temp != NULL){
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
    Node* c = new Node(40);
    Node* d = new Node(50);

    Node* tail = d;
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    int pos, val;
    cin >> pos >> val;


    if(pos > getSize(head)){
        cout << "Invalid Index" << endl;
    }

    else if(pos == 0){
        insert_at_head(head, val);
    }

    else if(pos == getSize(head)){
        insert_at_tail(head, tail, val);
    }

    else{
        insert(head, pos, val);
    }

    print_linked_list(head);       

    return 0;
}