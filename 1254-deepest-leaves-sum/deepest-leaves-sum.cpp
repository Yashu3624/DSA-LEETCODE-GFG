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
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL) return 0 ;
        queue<pair<TreeNode* , int>>q ; 
        map<int,int>mp ;
        q.push({root,0});
        while(!q.empty()){
            auto it =  q.front();
            TreeNode* node = it.first ;
            int level = it.second;
            q.pop();
            mp[level] = mp[level]+ node->val ;
            if(node->left) q.push({node->left,level+1});
            if(node->right) q.push({node->right,level+1});
            
        }
        return mp[mp.size()-1];
    }
};