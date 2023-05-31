class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
      sort(nums.begin() , nums.end()) ;
      map<int,int>mp ;
      for(int i = 0 ; i < nums.size() ; i++){
          mp[nums[i]]++;
      } 

      int maxi = 0 ;
      int  res = -1;
      for(auto i : mp){
          if(maxi< i.second && i.first % 2==0 ){
              maxi = i.second;
              res = i.first;
          }

      }

        return res;
        
    }
};