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

void insert_at_head(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

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

void insert_at_position(Node* &head, int pos, int v){
    Node* newNode = new Node(v);
    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;

}

int getSize(Node* head){
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    return cnt;
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
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while(q--){
        int index, val;

        cin >> index;
        cin >> val;

        if(index > getSize(head)){
            cout << "Invalid" << endl;
        }

        else if(index == 0){
            insert_at_head(head, tail, val);
            print_normal(head);
            print_reverse(tail);
        }

        else if(index == getSize(head)){
            insert_at_tail(head, tail, val);
            print_normal(head);
            print_reverse(tail);
        }

        else{
            insert_at_position(head, index, val);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}
