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
    int pairSum(ListNode* head) {
        vector<int>v ; 
        while(head!=NULL){
            v.push_back(head->val);
            head = head->next ;
        }
        vector<int>res;
        for(int i = 0 ; i < v.size()/2 ; i++){
            res.push_back(v[i]+v[v.size()-1-i]);
        }
     return *max_element(res.begin() , res.end());
        
    }
};