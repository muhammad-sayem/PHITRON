/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
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

    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;

        int size = getSize(head);

        for(int i=1; i<=size/2; i++){
            temp = temp->next;
        }

        return temp;
    }
};

*/


// ------------------------------------------------------------------------- //

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
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

    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;

        for(int i=1; i<=getSize(head)/2; i++){
            temp = temp->next;
        }

        return temp;
    }
};

*/

// ---------------------------------------------------------------------- //

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// Using Fast and Slow pointer Ak=lgorithm //

class Solution {
public:

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};