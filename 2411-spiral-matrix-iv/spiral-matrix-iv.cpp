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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>res(m,vector<int>(n,-1));
        ListNode* temp = head ;
        int left = 0 , right = n-1 , top = 0 , bottom = m-1 ;
        while(top<=bottom  && left <= right && head!=NULL){
            for(int i = left ; i <= right ;i++){
                if(head!=NULL){
                res[top][i] = head->val;
                head = head->next ;
            }
            }
            top++;
            for(int i = top ; i <= bottom ; i++){
                if(head!=NULL){
                res[i][right] = head->val;
                head = head->next ;
            }
            }
            right--;
            if(top<=bottom){
            for(int i = right ; i>= left ; i--){
                if(head!=NULL){
                res[bottom][i] = head->val;
                head = head->next ;
            }
            }
            bottom--;
            }
            if(left<=right){
            for(int i = bottom ; i>= top ;i--){
                if(head!=NULL){
                res[i][left] = head->val;
                head = head->next ;
            }
            }
            left++;
            }
        }
        return res;
    }
};