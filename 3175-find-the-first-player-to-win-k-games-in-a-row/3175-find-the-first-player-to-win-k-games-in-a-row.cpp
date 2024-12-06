class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int n = skills.size() ;
        int cnt = 0 , idx = 0 ; 
        for(int i = 1 ; i < n ; i++ ){
            if(skills[i]<skills[idx]) cnt++ ; 
            else{
                cnt = 1 ; 
                idx = i ; 
            }
            if(cnt==k)return idx ; 
        }
        return idx; 
    }
};