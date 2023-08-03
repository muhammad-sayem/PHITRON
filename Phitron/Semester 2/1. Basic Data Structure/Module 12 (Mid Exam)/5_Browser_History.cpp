#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string str;
        Node* next;
        Node* prev;

        Node(string s){
            str = s;
            next = NULL;
            prev = NULL;
        }
};

void insert_at_tail(Node* &head, Node* &tail, string str){
    Node* newNode = new Node(str);

    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->str << " ";
        temp = temp->next;
    }

    cout << endl;
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        string str;
        cin >> str;

        if(str == "end") break;
        else insert_at_tail(head, tail, str);
    }

    // print(head);

    int Q;
    cin >> Q;
        
    Node* temp = head;

    while(Q--){

        Node* tmp = temp;

        string s;
        string s2;
        cin >> s;   

        bool flag = false;

        if(s == "visit"){
            cin >> s2;

            temp = head;

            while(temp != NULL){
                if(temp->str == s2){
                    flag = true;
                    break;
                }
                else temp = temp->next;
            }

            if(flag) cout << temp->str << endl;
            else {
                temp = tmp;
                cout << "Not Available" << endl;
            }
        }

        else if(s == "prev"){

            if(temp->prev == NULL){
                cout << "Not Available" << endl;
            }

            else{
                temp = temp->prev;
                cout << temp->str << endl;
            } 
        }

        else if(s == "next"){

            if(temp->next == NULL){
                cout << "Not Available" << endl;
            }

            else{
                temp = temp->next;
                cout << temp->str << endl;
            } 
        }

    }
    
    return 0;
}