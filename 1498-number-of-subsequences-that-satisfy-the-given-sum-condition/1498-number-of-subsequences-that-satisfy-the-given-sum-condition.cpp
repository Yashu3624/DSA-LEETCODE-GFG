class Solution {
public:
     int mod = 1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end()) ; 
        int n= nums.size(); 
        vector<int>power(n) ; 
        power[0] = 1; 
        for(int i = 1 ; i < n ; i++){
            power[i] = (power[i-1]*2)%mod ; 
        }
        int cnt = 0 ;
        int l = 0 , r = nums.size()-1 ;
        while(l<=r){
            if(nums[l]+nums[r] <= target){
                cnt = ((int)cnt%mod+ power[r-l]%mod)%mod ; 
                l++ ;
            }
            else{
                r-- ;
            }
        }
        return cnt%mod ; 
    }
};