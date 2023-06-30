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
        cout << endl << "Inserted at Head" << endl;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    // ei loop shesh hole 'temp' last node e obosthan kore //

    temp->next = newNode;

    cout << endl << "Inserted at Tail" << endl;
}


void insert_at_any_position(Node* head, int pos, int v){
    Node* newNode = new Node(v);

    Node* temp = head;
    for(int i=1; i<=pos-1; i++){     // joto tomo pos e insert korte chai tar ager index porjonto loop ta cholbe //
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    cout << endl << "Inserted at position " << pos << endl << endl;
}


void print_linked_list(Node* head){
    cout << "Yout linked list: ";
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}


int main()
{
    Node* head = NULL; 

    while(true){
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Positin" << endl;
        cout << "Option 4: Terminate" << endl << endl;

        int option;
        cout << "Choose an option: ";
        cin >> option;

        if(option == 1){
            cout << "Please enter a value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
            cout << endl;
        }

        else if(option == 2){
            print_linked_list(head);
        } 

        else if(option == 3){
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;

            insert_at_any_position(head, pos, val);
        }


        else if(option == 4){
            cout << "The Program has been terminated" << endl;
            break;
        }

    }
    
    return 0;
}