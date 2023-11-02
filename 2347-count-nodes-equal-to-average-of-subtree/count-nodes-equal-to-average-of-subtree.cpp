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
    int ans = 0 ;
    int findSum(TreeNode* root , int& cnt){
        if(root==NULL) return 0 ;
        cnt++;
        int left = findSum(root->left,cnt);
        int right = findSum(root->right,cnt);
        return  (root->val+left+right);
    }
    void inorder(TreeNode* root){
       
        if(root==NULL) return ;
         int cnt = 0 ;
       int avg = (findSum(root,cnt))/cnt;
        if(avg==root->val) 
        {
            ans++;
        }
        inorder(root->left);
        inorder(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        ans = 0 ;
        inorder(root);
        return ans;
    }
};