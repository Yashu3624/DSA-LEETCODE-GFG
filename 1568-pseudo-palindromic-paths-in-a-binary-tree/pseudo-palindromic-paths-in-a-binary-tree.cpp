/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int f(TreeNode* root , map<int,int>&mp){

        if(root==NULL) return 0  ;
        if(root->left==NULL && root->right==NULL){
            mp[root->val]++;
            int odd = 0 ;
            for(auto it : mp){
                if(it.second%2==1) odd++;
            }
            if(odd==0 || odd==1) return 1 ;
            return 0 ;
        }
      mp[root->val]++;
        int left = f(root->left,mp);
        if(root->left!=NULL) mp[root->left->val]++;
        int right = f(root->right,mp);
        if(root->right!=NULL) mp[root->right->val]++;
        return left+right;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root->left == NULL && root->right==NULL) return 1 ;
        map<int,int>mp ;
        return f(root,mp);
    }
};