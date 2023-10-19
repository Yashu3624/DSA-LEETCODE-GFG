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
    bool isPalindrome(ListNode* head) {
        vector<int>res ; 
        while(head!=NULL){
            res.push_back(head->val);
            head = head->next ;
        }
        vector<int>r = res ;
        reverse(res.begin(),res.end());
        for(int i = 0 ; i< res.size() ; i++){
            if(r[i]!=res[i]) return false;
        }
    return true;
    }
};