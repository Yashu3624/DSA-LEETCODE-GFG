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
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long long ans = 0 ; 
        if(root==NULL) return ans ;
        queue<pair<TreeNode*,unsigned long long>>q ;
        q.push({root,0});
        while(!q.empty()){
            unsigned long long n =  q.size() ;
            unsigned long long level = q.front().second; 
            unsigned long long first , last ;
            for(int i = 0 ; i < n ; i++){
                
                TreeNode* temp = q.front().first; 
                unsigned long long idx = q.front().second-level ;
                if(i==0) first = idx ;
                if(i==n-1)last = idx ;
                ans = max(ans , last-first+1); 
                q.pop();
                if(temp->left) q.push({temp->left,2*idx+1});
                if(temp->right) q.push({temp->right,2*idx+2});

            }

        }
        return ans;
    }
};