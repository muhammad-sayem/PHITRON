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
            temp= temp->next;
        }
        return cnt;
    }

    void swap_elements(ListNode* head, int k, int pos){
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        for(int i=1; i<=k-1; i++){
            temp1 = temp1->next;
        }

        for(int i=1; i<=pos; i++){
            temp2 = temp2->next;
        }

        swap(temp1->val, temp2->val);
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int size = getSize(head);
        int pos = size-k;

        swap_elements(head, k, pos);

        return head;
    }
};