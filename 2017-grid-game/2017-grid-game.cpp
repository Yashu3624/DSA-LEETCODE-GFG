class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        long long pref1=0, pref2=0 , mini=1e18,tot=0;
        for(int i=0 ; i<n ; i++){
            tot+=grid[0][i];
        }
        for(int i=0 ; i<n ; i++){
            pref1+=grid[0][i];
            mini=min(mini,max(pref2,tot-pref1));
            pref2+=grid[1][i];
        }
        return mini;
    }
};