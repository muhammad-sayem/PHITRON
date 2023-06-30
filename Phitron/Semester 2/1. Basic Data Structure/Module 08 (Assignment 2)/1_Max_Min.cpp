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

void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int max_value(Node* head){
    Node* temp = head;
    int maxx = -1e9;

    while(temp != NULL){
        if(temp->val > maxx) maxx = temp->val;
        temp = temp->next;
    }

    return maxx;
}

int min_value(Node* head){
    Node* temp = head;
    int minn = 1e9;

    while(temp != NULL){
        if(temp->val < minn) minn = temp->val;
        temp = temp->next;
    }

    return minn;
}

void print_linked_list(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int val;

    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head, tail, val);
    }

    cout << max_value(head) << " ";
    cout << min_value(head) << endl;
    
    return 0;
}