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

void insert_at_tail(Node* &head, int v){        // ekhane &head er bodole onno kisu dileo hoy. Ex: &h, &hd etc //
    Node* newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    // ei loop shesh hole 'temp' last node e obosthan kore //

    temp->next = newNode;
}

void print_linked_list(Node* &head){
    cout << endl << "Yout linked list: ";
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}

int main()
{
    int val;
    Node* head = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }

    print_linked_list(head);
    
    return 0;
}