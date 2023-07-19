/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void list(TreeNode* root,vector<int>& ans){
        if(root==NULL) return ;
        list(root->left,ans);
        ans.push_back(root->val);
        list(root->right,ans);
    }
  

    int findSecondMinimumValue(TreeNode* root) {
        vector<int>res ;
        list(root,res);
        sort(res.begin() , res.end());
        int min = res[0];
        if(min==res[res.size()-1]) return -1;
        for(int i = 0 ; i < res.size() ; i++){
            if(min<res[i]){
                min = res[i];
                break;
            }
        }
        return min;
        
    }
};