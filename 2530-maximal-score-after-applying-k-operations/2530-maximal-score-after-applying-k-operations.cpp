class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans = 0 ;
        priority_queue<int>pq ; 
        for(int i : nums) {
            pq.push(i) ;
        }
        while(k--){
            int num  = pq.top() ;
            pq.pop();
            ans += num ; 
            pq.push(ceil(num/3.0)) ; 
        }
        return ans ;
    }
};