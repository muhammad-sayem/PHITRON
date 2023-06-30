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
    cout << size << endl;

    return 0;
}

// ------------------------------------------------------------------------ //

// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//         int val;
//         Node* next;

//         Node(int v){
//             val = v;
//             next = NULL;
//         }
// };


// int main()
// {
//     int val, cnt = 0;

//     Node* head = NULL;

//     while(true){
//         cin >> val;
//         if(val == -1) break;
//         else cnt++;
//     }

//     cout << cnt << endl;
    
//     return 0;
// }


