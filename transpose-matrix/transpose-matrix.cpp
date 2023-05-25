class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int m= mat.size(), n=mat[0].size();
        if (m==n) {
                for(int i=0; i<m; i++)
                {
                for(int j=i+1; j<n; j++)
                    swap (mat[i][j], mat[j][i]);
                }
        }
        else
        {
            vector<vector<int>>ans;
             vector<int> v;
             for(int i=0; i<n; i++)
                {
                  for(int j=0; j<m; j++)  v.push_back(mat[j][i]) ;
                ans.push_back(v); v.clear();
                }
            return ans;
        }
        return mat;
    }
};