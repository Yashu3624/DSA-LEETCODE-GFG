class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0,maxlevel=0,maxsum=INT_MIN;
        while(!q.empty()){
            int x=q.size();
            level++;
            int levelSum=0;
            for(int i=0;i<x;i++){
                TreeNode* curr=q.front();
                q.pop();
                levelSum+=curr->val;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            if(maxsum<levelSum){maxlevel=level;maxsum=levelSum;}
        }
       
        return maxlevel;
    }
};