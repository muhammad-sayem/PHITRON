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

void insert(Node* head, int pos, int v){        // Insert function er complexity O(n) //
    Node* newNode = new Node(v);
    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    // cout << temp->val << endl;       // temp er obosthan check korar jonno //
    
    newNode->next = temp->next;
    temp->next = newNode;

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

    int size = getSize(head);

    int pos, val;
    cin >> pos >> val;

    if(pos > size){
        cout << "Invalid Index" << endl;
    }
    else{
        insert(head, pos, val);
    }

    print_linked_list(head);       

    return 0;
}
