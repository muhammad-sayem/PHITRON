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
        // a[0] = newNode->val;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    // ei loop shesh hole 'temp' last node e obosthan kore //

    temp->next = newNode;
}

void duplicate(Node* head){
    Node* temp = head;
    int a[101] = {0};
    int flag = 0;

    while(temp != NULL){
        a[temp->val]++;
        temp = temp->next;
    }

    for(int i=0; i<101; i++){
        if(a[i] > 1){
            flag = 1;
            break;
        }
    }

    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int val;

    Node* head = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head, val);
    }

    duplicate(head);

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

void insert_at_tail(Node* &head, int v){        // ekhane &head er bodole onno kisu dileo hoy. Ex: &h, &hd etc //
    Node* newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        // a[0] = newNode->val;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    // ei loop shesh hole 'temp' last node e obosthan kore //

    temp->next = newNode;
}

bool duplicate(Node* head){
    Node* temp = head;
    int a[101] = {0};

    while(temp != NULL){
        a[temp->val]++;
        temp = temp->next;
    }

    for(int i=0; i<101; i++){
        if(a[i] > 1){
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int val;

    Node* head = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head, val);
    }

    if(duplicate(head) == true) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
*/