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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int>v ; 
        ListNode *p1 = head , *p2;
        int cnt = 1;
        while(cnt!=left){
            head = head->next ; 
            cnt++;
        }
        p2 = head ; 
        while(cnt!=right+1){
            v.push(head->val);
            head = head ->next ;
            cnt++;
        }

        while(!v.empty()){
            p2->val = v.top();
            v.pop();
            p2=p2->next ;
        }
        return p1 ;
    }
};