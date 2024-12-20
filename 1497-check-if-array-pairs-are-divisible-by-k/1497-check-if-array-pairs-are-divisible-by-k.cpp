class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {

        vector<int>freq(k,0) ; 
        for(int num : arr){
            int rem = ((num%k)+k)%k ;
            freq[rem]++ ;
        }
        if(freq[0]%2!=0) return 0 ; 
        for(int i = 1 ;i <=k/2 ; i++){
            if(freq[i]!=freq[k-i]) return false ;
        }
        return true;
    }
};