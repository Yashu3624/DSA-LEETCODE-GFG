class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int cnt = 0 ; 
        unordered_set<int>mp(banned.begin() , banned.end()) ; 
        for(int i = 1 ; i <= n ; i++){
            if(mp.find(i)==mp.end() && maxSum>=i){
                cnt++ ; 
                maxSum -= i ;
            }
        }
        return cnt ;
    }
};