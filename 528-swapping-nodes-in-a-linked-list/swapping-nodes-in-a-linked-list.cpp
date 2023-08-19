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
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt = 0 ;
        ListNode* temp = head ; 
        ListNode *v1 , * v2 ; 
        while(temp!=NULL){
            cnt++;
            if(cnt==k){
                v1 = temp;
            }
            temp = temp->next;
        }
        cnt = cnt- k ; 
        temp = head ; 
        while(temp && cnt){
            temp = temp->next;
            cnt--;
        }
        v2 = temp ; 
        int t = v1->val ; 
        v1->val = v2->val ; 
        v2->val = t;
        return head;
    }
};