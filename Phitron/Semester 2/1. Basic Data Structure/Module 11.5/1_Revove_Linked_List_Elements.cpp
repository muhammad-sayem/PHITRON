/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // void print(ListNode *head)
    // {
    //     while(head !=NULL)
    //     {
    //         cout << head->val << ' ';
    //         head = head->next;
    //     }
    //     cout << endl;
    // }

ListNode* removeElements(ListNode* head, int val) {

    if(head==NULL)
    {
        return head;
    } 

    ListNode* temp = head;
 
    while(temp != NULL && temp->val == val){
        ListNode* del = temp;
        temp = temp->next;
        delete del;
    } 

    head = temp;

    //print(head);

    if(head == NULL) return head;

    while(temp->next != NULL){
        if(temp->next->val == val){
            ListNode * delete_node = temp->next;
            temp->next = temp->next->next;
            delete delete_node;
        }
        else temp = temp->next;
    }

    return head;
}

};