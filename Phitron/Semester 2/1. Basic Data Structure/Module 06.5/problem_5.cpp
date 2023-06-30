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

void sort_checking(Node* head){
    Node* temp = head;
    int flag = 0;

    while(true){
        if(temp->val > temp->next->val){
            flag = 1;
            break;
        }
        temp = temp->next;

        if(temp->next == NULL) break;
    }

    if(flag == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}


int main()
{
    int val;

    Node* head = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else{
            insert_at_tail(head, val);
        }
    }

    sort_checking(head);

    
    return 0;
}


// ---------------------------------------------------------------------------- //

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

bool sort_checking(Node* head){
    Node* temp = head;

    while(true){
        if(temp->val > temp->next->val){
            return false;
            break;
        }
        temp = temp->next;

        if(temp->next == NULL) break;
    }

    return true;

}


int main()
{
    int val;

    Node* head = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else{
            insert_at_tail(head, val);
        }
    }

    bool flag = sort_checking(head);

    if(flag == true) cout << "YES" << endl;
    else cout << "NO" << endl;

    
    return 0;
}
*/