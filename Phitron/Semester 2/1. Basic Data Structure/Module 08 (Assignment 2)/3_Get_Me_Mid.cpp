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

int getSize(Node* head){
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void middle_element(Node* head, int size){
    Node* temp = head;

    if(size%2 != 0){
        for(int i=1; i<=size/2; i++){
            temp = temp->next;
        }
        cout << temp->val << endl;
    }

    else{
        for(int i=1; i<=(size/2)-1; i++){
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
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

    for(Node* i=head; i->next != NULL; i=i->next){
        for(Node* j=i->next; j != NULL; j=j->next){
            if(i->val < j->val) swap(i->val, j->val);
        }
    }
    int size = getSize(head);

    middle_element(head, size);

    return 0;
}