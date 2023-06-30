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

void delete_from_position(Node* head, int pos){
    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_head(Node* &head){      // O(1) //
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;
}

int getSize(Node* head){        // getSize function er complexity O(n) //
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

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    
    print_linked_list(head);

    int pos;
    cin >> pos;

    if(pos >= getSize(head)){
        cout << "Invalid" << endl;
    }

    else if(pos == 0){
        delete_head(head);
    }

    else{
        delete_from_position(head, pos);
    }

    print_linked_list(head);

    return 0;
}