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
     ListNode* reverseLL(ListNode* head){
         ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
         return head;
     }
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int carry = 0 ;
        
        head = reverseLL(head);
        while(head!=NULL || carry){
            int sum = 0 ;
            if(head!=NULL){
                sum += head->val;
                sum += head->val;
                head = head->next;
            }
            sum += carry ;
            carry = sum/10;
            ListNode* newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp = temp->next;
            
        }
        ListNode* ans = reverseLL(dummy->next);
        return ans;
       

        
        
    }
};