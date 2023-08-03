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


void answer(Node* &head){

    Node* temp = head;
    Node* temp2 = head;

    while(temp->next != NULL){
        if(temp->val == temp->next->val){
            Node* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }

        else{
            temp = temp->next;
        }
    }
}

void print_linked_list(Node* &head){
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

    for(Node* i=head; i->next != NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }

    answer(head);

    print_linked_list(head);
    
    return 0;
}


// ------------------------------------------------------------------------- //
/*
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

void print_linked_list(Node* &head){
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

    for(Node* i=head; i->next != NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }


    Node* temp = head;

    while(temp->next != NULL){
        if(temp->val == temp->next->val){
            Node* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }

        else{
            temp = temp->next;
        }
    }

    print_linked_list(head);
    
    return 0;
}
*/