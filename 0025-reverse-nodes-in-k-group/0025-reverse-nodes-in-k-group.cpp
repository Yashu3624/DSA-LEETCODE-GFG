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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int>st ; 
        ListNode* temp = head ; 
        ListNode* temp1  = head ;
        int n = 0 ;
        while(temp){
            n++ ;
            temp = temp->next ;
        }
        temp = head ;
        int i = 0 ; 
        while(i<n){
            if(n-i>=k){
                for(int i = 0 ; i < k ; i++){
                    st.push(temp->val) ; 
                    temp = temp->next ;
                }
                for(int i  = 0 ; i < k ; i++){
                    temp1->val = st.top() ;
                    st.pop();
                    temp1 = temp1->next ;
                }
                i += k ; 
            }
            else{
                return head ;
            }
        }
        return head ; 
        
    }
};