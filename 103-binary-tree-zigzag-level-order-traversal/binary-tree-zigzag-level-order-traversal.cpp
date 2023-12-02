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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res ; 
        queue<TreeNode*>q ; 
        if(root==NULL) return res ;
        q.push(root);
        bool leftRight = true;
        while(!q.empty()){
            int size = q.size() ; 
            vector<int>ans(size) ;
            
            for(int i = 0 ; i < size ; i++){
            TreeNode* node = q.front();
            q.pop();

            int idx = leftRight?i:(size-1-i);
            ans[idx] = node->val;
            if(node->left!=NULL)
            q.push(node->left);
            if(node->right!=NULL)
            q.push(node->right);

            }
            leftRight = !leftRight;
            res.push_back(ans);

        }
        return res;
    }
};