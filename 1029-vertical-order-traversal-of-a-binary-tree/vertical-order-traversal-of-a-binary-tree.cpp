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
    
         map<int,map<int,multiset<int>>>nodes;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(q.size()){
            auto k = q.front();
            TreeNode* node = k.first;
            q.pop();
            int x = k.second.first, y  = k.second.second;
            nodes[x][y].insert(node->val);
            if(node->left){
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                q.push({node->right,{x+1,y+1}});
            }
        }
        for(auto i : nodes){
            vector<int>ans ;
            for(auto j:i.second){
                for(auto m : j.second)
                ans.push_back(m);
            }
            res.push_back(ans);
        }
        return res;
    
    }
    
};