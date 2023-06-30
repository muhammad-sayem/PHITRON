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


void insert_at_head(Node* &head, int v){
    Node* newNode = new Node(v);

    newNode->next = head;
    head = newNode;

    cout << endl << "Inserted at Head" << endl << endl;
}


void delete_from_position(Node* head, int pos){
    Node* temp = head;

    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }

    Node* deleteNode = temp->next;      // jetake delete korte cha sheta ke age store kore rakhte hoy //
    temp->next = temp->next->next;
    delete deleteNode;

    cout << endl << "Position " << pos << "Deleted" << endl;

}

void delete_from_head(Node* &head){
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;

    cout << endl << "Head Deleted" << endl << endl;;
}


void print_linked_list(Node* &head){
    cout << endl << "Yout linked list: ";
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
        cout << "Option 4: Insert at Head" << endl;
        cout << "Option 5: Delete from Position" << endl;
        cout << "Option 6: Delete from Head" << endl;
        cout << "Option 7: Terminate" << endl << endl;

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

            if(pos == 0){
                insert_at_head(head, val);
            }
            else{
                insert_at_any_position(head, pos, val);
            }
        }

        else if(option == 4){
            int val;
            cout << "Enter Value: ";
            cin >> val;
            insert_at_head(head, val);
        }

        else if(option == 5){
            int pos;
            cout << "Enter position: ";
            cin >> pos;

            if(pos == 0){
                delete_from_head(head);
            }
            else{
                delete_from_position(head, pos);
            }
        }

        else if(option == 6){
            delete_from_head(head);
        }

        else if(option == 7){
            cout << endl << "The Program has been terminated" << endl;
            break;
        }
    }
    
    return 0;
}