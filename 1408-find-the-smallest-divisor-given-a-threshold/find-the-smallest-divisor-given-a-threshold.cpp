class Solution {
public:
    int solve(vector<int>&arr , int mid , int k){
        int n = arr.size(); 
        long long int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            cnt += ceil((double)arr[i]/mid);
        }
    return cnt ;
    }
    int smallestDivisor(vector<int>& arr, int k) {
	
    int ans = -1;
	int low = 1, high = *max_element(arr.begin() ,arr.end()) ;
	while(low<=high){
		int mid = (low+high)/2 ; 
        if(solve(arr,mid,k)<=k){
            ans = mid;
            high = mid-1 ;
        }
        else{
            low = mid+1 ;
        }
		
	}  
    return ans ;  
    }
};