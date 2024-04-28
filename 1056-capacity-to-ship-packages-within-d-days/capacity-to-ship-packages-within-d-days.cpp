class Solution {
public:
    int sumOfElements(vector<int>&weights){
        int sum = 0 ;
        for(int i : weights) sum += i ;
        return sum ;
    }
    int findDays(vector<int>& weights, int mid){
        int days = 1, load = 0 ; 
        for(int i = 0 ; i < weights.size() ; i++){
            if(load+weights[i]>mid){
                days += 1 ;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days ;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end()); 
        int high = sumOfElements(weights);
        while(low<=high){
            int mid = (low+high)/2 ; 
            int noOfDays = findDays(weights,mid);
            if(noOfDays<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return low ;
    }
};