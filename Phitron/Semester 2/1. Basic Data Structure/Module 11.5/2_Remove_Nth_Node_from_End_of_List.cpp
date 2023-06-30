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
    int getSize(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;

        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }

        return cnt;
    }

    void remove_from_head(ListNode* &head){
        ListNode* deleteHead = head;
        head = head->next;
        delete deleteHead;
    }

    void delete_from_node(ListNode* head, int pos){
        ListNode* temp = head;

        for(int i=1; i<=pos-1; i++){
            temp = temp->next;
        }

        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        int size = getSize(head);

        if((size-n) == 0){
            remove_from_head(head);
        }
        else{

            int pos = size-n;

            delete_from_node(head, pos);
        }

        return head;
    }
};