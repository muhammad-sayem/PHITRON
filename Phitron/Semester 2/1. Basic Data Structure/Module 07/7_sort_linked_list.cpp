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
    Node* head = NULL;
    Node* tail =NULL;

    int val;
    
    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head, tail, val);
    }

    for(Node* i=head; i->next != NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }

    print_linked_list(head);
    
    return 0;
}