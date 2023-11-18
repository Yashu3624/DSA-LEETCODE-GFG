class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        int sum = 0 ;
        int n = arr.size();
        unordered_map<int,int>mp ;
        int maxi = 0 ; 
        for(int i = 0 ; i < n ; i++)
            arr[i] = (arr[i]==0)?-1:1;
        for(int i = 0 ; i < n ; i++){
            
            sum += arr[i];
            if(sum==0){
                maxi = max(maxi,i+1);
            }
            if(mp.find(sum)!=mp.end()){
                maxi = max(maxi,i-mp[sum]);
            }
            else{
                mp[sum] = i;
            }
            
        }
        return maxi;
    }
};