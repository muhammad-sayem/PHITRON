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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    // Connection //
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = b;

    // c->next = NULL;      // ekhane NULL dile detect korte parbe na //

    Node* slow = head;
    Node* fast = head;

    bool flag = false;

    while(fast != NULL && fast->next != NULL){      // O(N) //
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            flag = true;
            break;
        }
    }

    if(flag == true) cout << "Cycle Detected" << endl;
    else cout << "Cycle Not Found" << endl;
    
    return 0;
}