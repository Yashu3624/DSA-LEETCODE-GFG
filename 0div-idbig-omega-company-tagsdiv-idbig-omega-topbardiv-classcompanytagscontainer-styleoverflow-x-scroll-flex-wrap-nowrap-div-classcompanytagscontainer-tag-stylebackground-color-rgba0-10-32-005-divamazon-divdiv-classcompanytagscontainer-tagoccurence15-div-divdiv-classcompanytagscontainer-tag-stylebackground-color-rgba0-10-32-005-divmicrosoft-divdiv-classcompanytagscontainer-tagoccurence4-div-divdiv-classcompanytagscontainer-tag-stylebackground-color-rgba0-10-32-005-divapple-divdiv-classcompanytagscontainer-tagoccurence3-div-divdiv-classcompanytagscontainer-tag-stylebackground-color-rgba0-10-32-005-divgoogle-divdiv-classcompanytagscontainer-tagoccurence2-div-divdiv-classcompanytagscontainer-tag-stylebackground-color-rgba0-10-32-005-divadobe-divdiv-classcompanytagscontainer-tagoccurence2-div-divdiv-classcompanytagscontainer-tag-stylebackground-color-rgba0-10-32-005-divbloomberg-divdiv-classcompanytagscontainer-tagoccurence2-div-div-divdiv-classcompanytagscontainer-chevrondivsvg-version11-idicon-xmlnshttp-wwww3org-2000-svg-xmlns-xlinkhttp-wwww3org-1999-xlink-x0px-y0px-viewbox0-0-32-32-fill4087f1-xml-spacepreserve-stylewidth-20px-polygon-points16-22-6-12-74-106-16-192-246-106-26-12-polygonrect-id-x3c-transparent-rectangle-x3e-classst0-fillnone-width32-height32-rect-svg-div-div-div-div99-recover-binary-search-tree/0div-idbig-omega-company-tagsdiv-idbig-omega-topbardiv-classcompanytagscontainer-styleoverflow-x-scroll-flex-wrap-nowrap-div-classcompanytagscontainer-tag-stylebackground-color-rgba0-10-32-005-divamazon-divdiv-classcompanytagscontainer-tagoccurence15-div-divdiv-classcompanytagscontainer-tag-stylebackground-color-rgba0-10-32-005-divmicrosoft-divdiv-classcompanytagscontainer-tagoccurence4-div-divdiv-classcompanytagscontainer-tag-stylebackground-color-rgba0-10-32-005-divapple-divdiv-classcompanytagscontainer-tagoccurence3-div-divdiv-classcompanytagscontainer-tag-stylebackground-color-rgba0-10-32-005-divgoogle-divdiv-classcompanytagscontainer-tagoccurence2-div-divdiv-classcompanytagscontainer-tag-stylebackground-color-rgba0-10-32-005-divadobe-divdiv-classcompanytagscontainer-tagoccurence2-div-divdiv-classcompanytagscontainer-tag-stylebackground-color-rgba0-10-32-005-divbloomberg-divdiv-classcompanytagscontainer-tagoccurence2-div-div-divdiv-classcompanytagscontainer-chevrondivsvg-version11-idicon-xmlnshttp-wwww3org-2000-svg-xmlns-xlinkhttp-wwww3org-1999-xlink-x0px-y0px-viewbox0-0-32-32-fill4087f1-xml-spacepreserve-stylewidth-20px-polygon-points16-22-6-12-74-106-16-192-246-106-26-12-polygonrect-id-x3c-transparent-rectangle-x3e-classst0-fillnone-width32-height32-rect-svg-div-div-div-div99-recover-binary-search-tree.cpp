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
    void check(TreeNode* root , vector<int>&res , int& i){
        if(root==NULL) return  ;
        check(root->left,res,i);
        root->val = res[i] ;
        i++;
        check(root->right,res,i);
    }
    void inorder(TreeNode* root , vector<int>&res){
        if(root){
            inorder(root->left,res);
            res.push_back(root->val);
            inorder(root->right,res);
            
        }
    }
    void recoverTree(TreeNode* root) {
        vector<int>res ;
        inorder(root,res);
        sort(res.begin(),res.end());
        int i = 0 ;
        check(root,res,i);
    }
};