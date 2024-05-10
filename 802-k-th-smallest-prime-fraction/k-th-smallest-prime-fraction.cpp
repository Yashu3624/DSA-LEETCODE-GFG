class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        priority_queue<pair<double,pair<int,int>>>maxi ; 
        int n = arr.size() ; 

        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j < n ; j++){
                maxi.push({((double)arr[i]/arr[j]),{arr[i],arr[j]}});
                if(maxi.size()>k) maxi.pop();
            }
        }
    
   
     return {maxi.top().second.first,maxi.top().second.second};
}
};