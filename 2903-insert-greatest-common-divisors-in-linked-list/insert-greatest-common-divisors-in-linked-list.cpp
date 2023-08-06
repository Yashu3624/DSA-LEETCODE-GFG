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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur = head ; 
        while(cur->next){
            ListNode* newNode = new ListNode(gcd(cur->val,cur->next->val));
            
            newNode->next = cur->next;
            cur->next= newNode;
            cur = newNode->next;
        }
        return head;
    }
};