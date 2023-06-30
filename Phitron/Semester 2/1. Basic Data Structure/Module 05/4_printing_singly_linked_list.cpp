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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = head;          // jodi head diye loop chalano hoy tahole head move kore NULL e chole jay. Tai head ke tar jayga te rakhar jonno arekta temp niye sheta ke move korano hoy //

    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }

    // Jodi abar print ba onno kaj korte chai tahole abar temp ke head theke shuru kore nite hoy //
    /*
    temp = head;

    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
    */

    // Manually Print kora //
    /*
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;
    cout << head->next->next->next->next->val << endl;
    */

    
    return 0;
}