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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *fast = head , *slow = head , *prev = head;
        if(head->next==NULL) return NULL;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            fast = fast->next->next ; 
            slow = slow->next ;
        }
        prev->next = slow->next;
        return head;
     
    }
};