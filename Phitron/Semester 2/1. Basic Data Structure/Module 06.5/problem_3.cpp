// Question: Take a singly linked list as input and print the middle element.
// If there are multiple values in the middle print both.

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

int getSize(Node* head){
    Node *temp = head;
    int cnt = 0;

    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void middle_Element(Node* head, int size){
    Node* temp = head;
    
    if(size%2 != 0){
        for(int i=1; i<=size/2; i++){
            temp = temp->next;
        }
        cout << temp->val;
    }

    else{
        for(int i=1; i<=(size/2)-1; i++){
            temp = temp->next;
        }
        cout << temp->val << " ";
        cout << temp->next->val;
    }
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

    int size = getSize(head);

    middle_Element(head, size);

    return 0;
}




