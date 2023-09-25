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
    ListNode* reverse_linked(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* next = head->next ; 
            head->next = prev ; 
            prev = head;
            head = next ;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse_linked(l1);
        l2 = reverse_linked(l2);
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy ; 
        int carry = 0 ;
        while(l1 || l2 || carry!= 0){
            int v1 , v2 ; 
            if(l1)  v1 = l1->val ;
            else  v1 = 0 ;
            if(l2) v2 = l2->val;
            else v2 = 0 ;
            int sum = v1+v2+carry ; 
            int digi = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digi);
            curr->next = newNode;
            curr = curr->next; 
            if(l1) l1 = l1->next ; 
            else l1 = NULL;
            if(l2) l2 = l2->next ; 
            else l2 = NULL;

        }
        return reverse_linked(dummy->next);        
    }
};