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
        Node* head1 = NULL;
        Node* tail1 = NULL;
        int sz = 0;

        void push(int val){
            sz++;
            Node* newNode = new Node(val);

            if(head1 == NULL){
                head1 = newNode;
                tail1 = newNode;
                return;
            }

            newNode->prev = tail1;
            tail1->next = newNode;
            tail1 = newNode;
        }

        void pop(){
            sz--;
            Node* deleteNode = tail1;
            tail1 = tail1->prev; 
            delete deleteNode;
            if(tail1 == NULL) head1 = NULL;
            else tail1->next = NULL;
        }

        int top(){
            return tail1->val;
        }

        int size(){
            return sz;
        }

        bool empty(){
            if(sz == 0) return true;
            else return false;
        }
};

class myQueue
{
    public:
        Node* head2 = NULL;
        Node* tail2 = NULL;
        int szz = 0;

        void push(int val){
            szz++;
            Node* newNode = new Node(val);

            if(head2 == NULL){
                head2 = newNode;
                tail2 = newNode;
                return;
            }

             tail2->next = newNode;
             newNode->prev = tail2;
             tail2 = newNode;
        }

        void pop(){
            szz--;
            Node* delNode = head2;
            head2 = head2->next;
            delete delNode;

            if(head2 == NULL) {
                tail2 = NULL;
                return;
            }
            head2->prev = NULL;
        }

        int front(){
            return head2->val;
        }

        int size(){
            return szz;
        }

        bool empty(){
            if(szz == 0) return true;
            else return false;
        }
};


int main()
{
    myStack st;
    myQueue q;

    int n, m, i;
    cin >> n >> m;

    for(i=1; i<=n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    for(i=1; i<=m; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    if(n != m) cout << "NO" << endl;

    else{
        bool flag = true;

        while(!st.empty()){
            if(st.top() != q.front()){
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}