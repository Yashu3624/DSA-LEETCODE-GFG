class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans = 0 ; 
        deque<int>maxi , mini ; 
        int j = 0 ; 
        for(int i = 0 ;  i < nums.size(); i++){
            while(!maxi.empty() && nums[maxi.back()]<= nums[i]){
                maxi.pop_back() ;
            }
            maxi.push_back(i) ; 
            while(!mini.empty() && nums[mini.back()]>= nums[i]){
                mini.pop_back() ;
            }
            mini.push_back(i) ; 
            while(nums[maxi.front()] - nums[mini.front()] > 2){
                j++ ; 
                if(maxi.front() <j ) maxi.pop_front() ; 
                if(mini.front()<j) mini.pop_front() ; 
            }
            ans += i-j+1 ;
        } 
        return ans;
    }
};