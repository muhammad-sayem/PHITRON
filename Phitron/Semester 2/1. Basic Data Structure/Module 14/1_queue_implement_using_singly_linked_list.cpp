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

class myQueue
{
public: 
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){
        sz++;

        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        sz--;

        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;

        if(head == NULL){
            tail = NULL;
        }
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        if(sz == 0) return true;
        else return false;
    }

};


int main()
{
    myQueue q;

    int n, i;
    cin >> n;

    for(i=1; i<=n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;


    /*
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl;      // 10 //
    q.pop();                        // 10 ber hoye jabe. karon queue te line er first e je thake she age service paay //
    cout << q.front() << endl;      // 20. Karon 10 age serviece peye age ber hoye gese //
    */

    return 0;
}