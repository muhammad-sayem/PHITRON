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

bool compare(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 != NULL){
        if(temp1->val != temp2->val){
            return false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return true;
}

int main()
{
    int val;

    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head1, tail1, val);
    }

    int size1 = getSize(head1);

    while(true){
        cin >> val;
        if(val == -1) break;
        else insert_at_tail(head2, tail2, val);
    }

    int size2 = getSize(head2);

    if(size1 != size2) cout << "NO" << endl;
    else{
        bool flag = compare(head1, head2);

        if(flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}