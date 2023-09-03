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
        for(int i = 0 ; i < piles.size() ; i++){
            if(piles[i]%mid==0){
                sum += piles[i]/mid;
            }
            else{
                sum += (piles[i]/mid) + 1 ;
            }
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