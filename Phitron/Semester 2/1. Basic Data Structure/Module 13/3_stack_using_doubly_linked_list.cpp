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


class myStack
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){           
        Node* newNode = new Node(val);
        
        sz++;
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop(){
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL) head == NULL;
        else tail->next == NULL;
        delete deleteNode;
    }

    int top(){
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
    myStack st;

    int n, i;
    cin >> n;

    for(i=1; i<=n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << " ";        // 50 40 30 20 10 //
        st.pop();
    }
    
    return 0;
}
