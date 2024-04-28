class Solution {
public:
    bool possible(vector<int>&arr , int d , int m , int k){
        int n = arr.size(); 
        int cnt = 0  ;
        int cntB = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]<=d){
                cnt += 1 ;
            }
            else{
                cntB += cnt/k ;
                cnt = 0 ; 
            }
        }
        cntB += cnt/k ; 
        return cntB>=m ;
    }
    int minDays(vector<int>& bloom, int m, int k) {
       if((long long)m*k > bloom.size()) return -1 ; 
       int low = *min_element(bloom.begin() , bloom.end());
       int high = *max_element(bloom.begin() , bloom.end());
       while(low<=high){
       int mid = (low+high)/2 ;

        if(possible(bloom,mid,m,k)){
            high = mid-1 ;
        }
        else{
            low = mid+1 ;
        }
       }
       return low ;
    }
};