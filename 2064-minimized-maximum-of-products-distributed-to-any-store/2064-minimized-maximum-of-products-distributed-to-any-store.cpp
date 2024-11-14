class Solution {
public:
    int find(vector<int>&quantites , int mid,int n){
        int cnt = 0 ; 
        for(int i = 0 ; i < quantites.size() ; i++){
            if(quantites[i]<=mid){
                cnt++;
            }
            else{
                int num = quantites[i] ; 
                while(num>0){
                    num -= mid ;
                    cnt++ ;
                }
            }
            if(cnt>n) return false ;
        }
       
        return true ;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1 , high = *max_element(quantities.begin() , quantities.end());
        int maxi = INT_MAX ; 
        while(low<=high){
            int mid = (low+high)/2 ; 
            bool ans = find(quantities , mid,n) ; 
            if(ans){
                maxi = min(maxi , mid) ;
                high = mid-1 ;
            }
            else low = mid+1 ;
           
        }
        return  maxi ;
    }
};