class Solution {
public:
    int findMax(vector<int>& piles){
        int maxi = INT_MIN;
        for(auto it : piles){
            if(it>=maxi){
                maxi = it;
            }
        }
        return maxi;
    }
    long long findTotalHours(vector<int>& piles,int mid){
        long long sum = 0 ;
        for(auto it : piles){
            sum =sum + (it/mid)+(it%mid !=0);
        }
        return sum;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = findMax(piles);
        int mid;
        while(low<=high){
            mid = (high+low)/2;
            long long Hours = findTotalHours(piles,mid);
            if(Hours <= h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};