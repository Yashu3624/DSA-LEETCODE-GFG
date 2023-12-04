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
    void inorder(TreeNode* root , vector<int>&res){
        if(root){
            inorder(root->left,res);
            res.push_back(root->val);
            inorder(root->right,res);
        }
    }
    bool isValidBST(TreeNode* root) {
        vector<int>res ; 
        inorder(root,res);
        vector<int>ans = res ;
        set<int>s(res.begin(),res.end());
        if(s.size()!=res.size()) return false;
        sort(res.begin(),res.end());
        for(int i  = 0 ; i < res.size() ; i++){
            if(res[i]!=ans[i]) return false ;
        }
        return true ;
    }
};