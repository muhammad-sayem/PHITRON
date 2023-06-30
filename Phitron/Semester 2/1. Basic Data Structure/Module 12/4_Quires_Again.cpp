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

int getSize(Node* head){        

    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void insert_at_position(Node* head, int pos, int v){        
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

void print_normal(Node* head){          
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

    int Q;
    cin >> Q;

    while(Q--){


        int pos, val;
        cin >> pos >> val;

        if(pos > getSize(head)) cout << "Invalid" << endl;

        else if(pos == 0){
            insert_at_head(head, tail, val);
            cout << "L -> ";
            print_normal(head);

            cout << "R -> ";
            print_reverse(tail);
        }
        else if(pos == getSize(head)){
            insert_at_tail(head, tail, val);

            cout << "L -> ";
            print_normal(head);

            cout << "R -> ";
            print_reverse(tail);
        }

        else{
            insert_at_position(head, pos, val);

            cout <<"L -> ";
            print_normal(head);

            cout <<"R -> ";
            print_reverse(tail);
            
        }

    
    }
    
    return 0;
}

