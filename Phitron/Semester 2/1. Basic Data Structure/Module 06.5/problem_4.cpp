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

void insert_at_tail(Node* &head, int v){
    Node* newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

bool insert_at_position(Node* head, int index, int v){
    Node* newNode = new Node(v);

    Node* temp = head;

    for(int i=1; i<=index-1; i++){
        temp = temp->next;

        if(temp == NULL){
            // cout << "Invalid" << endl;
            return false;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return true;
}

void insert_at_head(Node* &head, int v){
    Node* newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getSize(Node* head){
    int i, cnt = 0;

    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
}


int main()
{
    int val;

    Node* head = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else {
            insert_at_tail(head, val);
        }
    }
    int q;
    cin >> q;

    while(q--){
        int index; 
        int val;
        cin >> index;
        cin >> val;

        if(index == 0){
            insert_at_head(head, val);
            print_linked_list(head);
        }
        else{
            bool flag = insert_at_position(head, index, val);
            
            if(flag == false) cout << "Invalid" << endl;
            else print_linked_list(head);  
        }

    }
    
    return 0;
}